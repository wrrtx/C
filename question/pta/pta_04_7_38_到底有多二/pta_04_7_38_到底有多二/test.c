#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	char a[12] = { '\0' };
	char arr[10] = { 0 };
	int index[11] = { 0 };
	int i = 0, j = 0, k = -1;
	int f = 0;
	gets(a);
	for (i = 0; i < 11; i++)
	{
		for (j = 0, f = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				f = 1;
				break;
			}
		}
		if (f == 0)
		{
			k++;
			arr[k] = a[i];
		}
	}
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j <= k; j++)
		{
			if (a[i] == arr[j])
			{
				index[i] = j;
			}
		}
	}
	printf("int[] arr = new int[]{");
	for (i = 0; i <= k; i++)
	{
		if (i == 0)
			printf("%d", arr[i] - 48);
		else
			printf(",%d", arr[i] - 48);
	}
	printf("};\n");
	printf("int[] index = new int[]{");
	for (i = 0; i < 11; i++)
	{
		if (i == 0)
			printf("%d", index[i]);
		else
			printf(",%d", index[i]);
	}
	printf("};\n");

	return 0;
}