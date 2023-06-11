#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	int ret = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			ret = i * j;
			if (ret < 10)
			{
				printf("%d * %d = %d ", j, i, ret);
			}
			else
			{
				printf("%d * %d =%d ", j, i, ret);
			}
		}
		printf("\n");
	}

	return 0;
}