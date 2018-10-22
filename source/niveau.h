u8 level[MAX_LVL][10*10] =
{
	/*//Niveau 
	{
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},*/
	//Niveau 1
	{
		0, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 2
	{
		0, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 3
	{
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 1, 1, 	0, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 4
	{
		0, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 1, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 5
	{
		2, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 6
	{
		2, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 7
	{
		0, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 2, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 2, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 8
	{
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 2, 0, 	0, 0, 0, 0, 0,
		2, 1, 1, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 9
	{
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 10
	{
		1, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 11
	{
		0, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 1, 1, 	0, 0, 0, 0, 0,
		2, 2, 0, 2, 2, 	0, 0, 0, 0, 0,
		1, 1, 2, 1, 1, 	0, 0, 0, 0, 0,
		0, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 12
	{
		0, 1, 2, 0, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 13
	{
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 2, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 2, 1, 	0, 0, 0, 0, 0,
		0, 0, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 14
	{
		2, 2, 2, 1, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		2, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 15
	{
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 16
	{
		0, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 17
	{
		0, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 18
	{
		2, 1, 1, 2, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		2, 1, 1, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 19
	{
		0, 1, 2, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 1, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 20
	{
		1, 2, 2, 1, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 21
	{
		2, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		2, 1, 2, 0, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 22
	{
		2, 2, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 23
	{
		1, 2, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 1, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 1, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	1, 2, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 24
	{
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		2, 1, 1, 2, 0, 	0, 0, 0, 0, 0,
		2, 1, 1, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 25
	{
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 26
	{
		2, 2, 2, 2, 1, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 2, 	0, 0, 0, 0, 0,
		1, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 27
	{
		2, 1, 2, 1, 2, 	1, 2, 1, 0, 0,
		2, 1, 2, 1, 2, 	1, 2, 1, 0, 0,
		2, 1, 2, 1, 2, 	1, 2, 1, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 28
	{
		1, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 29
	{
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 30
	{
		0, 0, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 2, 1, 0, 0, 	0, 0, 0, 0, 0,
		2, 1, 2, 1, 2, 	0, 0, 0, 0, 0,
		0, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 31
	{
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 32
	{
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 0, 2, 1, 	0, 0, 0, 0, 0,
		0, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 33
	{
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 34
	{
		0, 2, 2, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 2, 2, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 2, 2, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 35
	{
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		2, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		2, 1, 0, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 36
	{
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		1, 0, 1, 0, 1, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 37
	{
		0, 0, 0, 2, 1, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 0, 0, 	0, 0, 0, 0, 0,
		1, 2, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 38
	{
		2, 2, 1, 1, 0, 	0, 0, 0, 0, 0,
		2, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 0, 	0, 0, 0, 0, 0,
		2, 2, 0, 0, 0, 	0, 0, 0, 0, 0,
		2, 2, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 39
	{
		1, 0, 0, 0, 1, 	0, 0, 0, 0, 0,
		2, 1, 0, 1, 2, 	0, 0, 0, 0, 0,
		2, 2, 1, 2, 2, 	0, 0, 0, 0, 0,
		2, 1, 0, 1, 2, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 40
	{
		1, 2, 1, 2, 1, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 0, 1, 2, 1, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 2, 	0, 0, 0, 0, 0,
		1, 2, 1, 2, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 41
	{
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 42
	{
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		2, 2, 1, 2, 2, 	0, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 43
	{
		1, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 44
	{
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		1, 0, 1, 0, 1, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 45
	{
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 	1, 0, 0, 0, 0,
		0, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 46
	{
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		2, 1, 2, 1, 2, 	0, 0, 0, 0, 0,
		2, 1, 1, 1, 2, 	0, 0, 0, 0, 0,
		2, 1, 2, 1, 2, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 47
	{
		0, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 2, 1, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 2, 	0, 0, 0, 0, 0,
		1, 2, 2, 2, 1, 	0, 0, 0, 0, 0,
		0, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 48
	{
		0, 0, 0, 2, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 1, 0, 2, 0, 	0, 0, 0, 0, 0,
		0, 1, 0, 2, 0, 	0, 0, 0, 0, 0,
		2, 1, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 49
	{
		0, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 2, 2, 	0, 0, 0, 0, 0,
		1, 2, 0, 2, 1, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 50
	{
		0, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		1, 2, 2, 2, 1, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		1, 2, 2, 2, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 51
	{
		1, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 2, 1, 	0, 0, 0, 0, 0,
		0, 2, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 2, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 52
	{
		1, 2, 1, 2, 1, 	0, 0, 0, 0, 0,
		2, 0, 2, 0, 2, 	0, 0, 0, 0, 0,
		2, 2, 1, 2, 2, 	0, 0, 0, 0, 0,
		0, 1, 2, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 53
	{
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 1, 	0, 0, 0, 0, 0,
		1, 1, 0, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 0, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 54
	{
		2, 2, 1, 1, 1, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 1, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 1, 	0, 0, 0, 0, 0,
		2, 0, 0, 0, 1, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 55
	{
		0, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		1, 2, 0, 2, 1, 	0, 0, 0, 0, 0,
		0, 2, 0, 2, 0, 	0, 0, 0, 0, 0,
		1, 2, 0, 2, 1, 	0, 0, 0, 0, 0,
		0, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 56
	{
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		2, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		2, 1, 0, 2, 0, 	0, 0, 0, 0, 0,
		2, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		2, 1, 0, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 57
	{
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 2, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 58
	{
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 2, 	2, 0, 0, 0, 0,
		2, 2, 1, 1, 2, 	2, 0, 0, 0, 0,
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 59
	{
		0, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		1, 1, 0, 1, 1, 	0, 0, 0, 0, 0,
		2, 2, 0, 2, 2, 	0, 0, 0, 0, 0,
		1, 1, 0, 1, 1, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 60
	{
		0, 0, 0, 0, 1, 	1, 0, 0, 0, 0,
		0, 0, 0, 0, 1, 	1, 0, 0, 0, 0,
		0, 0, 0, 0, 1, 	1, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		1, 1, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 61
	{
		0, 2, 1, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 0, 2, 2, 	0, 0, 0, 0, 0,
		1, 0, 0, 0, 1, 	0, 0, 0, 0, 0,
		2, 2, 0, 2, 2, 	0, 0, 0, 0, 0,
		0, 2, 1, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 62
	{
		2, 2, 2, 0, 2, 	0, 0, 0, 0, 0,
		2, 0, 2, 0, 2, 	0, 0, 0, 0, 0,
		2, 0, 2, 0, 2, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	1, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	1, 0, 0, 0, 0,
		0, 1, 0, 1, 1, 	1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 63
	{
		1, 2, 2, 2, 1, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		1, 2, 2, 2, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 64
	{
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 0, 0, 1, 0, 	1, 0, 0, 0, 0,
		1, 1, 2, 1, 0, 	1, 0, 0, 0, 0,
		1, 0, 1, 2, 1, 	1, 0, 0, 0, 0,
		1, 0, 1, 0, 0, 	1, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 65
	{
		0, 2, 2, 1, 1, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 1, 1, 2, 	2, 0, 0, 0, 0,
		0, 1, 1, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 66
	{
		0, 0, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 0, 0, 1, 	1, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 	1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 67
	{
		0, 0, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		1, 2, 0, 0, 2, 	1, 0, 0, 0, 0,
		1, 2, 0, 0, 2, 	1, 0, 0, 0, 0,
		0, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 68
	{
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		2, 0, 2, 0, 2, 	0, 0, 0, 0, 0,
		2, 2, 1, 2, 2, 	0, 0, 0, 0, 0,
		2, 0, 2, 0, 2, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 69
	{
		2, 2, 2, 1, 1, 	0, 0, 0, 0, 0,
		1, 2, 1, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 2, 2, 1, 	0, 0, 0, 0, 0,
		1, 1, 1, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 70
	{
		0, 0, 0, 2, 1, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 1, 	1, 0, 0, 0, 0,
		0, 2, 2, 0, 0, 	1, 1, 0, 0, 0,
		2, 2, 0, 0, 0, 	1, 1, 0, 0, 0,
		2, 2, 0, 0, 0, 	1, 1, 0, 0, 0,
		2, 2, 0, 0, 1, 	1, 0, 0, 0, 0,
		0, 2, 2, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 2, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 71
	{
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 2, 1, 	0, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		1, 2, 1, 2, 1, 	0, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 72
	{
		0, 0, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		0, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 2, 1, 1, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 73
	{
		2, 2, 2, 2, 2, 	2, 2, 0, 0, 0,
		2, 0, 0, 1, 0, 	0, 2, 0, 0, 0,
		2, 0, 1, 1, 1, 	0, 2, 0, 0, 0,
		2, 1, 1, 0, 1, 	1, 2, 0, 0, 0,
		2, 0, 1, 1, 1, 	0, 2, 0, 0, 0,
		2, 0, 0, 1, 0, 	0, 2, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 2, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 74
	{
		2, 2, 2, 2, 2, 	2, 2, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 2, 0, 0, 0,
		0, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 2, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 2, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 75
	{
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 2, 1, 1, 2, 	0, 0, 0, 0, 0,
		2, 2, 1, 1, 1, 	2, 0, 0, 0, 0,
		2, 2, 1, 1, 1, 	2, 0, 0, 0, 0,
		0, 2, 1, 1, 2, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 76
	{
		2, 2, 1, 1, 1, 	2, 0, 0, 0, 0,
		2, 2, 1, 0, 0, 	1, 0, 0, 0, 0,
		1, 1, 2, 1, 0, 	1, 0, 0, 0, 0,
		1, 0, 1, 2, 1, 	1, 0, 0, 0, 0,
		1, 0, 0, 1, 2, 	2, 0, 0, 0, 0,
		2, 1, 1, 1, 2, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 77
	{
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 2, 2, 2, 	1, 0, 0, 0, 0,
		0, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 2, 0, 	0, 0, 0, 0, 0,
		2, 2, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 78
	{
		0, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 79
	{
		1, 1, 0, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 2, 1, 1, 	0, 0, 0, 0, 0,
		0, 2, 0, 2, 0, 	0, 0, 0, 0, 0,
		1, 1, 2, 1, 1, 	0, 0, 0, 0, 0,
		1, 1, 0, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 80
	{
		0, 0, 0, 1, 2, 	2, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 0, 0, 0, 0,
		2, 0, 0, 1, 2, 	1, 0, 0, 0, 0,
		2, 2, 2, 0, 2, 	0, 0, 0, 0, 0,
		0, 0, 2, 0, 2, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 81
	{
		2, 2, 2, 2, 2, 	2, 0, 0, 0, 0,
		2, 0, 0, 1, 1, 	2, 0, 0, 0, 0,
		2, 0, 0, 1, 1, 	2, 0, 0, 0, 0,
		2, 1, 1, 0, 0, 	2, 0, 0, 0, 0,
		2, 1, 1, 0, 0, 	2, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 82
	{
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 2, 1, 1, 	1, 0, 0, 0, 0,
		1, 2, 2, 0, 1, 	1, 0, 0, 0, 0,
		1, 1, 0, 2, 1, 	1, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 83
	{
		2, 2, 2, 2, 2, 	2, 0, 0, 0, 0,
		2, 1, 1, 1, 1, 	2, 0, 0, 0, 0,
		2, 1, 0, 0, 1, 	1, 0, 0, 0, 0,
		2, 1, 0, 0, 1, 	1, 0, 0, 0, 0,
		2, 1, 1, 1, 1, 	2, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 84
	{
		2, 2, 0, 0, 2, 	2, 0, 0, 0, 0,
		2, 2, 0, 0, 2, 	2, 0, 0, 0, 0,
		2, 2, 0, 0, 2, 	2, 0, 0, 0, 0,
		2, 2, 0, 0, 2, 	2, 0, 0, 0, 0,
		1, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 1, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 85
	{
		0, 2, 0, 0, 0, 	2, 0, 0, 0, 0,
		2, 1, 1, 1, 1, 	1, 2, 0, 0, 0,
		0, 1, 0, 0, 0, 	1, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 	1, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 	1, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 	1, 0, 0, 0, 0,
		2, 1, 1, 1, 1, 	1, 2, 0, 0, 0,
		0, 2, 0, 0, 0, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 86
	{
		0, 1, 1, 2, 2, 	0, 0, 0, 0, 0,
		1, 0, 2, 1, 0, 	1, 0, 0, 0, 0,
		1, 2, 2, 2, 1, 	1, 0, 0, 0, 0,
		1, 1, 2, 2, 2, 	1, 0, 0, 0, 0,
		1, 0, 1, 2, 0, 	1, 0, 0, 0, 0,
		0, 2, 2, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 87
	{
		2, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 1, 0, 1, 	1, 0, 0, 0, 0,
		1, 1, 0, 0, 0, 	1, 0, 0, 0, 0,
		1, 0, 0, 0, 1, 	1, 0, 0, 0, 0,
		1, 1, 0, 1, 1, 	2, 0, 0, 0, 0,
		1, 1, 1, 1, 2, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 88
	{
		1, 1, 1, 2, 2, 	2, 0, 0, 0, 0,
		1, 0, 1, 2, 0, 	2, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 	2, 0, 0, 0, 0,
		1, 1, 1, 2, 2, 	2, 0, 0, 0, 0,
		0, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		1, 1, 1, 2, 2, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 89
	{
		0, 1, 0, 0, 0, 	1, 0, 0, 0, 0,
		1, 1, 0, 2, 0, 	1, 1, 0, 0, 0,
		1, 1, 2, 1, 2, 	1, 1, 0, 0, 0,
		1, 1, 0, 2, 0, 	1, 1, 0, 0, 0,
		0, 1, 0, 0, 0, 	1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 90
	{
		0, 0, 0, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 1, 0, 1, 0, 	1, 0, 0, 0, 0,
		2, 1, 1, 2, 1, 	1, 2, 0, 0, 0,
		0, 1, 0, 1, 0, 	1, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 91
	{
		1, 1, 1, 2, 2, 	2, 0, 0, 0, 0,
		1, 1, 0, 0, 2, 	2, 0, 0, 0, 0,
		0, 1, 0, 0, 2, 	0, 0, 0, 0, 0,
		0, 1, 0, 0, 2, 	0, 0, 0, 0, 0,
		1, 1, 0, 0, 2, 	2, 0, 0, 0, 0,
		1, 1, 1, 2, 2, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 92
	{
		0, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 2, 	0, 0, 0, 0, 0,
		1, 1, 0, 1, 2, 	1, 0, 0, 0, 0,
		2, 1, 1, 0, 2, 	2, 0, 0, 0, 0,
		0, 2, 2, 2, 1, 	0, 0, 0, 0, 0,
		0, 0, 1, 2, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 93
	{
		2, 2, 2, 2, 2, 	2, 0, 0, 0, 0,
		2, 0, 0, 0, 0, 	2, 0, 0, 0, 0,
		2, 0, 1, 1, 2, 	2, 0, 0, 0, 0,
		2, 0, 1, 1, 0, 	2, 0, 0, 0, 0,
		2, 0, 0, 0, 0, 	2, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 94
	{
		0, 1, 0, 1, 0, 	1, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		0, 0, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 2, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 95
	{
		0, 0, 2, 2, 2, 	0, 0, 0, 0, 0,
		1, 1, 1, 0, 2, 	1, 1, 0, 0, 0,
		1, 0, 1, 0, 2, 	0, 1, 0, 0, 0,
		1, 0, 1, 2, 2, 	0, 1, 0, 0, 0,
		1, 1, 1, 0, 1, 	1, 1, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 96
	{
		0, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		1, 1, 1, 2, 1, 	1, 1, 0, 0, 0,
		0, 1, 1, 1, 1, 	1, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 1, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 97
	{
		2, 2, 1, 1, 1, 	2, 2, 0, 0, 0,
		2, 0, 1, 0, 1, 	0, 2, 0, 0, 0,
		2, 2, 2, 2, 2, 	2, 2, 0, 0, 0,
		2, 0, 1, 0, 1, 	0, 2, 0, 0, 0,
		2, 2, 1, 1, 1, 	2, 2, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 98
	{
		1, 1, 0, 0, 1, 	1, 0, 0, 0, 0,
		2, 2, 0, 0, 2, 	2, 0, 0, 0, 0,
		0, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		0, 0, 2, 2, 0, 	0, 0, 0, 0, 0,
		0, 2, 2, 2, 2, 	0, 0, 0, 0, 0,
		2, 2, 0, 0, 2, 	2, 0, 0, 0, 0,
		1, 1, 0, 0, 1, 	1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 99
	{
		2, 2, 2, 0, 1, 	1, 1, 0, 0, 0,
		2, 0, 2, 2, 1, 	0, 1, 0, 0, 0,
		2, 2, 2, 0, 1, 	1, 1, 0, 0, 0,
		0, 2, 0, 0, 0, 	1, 0, 0, 0, 0,
		1, 1, 1, 0, 2, 	2, 2, 0, 0, 0,
		1, 0, 1, 1, 2, 	0, 2, 0, 0, 0,
		1, 1, 1, 0, 2, 	2, 2, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
	//Niveau 100
	{
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 1, 0, 1, 	0, 0, 0, 0, 0,
		2, 2, 1, 2, 1, 	2, 2, 0, 0, 0,
		2, 0, 1, 0, 1, 	0, 2, 0, 0, 0,
		2, 2, 1, 2, 1, 	2, 2, 0, 0, 0,
		0, 0, 1, 0, 1, 	0, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 	0, 0, 0, 0, 0
	},
};