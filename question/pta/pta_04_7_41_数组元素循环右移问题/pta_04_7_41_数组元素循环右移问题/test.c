#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n = 0, m = 0;
	int a[100] = { 0 };
	int i = 0, x = 0;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	x = m % n;
	for (i = n - x; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf("%d ", a[i]);
	}
	for (i = 0; i < n - x; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(" %d", a[i]);
	}

	return 0;
}