#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int x = b;
	int y = a;
	printf("a=%d,b=%d", x, y);

	return 0;
}