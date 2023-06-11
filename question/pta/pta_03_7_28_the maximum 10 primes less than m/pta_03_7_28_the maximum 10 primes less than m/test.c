#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	int i = 0;
	int j = 1;
	int c = 0;
	m--;
	while (m)
	{
		for (i = 2, j = 1; i <= sqrt(m); i++)
		{
			if (m % i == 0)
			{
				j = 0;
				break;
			}
		}
		if (j == 1 && c < 10)
		{
			printf("%6d", m);
			c++;
		}
		if (c == 10)
			break;
		m--;
	}

	return 0;
}