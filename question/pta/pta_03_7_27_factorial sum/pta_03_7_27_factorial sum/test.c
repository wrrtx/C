#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	int i = 0;
	int s = 1;
	int S = 0;
	for (i = 1; i <= N; i++)
	{
		s *= i;
		S += s;
	}
	printf("%d", S);

	return 0;
}