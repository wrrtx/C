#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int l = 0, n = 0;
	char a[7] = { '\0' };
	int i = 0, j = 0, k = 0;
	scanf("%d%d", &l, &n);
	n--;
	for (i = l - 1; i >= 0; i--)
	{
		k = n;
		k %= 26;
		n /= 26;
		a[i] = 'z' - k;
	}
	printf("%s", a);

	return 0;
}