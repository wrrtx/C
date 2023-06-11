#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	char c = '0';
	int n = 0;
	char a[101][101] = { '\0' };
	int i = 0, j = 0, k = 0, l = 0;
	int f = 0;
	scanf("%c %d", &c, &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		gets(a[i]);
	}
	for (i = 0; i < n / 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] != a[n - 1 - i][j])
			{
				f = 1;
				break;
			}
		}
		if (f == 1)
			break;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == '@')
				a[i][j] = c;
		}
	}
	if (f == 1)
	{
		for (i = 0; i < n / 2; i++)
		{
			char arr[101] = { '\0' };
			strcpy(arr, a[i]);
			strcpy(a[i], a[n - 1 - i]);
			strcpy(a[n - 1 - i], arr);
		}
	}
	if (f == 0)
		printf("bu yong dao le\n");
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >= 0; j--)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}