#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0, x = 0;
	scanf("%d%d", &n, &x);
	int arr[20] = { 0 };
	int i = 0;
	int c = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			printf("%d", i);
			break;
		}
		c++;
	}
	if (c == n)
		printf("Not Found");

	return 0;
}