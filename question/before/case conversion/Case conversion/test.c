#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch1 = 0;
	char ch2 = 0;
	scanf("%c", &ch1);
	if (ch1 >= 97)
	{
		ch2 = ch1 - 32;
		printf("%c", ch2);
	}
	else
	{
		ch2 = ch1 + 32;
		printf("%c", ch2);
	}

	return 0;
}