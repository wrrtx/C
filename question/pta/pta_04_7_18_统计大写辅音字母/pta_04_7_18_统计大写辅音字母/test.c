#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h> 
int main(int argc, char* argv[])
{
	char a[100] = { '\0' };
	int i = 0, sum = 0;
	gets(a);
	int sz = strlen(a);
	for (i = 0; i < sz; i++)
	{
		if (a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U')
		{
			if (a[i] >= 65 && a[i] <= 90)
				sum++;
		}
	}
	printf("%d\n", sum);

	return 0;
}