#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	int i = 0;
	int a = 1, b = 1;
	int num = 0;
	while (num < N)
	{
		if (N == 1)
		{
			num = 1;
			i = 1;
		}
		else if (N == 2)
		{
			num = 2;
			i = 3;
		}
		else if (N >= 3)
		{
			num = a + b;
			a = b;
			b = num;
			i++;
		}
	}
	if (N >= 3)
		printf("%d", i + 2);
	else
		printf("%d", i);

	return 0;
}