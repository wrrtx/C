#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	char a[100] = { '\0' };
	int i = 0, j = 0;
	int f = 0;
	gets(a);
	int sz = strlen(a);
	for (i = 0; i < sz / 2; i++)
	{
		if (a[i] != a[sz - 1 - i])
		{
			f = 1;
			break;
		}
	}
	printf("%s\n", a);
	if (f == 0)
		printf("Yes");
	else
		printf("No");

	return 0;
}