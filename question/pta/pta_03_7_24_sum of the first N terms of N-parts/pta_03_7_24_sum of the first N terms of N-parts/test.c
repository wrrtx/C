#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int N = 0;
	double sum = 0;
	int i = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		sum += 1.0 / i;
	}
	printf("sum = %.6f\n", sum);

	return 0;
}