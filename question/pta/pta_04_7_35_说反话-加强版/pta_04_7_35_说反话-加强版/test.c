#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
void output(int end, int beg, char a[500010])
{
	int i = 0;
	for (i = beg; i <= end; i++)
	{
		printf("%c", a[i]);
	}
}
int main()
{
	int i = 0;
	int end = 0, beg = 0;
	int f1 = 0, f2 = 1, f3 = 0, f4 = 0;
	char a[500010] = { '\0' };
	gets(a);
	int sz = strlen(a);
	for (i = 0; i < sz; i++)
	{
		if (a[i] != ' ')
		{
			f4 = i;
			break;
		}
	}
	for (i = sz - 1; i >= f4; i--)
	{
		if (a[i] != ' ' && f2 == 1)
		{
			end = i;
			f1 = 1;
			f2 = 0;
		}
		if ((a[i] == ' ' && f1 == 1) || (i == f4 && f1 == 1))
		{
			if (i > f4)
				beg = i + 1;
			else
				beg = f4;
			f1 = 0;
			f2 = 1;
			f3 = 1;
		}
		if (f3 == 1)
		{
			output(end, beg, a);
		}
		if (f3 == 1 && i != f4)
		{
			printf(" ");
			f3 = 0;
		}
	}

	return 0;
}