#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 3;
	int y = x * x;
	printf("%d = %d * %d\n", y, x, x);
	printf("%d * %d = %d", x, x, y);

	return 0;
}