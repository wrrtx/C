#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int begin(int n)
{
	int f = 0;
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			f++;
			break;
		}
	}
	if (f == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int N = 0;
	scanf("%d", &N);
	int i = 2;
	int m = 0;
	int r1 = 0, r2 = 0;
	for (i = 2; i <= N / 2; i++)
	{
		int r1 = begin(i);
		if (r1 == 1)
		{
			m = N - i;
			r2 = begin(m);
		}
		if (r2 == 1)
			break;
	}
	printf("%d = %d + %d\n", N, i, m);

	return 0;
}