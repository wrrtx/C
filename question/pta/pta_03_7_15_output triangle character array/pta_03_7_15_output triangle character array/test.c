#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	n++;
	char ch = 'A';
	int i = 0, j = 0;
	while (n--)
	{
		j = n;
		for (j = n; j > 0; j--)
		{
			printf("%c ", ch);
			ch++;
		}
		if (n != 1)
			printf("\n");
	}

	return 0;
}