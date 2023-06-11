#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = a % b;
	int d = a / b;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	if (c == 0)
		printf("%d / %d = %d", a, b, d);
	else
		printf("%d / %d = %.2f", a, b, (a * 1.00) / (b * 1.00));

	return 0;
}