#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b ,c;
	char ch;
	scanf("%d %c %d", &a, &ch, &b);
	if (ch == '+')
	{
		c = a + b;
		printf("%d", c);
	}
	else if (ch == '-')
	{
		c = a - b;
		printf("%d", c);
	}
	else if (ch == '*')
	{
		c = a * b;
		printf("%d", c);
	}
	else if (ch == '/')
	{
		c = a / b;
		printf("%d", c);
	}
	else if (ch == '%')
	{
		c = a % b;
		printf("%d", c);
	}
	else
		printf("ERROR");
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	char c;
//	scanf("%d %c %d", &a, &c, &b);
//	if (c == '+')
//		printf("%d", a + b);
//	else if (c == '-')
//		printf("%d", a - b);
//	else if (c == '*')
//		printf("%d", a * b);
//	else if (c == '/')
//		printf("%d", a / b);
//	else if (c == '%')
//		printf("%d", a % b);
//	else
//		printf("ERROR");
//	return 0;
//}