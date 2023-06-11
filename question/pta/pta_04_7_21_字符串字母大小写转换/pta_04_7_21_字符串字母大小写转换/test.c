#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	int i = 0;
	char arr[50] = { '\0' };
	gets(arr);
	int sz = strlen(arr);
	for (i = 0; arr[i] != '#'; i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)
		{
			arr[i] += 32;
		}
		else if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] -= 32;
		}
	}
	sz = i;
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}