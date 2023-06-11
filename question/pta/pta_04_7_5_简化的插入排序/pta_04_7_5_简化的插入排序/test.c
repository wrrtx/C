#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int n = 0, x = 0;
	scanf("%d", &n);
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (arr[i] > x)
			break;
	}
	int j = 0;
	for (j = n; j > i; j--)
	{
		arr[j] = arr[j - 1];
	}
	arr[i] = x;
	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);

	return 0;
}