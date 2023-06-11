#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0, a = 0;
	scanf("%d", &n);
	int arr[10] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz = n;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (i <= sz - 2)
			printf("%d ", arr[i]);
		else if (i == sz - 1)
			printf("%d", arr[i]);
	}

	return 0;
}