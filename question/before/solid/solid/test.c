#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int s = (a * b + b * c + c * a) * 2;
	int v = a * b * c;
	printf("%d\n%d", s, v);

	return 0;
}