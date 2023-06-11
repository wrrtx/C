#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	int i = 0, j = 0, k = -1;
	int f = 0;
	char a1[100] = { '\0' };
	char a[100] = { '\0' };
	gets(a1);
	int sz = strlen(a1);
	for (i = 0; i < sz; i++)
	{
		for (j = 0, f = 0; j < i; j++)
		{
			if (a1[i] == a1[j])
			{
				f = 1;
				break;
			}
		}
		if (f == 0)
		{
			k++;
			a[k] = a1[i];
		}
	}
	for (i = 0; i < k; i++)
	{
		for (j = 0, f = 0; j < k - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				char b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
				f = 1;
			}
		}
		if (f == 0)
			break;
	}
	for (i = 0; i < k + 1; i++)
	{
		printf("%c", a[i]);
	}

	return 0;
}