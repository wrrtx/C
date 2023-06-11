#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	float c = (a * 1.000) / b;
	printf("%.3f", c);

	return 0;
}