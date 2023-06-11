#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000][10] = { 0 };
	int arr[1000] = { 0 };
	int max[1001] = { 0 };
	int i = 0, j = 0;
	int num = 0, maxn = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		for (j = 0; j < arr[i]; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < arr[i]; j++)
		{
			max[a[i][j]]++;
		}
	}
	maxn = max[1001];
	num = 1001;
	for (i = 1001; i > 0; i--)
	{
		if (maxn < max[i - 1])
		{
			maxn = max[i - 1];
			num = i - 1;
		}
	}
	printf("%d %d", num, maxn);

	return 0;
}