#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	char a[1001] = { '\0' };
	int i = 0, j = 0, k = 0, l = 0;
	int sum = 0, f = 0;
	gets(a);
	int sz = strlen(a);
	for (i = 0; i < sz; i++)
	{
		for (j = sz - 1, f = 0; j > i; j--)
		{
			if (a[i] == a[j])
			{
				for (k = i, l = j; k <= j; k++, l--)
				{
					if (a[k] != a[l])
					{
						f = 1;
						break;
					}
					else
						f = 2;
				}
			}
			if (f == 2)
				break;
		}
		if (sum < j - i + 1 && f == 2)
			sum = j - i + 1;
	}
	if (sum == 0)
		sum = 1;
	printf("%d", sum);

	return 0;
}