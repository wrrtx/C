#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int a[2][2] = { 0 };
	int a1[100][100] = { 0 };
	int a2[100][100] = { 0 };
	int a3[100][100] = { 0 };
	int i = 0, j = 0, k = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
		if (i == 0)
		{
			for (j = 0; j < a[i][0]; j++)
			{
				for (k = 0; k < a[i][1]; k++)
				{
					scanf("%d", &a1[j][k]);
				}
			}
		}
		else
		{
			for (j = 0; j < a[i][0]; j++)
			{
				for (k = 0; k < a[i][1]; k++)
				{
					scanf("%d", &a2[j][k]);
				}
			}
		}
	}
	for (i = 0; i < a[0][0]; i++)
	{
		for (j = 0; j < a[1][1]; j++)
		{
			k = 0;
			while (k != a[0][1])
			{
				a3[i][j] += a1[i][k] * a2[k][j];
				k++;
			}
		}
	}
	if (a[0][1] != a[1][0])
	{
		printf("Error: %d != %d", a[0][1], a[1][0]);
	}
	else
	{
		printf("%d %d\n", a[0][0], a[1][1]);
		for (i = 0; i < a[0][0]; i++)
		{
			for (j = 0; j < a[1][1]; j++)
			{
				if (j == 0)
					printf("%d", a3[i][j]);
				else
					printf(" %d", a3[i][j]);
			}
			if (j == a[1][1])
				printf("\n");
		}
	}

	return 0;
}