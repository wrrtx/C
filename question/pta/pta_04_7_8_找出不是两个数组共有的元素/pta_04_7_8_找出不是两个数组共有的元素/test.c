#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n1 = 0, n2 = 0;
	int a1[20] = { 0 }, a2[20] = { 0 }, a[40] = { 0 };
	int i = 0, j = 0, k = 0;
	int x = 0;
	scanf("%d", &n1);
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &a1[i]);
	}
	scanf("%d", &n2);
	for (i = 0; i < n2; i++)
	{
		scanf("%d", &a2[i]);
	}
	for (i = 0; i < n1; i++)
	{
		x = 0;
		for (j = 0; j < n2; j++)
		{
			if (a1[i] == a2[j])
			{
				x = 1;
				break;
			}
		}
		if (x == 0)
		{
			a[k] = a1[i];
			k++;
		}
	}
	for (i = 0; i < n2; i++)
	{
		x = 0;
		for (j = 0; j < n1; j++)
		{
			if (a2[i] == a1[j])
			{
				x = 1;
				break;
			}
		}
		if (x == 0)
		{
			a[k] = a2[i];
			k++;
		}
	}
	printf("%d", a[0]);
	for (i = 1; i < k; i++)
	{
		x = 0;
		for (j = 0; j < k && j != i; j++)
		{
			if (a[i] == a[j])
			{
				x = 1;
				break;
			}
		}
		if (x == 0)
		{
			printf(" %d", a[i]);
		}
	}


	return 0;
}