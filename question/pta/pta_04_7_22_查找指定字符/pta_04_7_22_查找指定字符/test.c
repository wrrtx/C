#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	char a = 0;
	char arr[1000] = { '\0' };
	scanf("%c", &a);
	getchar();
	gets(arr);
	int sz = strlen(arr);
	int i = 0;
	int max = 0;
	int f = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == a)
		{
			max = i;
			f = 1;
		}
	}
	if (f == 1)
		printf("index = %d", max);
	else
		printf("Not Found");

	return 0;
}