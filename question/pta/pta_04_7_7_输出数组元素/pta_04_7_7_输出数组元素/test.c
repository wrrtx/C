#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0, c = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		arr2[i] = arr1[i + 1] - arr1[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		if (c % 3 == 0)
			printf("%d", arr2[i]);
		else
			printf(" %d", arr2[i]);
		c++;
		if (c % 3 == 0)
			printf("\n");
	}

	return 0;
}