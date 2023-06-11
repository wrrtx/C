#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int pow(int h, int n)
{
	int sum = 1;
	for (int i = 0; i < n; i++)
	{
		sum *= h;
	}
	return sum;
}
int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0, j = 0, k = 0, l = 0, h = 0;
	int sum = 0;
	scanf("%d", &n);
	i = pow(10, n - 1) + 1;
	j = pow(10, n);
	while (i < j)
	{
		int l = i;
		for (k = 0, sum = 0; k < n; k++)
		{
			h = l % 10;
			sum += pow(h, n);
			l /= 10;
		}
		if (sum == i)
			printf("%d\n", i);
		i++;
	}

	return 0;
}