#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int n = 0;
	char a[10][101] = { '\0' };
	int arr[10][3] = { 0 };
	int i = 0, j = 0, k = 0;
	int f = 0;
	double ava = 0;
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		gets(a[i]);
		int sz = strlen(a[i]);
		for (j = sz - 1, k = 0; j >= 0; j--, k++)
		{
			if (a[i][j] >= 48 && a[i][j] <= 57)
				arr[i][0] += (a[i][j] - 48) * pow(10, k);
			else
			{
				arr[i][1] = j;
				break;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		ava += 1.0 / n * arr[i][0];
	}
	printf("%.2f\n", ava);
	for (i = 0; i < n; i++)
	{
		if (arr[i][0] < ava)
		{
			for (j = 0; j < arr[i][1]; j++)
			{
				if (a[i][j] == ' ')
				{
					arr[i][2] = j;
					break;
				}
			}
			for (j = arr[i][2] + 1, k = arr[i][1]; j < k; j++)
			{
				printf("%c", a[i][j]);
			}
			printf(" ");
			for (j = 0; j < arr[i][2]; j++)
			{
				printf("%c", a[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}