#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n = 0;
	int arr[10][10] = { 0 };
	int i = 0, j = 0, k = 0;
	int c = 0;
	scanf("%d", &n);
	int l = n - 1;
	while (k <= l)
	{
		for (j = k; j <= l; j++)
		{
			c++;
			arr[k][j] = c;
		}
		for (i = k + 1; i <= l; i++)
		{
			c++;
			arr[i][l] = c;
		}
		for (j = l - 1; j >= k; j--)
		{
			c++;
			arr[l][j] = c;
		}
		for (i = l - 1; i > k; i--)
		{
			c++;
			arr[i][k] = c;
		}
		k++; 
		l--;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}