#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2, flag = 0; j <= (int)sqrt(i * 1.0); j++)
		{
			if (i % j == 0)
			{
				flag++;
			}
		}
		if (flag == 0)
			printf("%d ", i);
	}

	return 0;
}