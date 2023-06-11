#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <math.h>
int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0, j = 0, k = 0;
	int m = 0;
	int a[1000] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		m = 0;
		for (j = 0; j <= a[i]; j++)
		{
			int x = pow(j, 2);
			int y = j;
			while (y != 0)
			{
				if (x % 10 != y % 10)
					break;
				x /= 10;
				y /= 10;
			}
			if (y == 0)
				m++;
		}
		if (i == 0)
			printf("%d", m);
		else
			printf(" %d", m);
	}

	return 0;
}