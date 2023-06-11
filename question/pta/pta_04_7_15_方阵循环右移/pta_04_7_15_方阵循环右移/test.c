#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int m = 0, n = 0;
	int arr[6][6] = { 0 };
	int i = 0, j = 0;
	scanf("%d%d", &m, &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int x = m % n;
	for (i = 0; i < n; i++)
	{
		for (j = n - x; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		for (j = 0; j < n - x; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}