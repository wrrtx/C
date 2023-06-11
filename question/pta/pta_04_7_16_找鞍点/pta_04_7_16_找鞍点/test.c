#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n = 0;
	int arr[6][6] = { 0 };
	int i = 0, j = 0, k = 0;
	int y = 0, m = 0, f = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		m = arr[i][0];
		for (j = 1; j < n; j++)
		{
			if (m <= arr[i][j])
			{
				m = arr[i][j];
				y = j;
				for (k = 0, f = 0; k < n; k++)
				{
					if (m > arr[k][y])
					{
						f = 1;
						break;
					}
				}
			}
		}
		if (f == 0)
		{
			printf("%d %d", i, y);
			break;
		}
	}
	if (f == 1)
	{
		printf("NONE");
	}

	return 0;
}