#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	double sum = 1.0;
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		if (i <= 13)
		{
			ret = ret * i;
			sum += (1.0 / ret);
		}
		else
			break;
	}
	printf("%.8f", sum);

	return 0;
}