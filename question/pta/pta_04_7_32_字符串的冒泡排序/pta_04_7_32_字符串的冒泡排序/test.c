#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	int n = 0, k = 0;
	char a[110][20] = { '\0' };
	int i = 0, j = 0, f = 0;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	for (i = 0; i < k; i++)
	{
		for (j = 0, f = 0; j < n - i - 1; j++)
		{
			if (strcmp(a[j], a[j + 1]) > 0)
			{
				char b[20] = { '\0' };
				strcpy(b, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], b);
				f = 1;
			}
		}
		if (f == 0)
			break;
	}
	for (i = 0; i < n; i++)
	{
		printf("%s\n", a[i]);
	}

	return 0;
}