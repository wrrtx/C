#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0, a = 0;
	char tmp = 0, tmp1 = 0;
	int letter = 0, blank = 0, digit = 0, other = 0;
	for (i = 0; i < 10; i++)
	{
		tmp = getchar();
		if (a == 10)
			break;
		else if (tmp == '\n')
		{
			++a;
			++blank;
		}
		else if (tmp == ' ')
		{
			++a;
			++blank;
		}
		else if ((tmp <= 90 && tmp >= 65) || (tmp <= 122 && tmp >= 97))
		{
			++a;
			++letter;
		}
		else if (tmp <= 57 && tmp >= 48)
		{
			++a;
			++digit;
		}
		else
		{
			++a;
			++other;
		}
	}
	//if (a == 10)
	//{
	//	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank - 1, digit, other);
	//}
	//else
	//{
	//	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	//}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	return 0;
}