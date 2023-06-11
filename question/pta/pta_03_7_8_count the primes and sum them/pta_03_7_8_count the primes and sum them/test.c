#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int M, N;
	scanf("%d%d", &M, &N);
	int i = 0;
	int j = 0;
	int sum = 0;
	int num = 0;
	for (i = M; i <= N; i++)
	{
		int ret = 0;
		if (i == 1)
			ret = 1;
		else if (i == 2)
			ret = 0;
		else
		{
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					ret++;
					break;
				}
			}
		}
		if (ret == 0)
		{
			sum += i;
			num++;
		}
	}
	printf("%d %d", num, sum);

	return 0;
}