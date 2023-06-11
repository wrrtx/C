#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	if (N % 5 > 0 && N % 5 <= 3)
		printf("Fishing in day %d", N);
	else
		printf("Drying in day %d", N);

	return 0;
}