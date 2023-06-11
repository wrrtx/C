#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	int i = 0;
	double a = 0, b = 0;
	int c = 0;
	double average = 0;
	if (N == 0)
	{
		average = 0.0;
		c = 0;
	}
	else
	{
		for (i = 0; i < N; i++)
		{
			scanf("%lf", &a);
			if (a >= 60)
				c++;
			b += a;
		}
		average = b * 1.0 / N;
	}
	printf("average = %.1f\n", average);
	printf("count = %d\n", c);
	return 0;
}