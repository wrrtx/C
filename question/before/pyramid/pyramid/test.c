#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[9] = { 0 };
	int x = 0;
	for (x = 0; x < n; x++)
	{
		scanf("%d", &n);
		arr[x] = n;
	}
	n = sizeof(arr) / sizeof(arr[0]);
	int y = 0;
	int z = 0;
	for (z = 0; z < n; z++)
	{
		for (y = 1; y <= arr[z]; y++)
		{
			int m = arr[z];
			for (x = 1; x <= m - 1; x++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	return 0;
}