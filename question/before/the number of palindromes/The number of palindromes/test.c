#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int w = a / 10000;
	int q = (a / 1000) % 10;
	int s = (a % 100) / 10;
	int g = a % 10;
	if (w == g && q == s)
		printf("yes");
	else
		printf("no");

	return 0;
}