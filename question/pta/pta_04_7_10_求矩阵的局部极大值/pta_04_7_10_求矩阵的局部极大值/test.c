#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int m = 0, n = 0;
	int arr[100][20] = { 0 };
	int i = 0, j = 0;
	int c = 0;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 1; i < m - 1; i++)
	{
		for (j = 1; j < n - 1; j++)
		{
			if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i - 1][j])
			{
				printf("%d %d %d\n", arr[i][j], i + 1, j + 1);
				c = 1;
			}
		}
	}
	if (c == 0)
	{
		printf("None %d %d", m, n);
	}

	return 0;
}