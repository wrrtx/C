#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = n / 2;
	int x, y, z;


		for (i = 1; i <= j + 1; i++)
		{
			z = (j + 1 - i) * 2;
			while (z)
			{
				printf(" ");
				z--;
			}
			z = i * 2 - 1;
			for (y = 1; y <= z; y++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (i = 1; i < j + 1; i++)
		{
			z = i * 2;
			while (z)
			{
				printf(" ");
				z--;
			}
			z = (j + 1 - i) * 2 - 1;
			for (y = 1; y <= z; y++)
			{
				printf("* ");
			}
			printf("\n");
		}

	return 0;
}
