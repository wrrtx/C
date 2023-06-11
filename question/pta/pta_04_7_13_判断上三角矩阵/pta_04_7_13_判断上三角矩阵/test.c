#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int t = 0, n = 0;
	int arr[10][10] = { 0 };
	int i = 0, j = 0;
	int f = 0;
	scanf("%d", &t);
	while (t)
	{
		f = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}
		for (i = 1; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (arr[i][j] != 0)
				{
					f = 1;
					break;
				}
			}
			if (f == 1)
			{
				printf("NO\n");
				break;
			}
		}
		if (f == 0)
		{
			printf("YES\n");
		}
		t--;
	}

	return 0;
}