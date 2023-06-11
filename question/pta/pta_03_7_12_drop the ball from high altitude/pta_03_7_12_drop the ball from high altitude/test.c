#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int h1 = 0, n = 0;
	scanf("%d%d", &h1, &n);
	int i = 0;
	float h2 = 0, h3 = h1;
	if (n == 0)
	{
		h2 = 0.0;
		h3 = 0.0;
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i < n)
			{
				h2 = h2 + h3 * 1.0;
				h3 = h3 * 0.5;
				h2 = h2 + h3 * 1.0;
			}
			else
			{
				h2 += h3 * 1.0;
				h3 = h3 * 0.5;
			}
		}
	}
	printf("%.1f %.1f", h2, h3);
	return 0;
}