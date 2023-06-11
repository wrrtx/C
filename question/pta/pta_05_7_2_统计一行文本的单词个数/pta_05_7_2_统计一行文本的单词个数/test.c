#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	char s;
	int f = 1;
	int c = 0;
	scanf("%c", &s);
	while (s != '\n')
	{
		if (s != ' ' && f == 1)
		{
			c++;
			f = 0;
		}
		else if (s == ' ' && f == 0)
			f = 1;	
		scanf("%c", &s);
	}
	printf("%d", c);

	return 0;
}