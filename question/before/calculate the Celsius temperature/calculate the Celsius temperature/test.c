#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int F = 100;
	int C = 5 * (F - 32) / 9;
	printf("fahr = 100, celsius = %d", C);

	return 0;
}