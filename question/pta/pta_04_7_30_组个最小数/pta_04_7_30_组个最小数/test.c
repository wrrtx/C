#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int arr[10] = { -1 };
	int i = 0, j = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < 10; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d", i);
			arr[i]--;
			break;
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < arr[i]; j++)
		{
			printf("%d", i);
		}
	}

	return 0;
}