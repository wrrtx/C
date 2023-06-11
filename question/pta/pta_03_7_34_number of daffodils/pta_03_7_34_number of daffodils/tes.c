#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int a = 0, b = 0, c = 0;
	for (i = 153; i <= 407; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c)
			printf("%5d", i);
	}

	return 0;
}