#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	if (n <= 2000)
		printf("Invalid year!\n");
	else if (n <= 2003)
		printf("None\n");
	else
	{
		for (i = 2004; i <= n; i++)
		{
			if (n <= 2100)
			{
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
					printf("%d\n", i);
			}
			else
			{
				printf("Invalid year!\n");
				break;
			}
		}
	}

	return 0;
}