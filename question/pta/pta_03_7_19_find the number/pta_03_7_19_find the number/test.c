#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int i = 0, j = 0, k = 0, c = 0;
	int sum = 1;
	for (i = m; i <= n; i++)
	{
		for (j = 2, sum = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum == i)
		{
			c++;
			printf("%d = 1", i);
			for (k = 2; k <= sum / 2; k++)
			{
				if (sum % k == 0)
					printf(" + %d", k);
			}
			printf("\n");
		}
	}
	if (c == 0)
		printf("None");

	return 0;
}