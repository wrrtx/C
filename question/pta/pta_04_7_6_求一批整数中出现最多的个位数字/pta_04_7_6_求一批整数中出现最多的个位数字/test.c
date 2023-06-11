#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int a1[1000] = { 0 };
	int a2[10] = { 0 };
	int i = 0, j = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a1[i]);
	}
	for (i = 0; i < n; i++)
	{
		while (a1[i] != 0)
		{
			int x = a1[i] % 10;
			a2[x]++;
			a1[i] /= 10;
		}
	}
	int max = a2[0];
	while (j < 10)
	{
		if (max < a2[j])
		{
			max = a2[j];
		}
		j++;
	}
	printf("%d:", max);
	for (i = 0; i < 10; i++)
	{
		if (a2[i] == max)
		{
			printf(" %d", i);
		}
	}

	return 0;
}