#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int x, y, z;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 1; i <= n; i++)
		{
			z = n - i;
			while (z)
			{
				printf(" ");
				z--;
			}
			z = i * 2 - 1;
			for (y = 1; y <= z; y++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 1; i < n; i++)
		{
			z = i;
			while (z)
			{
				printf(" ");
				z--;
			}
			z = (n - i) * 2 - 1;
			for (y = 1; y <= z; y++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}