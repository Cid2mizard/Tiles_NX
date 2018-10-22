#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <dirent.h>

#include <switch.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

#define UNLOCKED 0
#define LOCKED 1
#define SOLVED 1
#define MAX_LVL 100

#include "niveau.h"

u8 CASE_X, CASE_Y;
u8 TILE_X, TILE_Y;

touchPosition Stylus;
u32 kDown;

SDL_Window * 	window;
SDL_Renderer * 	renderer;
SDL_Surface *	surface;

TTF_Font* font;

Mix_Chunk *son;
bool sound_played;

u8 MAX_TILEX;
u8 MAX_TILEY;
u8 level_courant[10*9];
u8 niveau_courant;

//A sauvergarder
bool niveau_unlocked[MAX_LVL];
bool niveau_solved[MAX_LVL];
u8 niveau_best[MAX_LVL];
//End save

u8 page_courante;
u8 colonnes, lignes;
u8 i, j;
u8 frame;
u8 case_totale;
u8 mon_total;
u16 current;
u8 count_star;

bool game_mode;
bool title_mode;
bool menu_mode;
bool victoire;

typedef struct 
{
	SDL_Texture * texture;
	SDL_Surface * surface;
	SDL_Rect SrcR;
	SDL_Rect DestR;
} 
images;
images Background, Sprite[8];

#define SAVEPATH "sdmc:/switch/Tiles_NX/"
#define SAVEFILE "Tiles_NX.sav"

char filename[35]; // strlen(SAVEPATH) + strlen(SAVEFILE) + 1 = 35
const char* savepath;

static inline SDL_Color SDL_MakeColour(Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
	SDL_Color colour = {r, g, b, a};
	return colour;
}

#define WHITE		SDL_MakeColour(255, 255, 255, 255)
#define GREEN		SDL_MakeColour(67, 170, 87, 255)
#define PURPLE		SDL_MakeColour(101, 82, 105, 255)
#define YELLOW		SDL_MakeColour(230, 227, 8, 255)
#define GREY_F		SDL_MakeColour(64, 64, 64, 128)

bool DowntouchInBox(touchPosition touch, int x1, int y1, int x2, int y2)
{
	int tx=touch.px;
	int ty=touch.py;

	if (kDown & KEY_TOUCH && tx > x1 && tx < x2 && ty > y1 && ty < y2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int Srcx, int Srcy, int Destx, int Desty, int w, int h)
{
	SDL_Rect srce;
	srce.x = Srcx;
	srce.y = Srcy;
	srce.w = w;
	srce.h = h;

	SDL_Rect dest;
	dest.x = Destx;
	dest.y = Desty;
	dest.w = w;
	dest.h = h;

	SDL_RenderCopy(ren, tex, &srce, &dest);
}

void SDL_DrawText(SDL_Renderer *renderer, TTF_Font *font, int x, int y, SDL_Color colour, const char *text)
{
	SDL_Surface *surface = TTF_RenderText_Blended_Wrapped(font, text, colour, 1280);
	SDL_SetSurfaceAlphaMod(surface, colour.a);
	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	SDL_Rect position;
	position.x = x; position.y = y;
	SDL_QueryTexture(texture, NULL, NULL, &position.w, &position.h);
	SDL_RenderCopy(renderer, texture, NULL, &position);
	SDL_DestroyTexture(texture);
}

void SDL_DrawTextf(SDL_Renderer *renderer, TTF_Font *font, int x, int y, SDL_Color colour, const char* text, ...)
{
	char buffer[256];
	va_list args;
	va_start(args, text);
	vsnprintf(buffer, 256, text, args);
	SDL_DrawText(renderer, font, x, y, colour, buffer);
	va_end(args);
}

void SDL_DrawRect(SDL_Renderer *renderer, int x, int y, int w, int h, SDL_Color colour)
{
	SDL_Rect rect;
	rect.x = x; rect.y = y; rect.w = w; rect.h = h;
	SDL_SetRenderDrawColor(renderer, colour.r, colour.g, colour.b, colour.a);
	SDL_RenderFillRect(renderer, &rect);
}

void sauvegarder()
{
	FILE *file = fopen(filename,"w+b");

	//Write file
	for (i = 0; i < MAX_LVL; i++)
	{
		fwrite(&niveau_unlocked[i], sizeof(niveau_unlocked[i]), 1, file);
		fwrite(&niveau_solved[i], sizeof(niveau_solved[i]), 1, file);
		fwrite(&niveau_best[i], sizeof(niveau_best[i]), 1, file);
	}
	//Close file
	fclose(file);
}


void charger()
{
	u8 erreur = 0;

	FILE* file = fopen(filename, "r+b");

	if (file != 0)
	{
		for (i = 0; i < MAX_LVL; i++)
		{
			fread(&niveau_unlocked[i], 1, sizeof(niveau_unlocked[i]), file);
			fread(&niveau_solved[i], 1, sizeof(niveau_solved[i]), file);
			fread(&niveau_best[i], 1, sizeof(niveau_best[i]), file);
		}
		//Close file
		fclose(file);
	}
	else
	{
		erreur = 1;
	}

	if (erreur == 1)
	{
		sauvegarder();
	}
}

void InitLevel()
{
	MAX_TILEX = 1;
	MAX_TILEY = 1;
	case_totale = 0;
	mon_total = 0;
	current = 0;
	sound_played = false;

	//On determine la taille
	for(colonnes = 0; colonnes < 10; colonnes++)
	{
		for(lignes = 0; lignes < 9; lignes++)
		{
			if (level[niveau_courant][colonnes + 10*lignes] != 0)
			{
				if (colonnes > MAX_TILEX-1) MAX_TILEX = colonnes + 1;
				if (lignes > MAX_TILEY-1) MAX_TILEY = lignes + 1;
			}
		}
	}

	//On récupère le niveau courant dans le tableau
	for(colonnes = 0; colonnes < 10; colonnes++)
	{
		for(lignes = 0; lignes < 9; lignes++)
		{
			level_courant[colonnes + 10*lignes] = level[niveau_courant][colonnes + 10*lignes];
			if (level_courant[colonnes + 10*lignes] != 0)
				case_totale++;
			if (level_courant[colonnes + 10*lignes] == 2)
				mon_total++;
		}
	}
}

void Affiche_nombre(u8 valeur, u16 posx, u16 posy)
{
	u8 unite;
	u8 dizaine;
	u16 centaine;

	if (valeur < 10)
	{
		unite = valeur;
		dizaine = 0;
		centaine = 0;

		renderTexture(Sprite[3].texture, renderer, unite*24, 0, posx+36, posy+33, 24, 30);
	}
	else if (valeur < 100)
	{
		centaine = 0;
		dizaine = (valeur / 10);
		unite = valeur - (dizaine * 10);

		renderTexture(Sprite[3].texture, renderer, dizaine*24, 0, posx+21, posy+33, 24, 30);
		renderTexture(Sprite[3].texture, renderer, unite*24, 0, posx+51, posy+33, 24, 30);
	}
	else
	{
		centaine = (valeur / 100);
		dizaine = (valeur - (centaine * 100)) / 10;
		unite = valeur - (centaine * 100) - (dizaine * 10);

		renderTexture(Sprite[3].texture, renderer, centaine*24, 0, posx+3, posy+33, 24, 30);
		renderTexture(Sprite[3].texture, renderer, dizaine*24, 0, posx+33, posy+33, 24, 30);
		renderTexture(Sprite[3].texture, renderer, unite*24, 0, posx+63, posy+33, 24, 30);
	}
}

void ManageInput()
{
	hidScanInput();

	kDown = hidKeysDown(CONTROLLER_P1_AUTO);
	hidTouchRead(&Stylus, 0);

	//***ECRAN TITRE
	if (title_mode)
	{
		//Commencer
		if (DowntouchInBox(Stylus, 0, 0, 1280, 720))
		{
			menu_mode = true;
			title_mode = false;
		}
	}
	//***ECRAN MENU***
	else if (menu_mode)
	{
		//Les pages
		if (DowntouchInBox(Stylus, 436, 642, 844, 690))
		{
			page_courante = (Stylus.px-436)/60;
		}
		//Les niveaux
		else if (DowntouchInBox(Stylus, 340, 21, 940, 621))
		{
			niveau_courant = page_courante*16 + (Stylus.px-340)/150 + ((Stylus.py-21)/150)*4;

			if ((niveau_unlocked[niveau_courant] == UNLOCKED) && (niveau_courant < 100))
			{
				menu_mode = false;
				game_mode = true;
				InitLevel();
			}
		}
		//EXIT
		else if (DowntouchInBox(Stylus, 24, 24, 120, 120))
		{
			title_mode = true;
			menu_mode = false;
		}
	}
	//***ECRAN JEU***
	else if (game_mode)
	{
		if (!victoire)
		{
			//Les tiles
			if (DowntouchInBox(Stylus, (1280-(MAX_TILEX*78))/2, (720-(MAX_TILEY*78))/2, (1280-(MAX_TILEX*78))/2 + MAX_TILEX*78, (720-(MAX_TILEY*78))/2 + MAX_TILEY*78))
			{
				CASE_X = (Stylus.px-(1280-(MAX_TILEX*78))/2)/78;
				CASE_Y = (Stylus.py-(720-(MAX_TILEY*78))/2)/78;

				if (level_courant[CASE_Y*10 + CASE_X] != 0)
				{
					current++;

					if (level_courant[CASE_Y*10 + CASE_X] == 1)
					{
						level_courant[CASE_Y*10 + CASE_X] = 2;
						mon_total++;
					}
					else
					{
						level_courant[CASE_Y*10 + CASE_X] = 1;
						mon_total--;
					}
					//Gauche
					if ((CASE_X > 0) && (level_courant[CASE_Y*10 + CASE_X-1] != 0))
					{
						if (level_courant[CASE_Y*10 + CASE_X-1] == 1)
						{
							level_courant[CASE_Y*10 + CASE_X-1] = 2;
							mon_total++;
						}
						else
						{
							level_courant[CASE_Y*10 + CASE_X-1] = 1;
							mon_total--;
						}
					}
					//Droite
					if ((CASE_X < 9) && (level_courant[CASE_Y*10 + CASE_X+1] != 0))
					{
						if (level_courant[CASE_Y*10 + CASE_X+1] == 1)
						{
							level_courant[CASE_Y*10 + CASE_X+1] = 2;
							mon_total++;
						}
						else
						{
							level_courant[CASE_Y*10 + CASE_X+1] = 1;
							mon_total--;
						}
					}
					//Haut
					if ((CASE_Y > 0) && (level_courant[(CASE_Y-1)*10 + CASE_X] != 0))
					{
						if (level_courant[(CASE_Y-1)*10 + CASE_X] == 1)
						{
							level_courant[(CASE_Y-1)*10 + CASE_X] = 2;
							mon_total++;
						}
						else
						{
							level_courant[(CASE_Y-1)*10 + CASE_X] = 1;
							mon_total--;
						}
					}
					//Bas
					if ((CASE_Y < 8) && (level_courant[(CASE_Y+1)*10 + CASE_X] != 0))
					{
						if (level_courant[(CASE_Y+1)*10 + CASE_X] == 1)
						{
							level_courant[(CASE_Y+1)*10 + CASE_X] = 2;
							mon_total++;
						}
						else
						{
							level_courant[(CASE_Y+1)*10 + CASE_X] = 1;
							mon_total--;
						}
					}

					//Condition de victoire
					if (mon_total == case_totale)
					{
						victoire = true;

						//Le score
						if (current < niveau_best[niveau_courant])
							niveau_best[niveau_courant] = current;
						else if (niveau_best[niveau_courant] == 0)
							niveau_best[niveau_courant] = current;

						//On résoud le niveau
						niveau_solved[niveau_courant] = SOLVED;

						//On debloque les 4 prochains niveau
						for (i = 1; i < 5; i++)
						{
							if (niveau_courant+i < MAX_LVL-1)
							{
								niveau_unlocked[niveau_courant+i] = UNLOCKED;
							}
						}

						//Compteur d'étoile à zéro
						count_star = 0;
						//On compte les étoiles
						for (i = 0; i < MAX_LVL; i++)
						{
							if (niveau_solved[i] == SOLVED)
							{
								count_star++;
							}
						}
					}
				}
			}
			//EXIT
			else if (DowntouchInBox(Stylus, 24, 24, 120, 120))
			{
				menu_mode = true;
				game_mode = false;
			}
			//RESTART
			else if (DowntouchInBox(Stylus, 1160, 24, 1256, 120))
			{
				InitLevel();
			}
		}
		else if (victoire)
		{
			//Quitter
			if (DowntouchInBox(Stylus, 289, 366, 289+192, 366+192))
			{
				menu_mode = true;
				game_mode = false;
				victoire = false;
			}
			//Rejouer
			else if (DowntouchInBox(Stylus, 544, 366, 544+192, 366+192))
			{
				victoire = false;
				InitLevel();
			}
			//Suivant
			else if (DowntouchInBox(Stylus, 799, 366, 799+192, 366+192))
			{
				niveau_courant++;
				victoire = false;
				InitLevel();
			}
		}
	}
}

void printGame()
{
	//Le fond vert
	SDL_SetRenderDrawColor(renderer, 68, 170, 85, 255);

	//CLEAR
	SDL_RenderClear(renderer);

	//***ECRAN TITRE***
	if (title_mode)
	{
		//On affiche le niveau 43
		for(colonnes = 0; colonnes < 4; colonnes++)
		{
			for(lignes = 0; lignes < 7; lignes++)
			{
				if (level[42][colonnes + 10*lignes] == 1)
				{
					SDL_DrawRect(renderer, 3 + (1280-(4*54))/2 + colonnes*54, (720-(7*54))/2 + lignes*54, 48, 48, WHITE);
				}
			}
		}

		//La version du jeu + auteur
		SDL_DrawTextf(renderer, font, 1010, 690, WHITE, "BY CID2MIZARD (2018)");
		SDL_DrawTextf(renderer, font, 10, 690, WHITE, "TILES NX v1.0");
	}
	//***ECRAN MENU***
	else if (menu_mode)
	{
		//Les icons levels
		for(colonnes = 0; colonnes < 4; colonnes++)
		{
			for(lignes = 0; lignes < 4; lignes++)
			{
				//Si affichable
				if ((page_courante*16 + lignes*4 + colonnes) < MAX_LVL)
				{
					//Les tiles
					renderTexture(Sprite[1].texture, renderer, niveau_unlocked[page_courante*16 + lignes*4 + colonnes]*96, 0, 367 + colonnes*150, 48 + lignes*150, 96, 96);

					//Les étoiles
					if (niveau_solved[page_courante*16 + lignes*4 + colonnes] == SOLVED)
					{
						renderTexture(Sprite[4].texture, renderer, 0, 0, 401 + colonnes*150, 111 + lignes*150, 27, 27);
					}

					//Les nombres
					Affiche_nombre(page_courante*16 + lignes*4 + colonnes + 1, 367 + colonnes*150, 45 + lignes*150);
				}
			}
		}

		//Les icons pages
		for(i = 0; i < 7; i++)
			renderTexture(Sprite[0].texture, renderer, 0, 0, 436 + i*60, 642, 48, 48);

		//Page courante
		renderTexture(Sprite[0].texture, renderer, 48, 0, 436 + page_courante*60, 642, 48, 48);

		//Exit
		renderTexture(Sprite[1].texture, renderer, 192, 0, 24, 24, 96, 96);

		//Etoiles
		SDL_DrawRect(renderer, 1160, 24, 96, 96, GREY_F);
		renderTexture(Sprite[4].texture, renderer, 0, 0, 1193, 36, 27, 27);
		Affiche_nombre(count_star, 1160, 42);
	}
	//***ECRAN JEU***
	else if (game_mode)
	{
		//On affiche les tiles jaune ou violet
		for(colonnes = 0; colonnes < MAX_TILEX; colonnes++)
		{
			for(lignes = 0; lignes < MAX_TILEY; lignes++)
			{
				if (level_courant[colonnes + 10*lignes] == 1)
					SDL_DrawRect(renderer, 3 + (1280-(MAX_TILEX*78))/2 + colonnes*78, (720-(MAX_TILEY*78))/2 + lignes*78, 72, 72, PURPLE);
				else if (level_courant[colonnes + 10*lignes] == 2)
					SDL_DrawRect(renderer, 3 + (1280-(MAX_TILEX*78))/2 + colonnes*78, (720-(MAX_TILEY*78))/2 + lignes*78, 72, 72, YELLOW);
			}
		}

		if (victoire)
		{
			//Le fond transparent
			SDL_DrawRect(renderer, 265, 198, 750, 384, GREY_F);
			//Good Job!
			renderTexture(Sprite[6].texture, renderer, 0, 0, 478, 222, 324, 54);
			//Big star
			renderTexture(Sprite[7].texture, renderer, 0, 0, 610, 294, 60, 57);

			//Quitter
			renderTexture(Sprite[2].texture, renderer, 0, 0, 289, 366, 192, 192);
			//Rejouer
			renderTexture(Sprite[2].texture, renderer, 192, 0, 544, 366, 192, 192);
			//Suivant
			renderTexture(Sprite[2].texture, renderer, 384, 0, 799, 366, 192, 192);

			if (!sound_played)
				Mix_PlayChannel(1, son, 0);

			sound_played = true;
		}
		else
		{
			//Exit
			renderTexture(Sprite[1].texture, renderer, 192, 0, 24, 24,  96, 96);
			//Restart
			renderTexture(Sprite[1].texture, renderer, 288, 0, 1160, 24, 96, 96);
		}

		//Level		
		SDL_DrawRect(renderer, 24, 600, 141, 117, GREY_F);
		renderTexture(Sprite[5].texture, renderer, 270, 0, 27, 609, 135, 27);
		Affiche_nombre(niveau_courant+1, 48, 645);

		//Current
		SDL_DrawRect(renderer, 971, 600, 141, 117, GREY_F);
		renderTexture(Sprite[5].texture, renderer, 0, 0, 974, 609, 135, 27);
		Affiche_nombre(current, 995, 645);

		//Best
		SDL_DrawRect(renderer, 1118, 600, 141, 117, GREY_F);
		renderTexture(Sprite[5].texture, renderer, 135, 0, 1121, 609, 135, 27);
		Affiche_nombre(niveau_best[niveau_courant], 1142, 645);
	}

	//REFRESH
    SDL_RenderPresent(renderer);
}

int main()
{
	// Initialize all
	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG);
	TTF_Init();
	romfsInit();

	//Sound
	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
	Mix_AllocateChannels(2);

	son = Mix_LoadWAV("romfs:/resources/sounds/SynthChime2.wav");

	//La sauvegarde
	savepath = SAVEPATH;
	struct stat s;
	int err = stat(SAVEPATH, &s);

	if(err == -1)
	{
		savepath = "./";
	}
	else if(!S_ISDIR(s.st_mode))
	{
		savepath = "./";
	}

	sprintf(filename, "%s%s", savepath, SAVEFILE);

	// Create an SDL window & renderer
	window = SDL_CreateWindow("Main-Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 0, 0, SDL_WINDOW_FULLSCREEN_DESKTOP);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	SDL_SetRenderDrawBlendMode(renderer,SDL_BLENDMODE_BLEND);

	// Font loading
	font = TTF_OpenFont("romfs:/resources/fonts/MiniSet2.ttf", 24);

	//Sprite loading
	Sprite[0].surface = IMG_Load("romfs:/resources/images/white_circle.png");
	Sprite[0].texture = SDL_CreateTextureFromSurface(renderer, Sprite[0].surface);
	SDL_FreeSurface(Sprite[0].surface);

	Sprite[1].surface = IMG_Load("romfs:/resources/images/green_square.png");
	Sprite[1].texture = SDL_CreateTextureFromSurface(renderer, Sprite[1].surface);
	SDL_FreeSurface(Sprite[1].surface);

	Sprite[2].surface = IMG_Load("romfs:/resources/images/grey_square.png");
	Sprite[2].texture = SDL_CreateTextureFromSurface(renderer, Sprite[2].surface);
	SDL_FreeSurface(Sprite[2].surface);

	Sprite[3].surface = IMG_Load("romfs:/resources/images/number.png");
	Sprite[3].texture = SDL_CreateTextureFromSurface(renderer, Sprite[3].surface);
	SDL_FreeSurface(Sprite[3].surface);

	Sprite[4].surface = IMG_Load("romfs:/resources/images/star.png");
	Sprite[4].texture = SDL_CreateTextureFromSurface(renderer, Sprite[4].surface);
	SDL_FreeSurface(Sprite[4].surface);

	Sprite[5].surface = IMG_Load("romfs:/resources/images/texte.png");
	Sprite[5].texture = SDL_CreateTextureFromSurface(renderer, Sprite[5].surface);
	SDL_FreeSurface(Sprite[5].surface);

	Sprite[6].surface = IMG_Load("romfs:/resources/images/good_job.png");
	Sprite[6].texture = SDL_CreateTextureFromSurface(renderer, Sprite[6].surface);
	SDL_FreeSurface(Sprite[6].surface);

	Sprite[7].surface = IMG_Load("romfs:/resources/images/big_star.png");
	Sprite[7].texture = SDL_CreateTextureFromSurface(renderer, Sprite[7].surface);
	SDL_FreeSurface(Sprite[7].surface);

	//On débloque les 4 premiers niveaux
	for (i = 4; i < MAX_LVL; i++)
		niveau_unlocked[i] = LOCKED;

	//On charge la sauvegarde
	charger();

	//On compte les étoiles
	for (i = 0; i < MAX_LVL; i++)
		if (niveau_solved[i] == SOLVED)
			count_star++;

	//On active l'écran titre
	title_mode = true;

	Mix_Music *musique;
	musique = Mix_LoadMUS("romfs:/resources/sounds/Mourioche_loop-house-5.mp3");
	Mix_PlayMusic(musique, -1);

	while (appletMainLoop())
	{
		//Gestion des Inputs
		ManageInput();

		//Gestion de l'affichage
		printGame();

		if (kDown & KEY_PLUS) break;
	}

	//On nettoi le son
	Mix_FreeMusic(musique);
	Mix_FreeChunk(son);
	Mix_CloseAudio();

	//On sauvegarde la partie
	sauvegarder();

	//On détruit les textures
	for (i = 0; i < 8; i++)
		SDL_DestroyTexture(Sprite[i].texture);

	//On detruit la fenètre
	SDL_DestroyWindow(window);

	//On quitte
	SDL_Quit();
	return EXIT_SUCCESS;
}
