#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 152;
	int one = a % 10;
	int ten = (a - 100) / 10;
	int hundred = a / 100;
	printf("152 = %d + %d*10 + %d*100", one, ten, hundred);

	return 0;
}