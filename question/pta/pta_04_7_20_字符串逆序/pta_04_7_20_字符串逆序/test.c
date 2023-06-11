#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	int i = 0;
	char a[100] = { '\0' };
	gets(a);
	int sz = strlen(a);
	for (i = sz - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}

	return 0;
}