#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n = 0;
	int a[20] = { 0 };
	int min = 0, y = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	min = a[0];
	for (i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			y = i;
		}
	}
	printf("%d %d", min, y);

	return 0;
}