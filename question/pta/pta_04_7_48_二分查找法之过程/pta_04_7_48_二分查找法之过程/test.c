#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char* argv[])
{
	int n = 0, x = 0;
	int a[10] = { 0 };
	int i = 0;
	int f1 = 0, f2 = 0;
	scanf("%d%d", &n, &x);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		if (a[i] >= a[i + 1] && i <= n - 2)
		{
			f1 = 1;
			break;
		}
		if (x == a[i])
			f2 = 1;
	}
	if (f1 == 1)
		printf("Invalid Value");
	else
	{
		int l = 0, r = n - 1;
		while (1)
		{
			if (a[(l + r) / 2] > x)
			{
				printf("[%d,%d][%d]\n", l, r, (l + r) / 2);
				if (l == r)
				{
					break;
				}
				r = (l + r) / 2 - 1;
			}
			else if (a[(l + r) / 2] < x)
			{
				printf("[%d,%d][%d]\n", l, r, (l + r) / 2);
				if (l == r)
				{
					break;
				}
				l = (l + r) / 2 + 1;
			}
			else
			{
				printf("[%d,%d][%d]\n", l, r, (l + r) / 2);
				printf("%d", (l + r) / 2);
				break;
			}
		}
		if (f2 == 0)
			printf("Not Found");
	}

	return 0;
}