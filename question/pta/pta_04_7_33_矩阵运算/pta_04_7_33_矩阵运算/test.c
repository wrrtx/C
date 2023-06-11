#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n = 0;
	int a[20][20] = { 0 };
	int i = 0, j = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i != n - 1 && j != n - 1 && i + j + 1 != n)
			{
				sum += a[i][j];
			}
		}
	}
	printf("%d", sum);

	return 0;
}