#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h> 
int main(int argc, char* argv[])
{
	int i = 0, j = 0;
	int c = 0, f = 0;
	char a[100] = { '\0' };
	gets(a);
	int sz = strlen(a);
	for (i = 0; i < sz; i++)
	{
		f = 0;
		if (a[i] >= 65 && a[i] <= 90)
		{
			for (j = 0; j < i; j++)
			{
				if (a[j] == a[i])
				{
					f = 1;
					break;
				}
			}
			if (f == 0)
			{
				printf("%c", a[i]);
				c = 1;
			}
		}
	}
	if (c == 0)
	{
		printf("Not Found");
	}

	return 0;
}