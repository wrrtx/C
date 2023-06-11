#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int i = a;
	int c = 0;
	int d = b - a;
	int sum = 0;
	for (; i <= b; i++)
	{
		sum += i;
		if (i < 0)
			printf("%5d", i);
		else
			printf("%5d", i);
		c++;
		if (c % 5 == 0 && d >= 6)
			printf("\n");
	}
	printf("\n");
	printf("Sum = %d", sum);
	return 0;
}