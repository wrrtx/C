#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[5][80] = { '\0' };
	printf("After sorted:\n");
	int i = 0, j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0;; j++)
		{
			scanf("%c", &arr[i][j]);
			if (arr[i][j] == ' ' || arr[i][j] == '\n')
			{
				arr[i][j] = '\0';
				break;
			}
		}
	}
	int ret = 0;
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 5 - j; i++)
		{
			if (strcmp(arr[i], arr[i+1]) > 0)
			{
				char a[80] = { '\0' };
				strcpy(a, arr[i + 1]);
				strcpy(arr[i + 1], arr[i]);
				strcpy(arr[i], a);
			}
		}
	}
	for (i = 0; i < 5; i++)
		printf("%s\n", arr[i]);

	return 0;
}