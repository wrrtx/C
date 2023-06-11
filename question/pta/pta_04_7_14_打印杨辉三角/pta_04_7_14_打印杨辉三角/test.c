#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n = 0;
	int arr[10][11] = { 0 };
	scanf("%d", &n);
	int i = 0, j = 0, k = 0;
	for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			if (j == 0)
			{
				for (k = 0; k < n - i - 1; k++)
				{
					printf(" ");
				}
				printf("%4d", arr[i][j]);
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				printf("%4d", arr[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}