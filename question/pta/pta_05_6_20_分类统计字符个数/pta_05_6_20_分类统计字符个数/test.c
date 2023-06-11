#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define MAXS 15

void StringCount(char s[]);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount(char s[])
{
	int i = 0;
	int letter = 0, blank = 0, digit = 0, other = 0;
	for (i = 0; i < MAXS; i++)
	{
		if (s[i] == '\0')
			break;
		else if (s[i] == '\n')
		{
			++blank;
		}
		else if (s[i] == ' ')
		{
			++blank;
		}
		else if ((s[i] <= 90 && s[i] >= 65) || (s[i] <= 122 && s[i] >= 97))
		{
			++letter;
		}
		else if (s[i] <= 57 && s[i] >= 48)
		{
			++digit;
		}
		else
		{
			++other;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}
void ReadString(char s[])
{
	for (int i = 0; i < MAXS; i++)		//MAXS不知道对不对，题目有点奇怪
		s[i] = getchar();
}
