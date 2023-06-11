#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int y = 0, m = 0, d = 0;
	int sum = 0;
	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int i = 0;
	scanf("%d/%d/%d", &y, &m, &d);
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		if (m > 2)
		{
			sum++;
		}
		for (i = 0; i < m - 1; i++)
		{
			sum += arr[i];
		}
		sum += d;
	}
	else
	{
		for (i = 0; i < m - 1; i++)
		{
			sum += arr[i];
		}
		sum += d;
	}
	printf("%d\n", sum);

	return 0;
}