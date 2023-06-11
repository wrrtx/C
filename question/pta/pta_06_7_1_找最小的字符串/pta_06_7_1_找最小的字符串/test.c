#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	char arr[1000][80] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%s", &arr[i]);
	}
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		if (strcmp(arr[ret], arr[i]) > 0)
			ret = i;
	}
	printf("Min is: %s", arr[ret]);

	return 0;
}