#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	int i = 0;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	int r = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m < 60)
		{
			e++;
		}
		else if (m == 100)
		{
			a++;
		}
		else
		{
			r = m / 10;
			switch (r)
			{
			case 9:
				a++; break;
			case 8:
				b++; break;
			case 7:
				c++; break;
			case 6:
				d++; break;
			}
		}
	}
	printf("%d %d %d %d %d", a, b, c, d, e);

	return 0;
}