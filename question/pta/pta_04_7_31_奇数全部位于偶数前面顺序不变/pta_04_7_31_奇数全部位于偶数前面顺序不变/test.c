#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	char a[20] = { '\0' };
	char a1[20] = { '\0' };
	char a2[20] = { '\0' };
	int i = 0, j = -1, k = -1;
	gets(a);
	int sz = strlen(a);
	for (i = 0; i < sz; i++)
	{
		if (a[i] == '1' || a[i] == '3' || a[i] == '5' || a[i] == '7' || a[i] == '9')
		{
			j++;
			a1[j] = a[i];
		}
		else
		{
			k++;
			a2[k] = a[i];
		}
	}
	strcat(a1, a2);
	puts(a1);

	return 0;
}