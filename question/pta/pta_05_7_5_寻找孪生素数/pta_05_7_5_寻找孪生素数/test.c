#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int is(int x)
{
	int y = 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			y = 1;
			break;
		}
	}
	if (y == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int p = 0, q = 0;
	int i = 0;
	if (n <= 0)
		n = 1;
	for (i = n + 1;; i++)
	{
		if (is(i))
		{
			p = i;
			q = p + 2;
			if (is(q))
				break;
		}

	}
	printf("%d %d", p, q);

	return 0;
}