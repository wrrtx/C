#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	int a = 0;
	int j = 0;
	for (j = 1; j <= T; j++)
	{
		int n = 0;
		scanf("%d", &n);
		int k = (int)sqrt(n * 1.0);
		int i = 0;
		int c = 0;
		for (i = 2; i <= k; i++)
		{
			if (n % i == 0)
			{
				c++;
				break;
			}
		}
		if (n <= 2)
		{
		if (n == 1)
			printf("No\n");
		else
			printf("Yes\n");
		}
		if (!c)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}