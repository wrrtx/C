#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	char a[10] = { '\0' };
	char max = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%c", &a[i]);
	}
	max = a[0];
	for (i = 0; i < 5; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("%c %d", max, max);

	return 0;
}