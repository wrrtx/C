#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	n--;
	while (n > 0)
	{
		printf("%d ", arr[n]);
		n--;
	}
	printf("%d", arr[0]);

	return 0;
}