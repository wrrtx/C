#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;;
	scanf("%d%d", &a, &b);
	int c = (a + b) * 2;
	int s = a * b;
	printf("%d\n%d", c, s);

	return 0;
}