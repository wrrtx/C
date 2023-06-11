#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	int i = 0;
	int sum = 0;
	do{
		i = i + N % 10;
		sum++;;
	} while (N = N / 10);
	printf("%d %d", sum, i);

	return 0;
}