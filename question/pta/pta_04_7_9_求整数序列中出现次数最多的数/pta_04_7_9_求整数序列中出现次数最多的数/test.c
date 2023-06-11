#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n = 0;
	int arr[1000] = { 0 };
	int i = 0, j = 0;
	int ret = 0, max = 0, num = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0, ret = 0; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				ret++;
			}
		}
		if (ret > max)
		{
			max = ret;
			num = arr[i];
		}
	}
	printf("%d %d", num, max);

	return 0;
}