#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	char ch = 0;
	scanf("%d %c", &n, &ch);
	int i = 0;
	int j = sqrt((n + 1) / 2);
	int x, y, z;
	for (i = 1; i <= j; i++)
	{
		z = i - 1;
		while (z)
		{
			printf(" ");
			z--;
		}
		z = (j + 1 - i) * 2 - 1;
		for (y = 1; y <= z; y++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	for (i = 2; i <= j; i++)
	{
		z = j - i;
		while (z)
		{
			printf(" ");
			z--;
		}
		z = i * 2 - 1;
		for (y = 1; y <= z; y++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	int count = n - (2 * j * j - 1);
	printf("%d", count);

	return 0;
}