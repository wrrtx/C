#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float x = 0;
	float result = 0;
	scanf("%f", &x);
	if (x == 0)
		printf("f(0.0) = 0.0");
	else
	{
		result = 1 / x;
		printf("f(%.1f) = %.1f", x, result);
	}
	return 0;
}