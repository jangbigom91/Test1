#include<stdio.h>
#include<stdlib.h>


int main(void)
{

	int iArray[5][4][3][2] =
	{
		{
			{
				{0,1},
				{2,3},
				{4,5}
			},
			{
				{6,7},
				{8,9},
				{10, 11},
			},
			{
				{12,13},
				{14,15},
				{16,17}
			},
			{
				{18,19},
				{20,21},
				{22,23}
			}
		},
		{
			{
				{24,25},
				{26,27},
				{28,29}
			},
			{
				{30,31},
				{32,33},
				{34,35}
			},
			{
				{36,37},
				{38,39},
				{40,41}
			},
			{
				{42,43},
				{44,45},
				{46,47}
			}
		},
		{
			{
				{48,49},
				{50,51},
				{52,53}
			},
			{
				{54,55},
				{56,57},
				{58,59}
			},
			{
				{60,61},
				{62,63},
				{64,65}
			},
			{
				{66,67},
				{68,69},
				{70,71}
			}
		},
		{
			{
				{72,73},
				{74,75},
				{76,77}
			},
			{
				{78,79},
				{80,81},
				{82,83}
			},
			{
				{84,85},
				{86,87},
				{88,89}
			},
			{
				{90,91},
				{92,93},
				{94,95}
			}
		},
		{
			{
				{96,97},
				{98,99},
				{100,101}
			},
			{
				{102,103},
				{104,105},
				{106,107}
			},
			{
				{108,109},
				{110,111},
				{112,113}
			},
			{
				{114,115},
				{116,117},
				{118,119}
			}
		}
	};












	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				for (int l = 0; l < 2; l++)
				{
					if (!(iArray[i][j][k][l] % 2))
						printf_s("%d\n", iArray[i][j][k][l]);
				}
			}
		}
	}
}