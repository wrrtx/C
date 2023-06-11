#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int i = 0, j = 0;
	char a[33] = { '\0' };
	int b[4] = { 0 };
	gets(a);
	for (i = 0; i < 4; i++)
	{
		do
		{
			if (a[j] == '0')
			{
				b[i] = b[i] * 2;
			}
			else if (a[j] == '1')
			{
				b[i] = b[i] * 2 + 1;
			}
			j++;
		} while (j % 8);
	}
	for (i = 0; i < 4; i++)
	{
		if (i == 0)
			printf("%d", b[i]);
		else
			printf(".%d", b[i]);
	}

	return 0;
}