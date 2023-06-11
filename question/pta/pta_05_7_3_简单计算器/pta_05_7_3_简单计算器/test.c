#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	char ch = 0;
	int x = 0;
	int f = 0;
	int sum = 0;
	scanf("%d", &sum);
	while (ch != '=')
	{
		ch = getchar();
		if (ch == '=')
			break;
		scanf("%d", &x);
		if (ch == '+')
			sum += x;
		else if (ch == '-')
			sum -= x;
		else if (ch == '*')
			sum *= x;
		else if (ch == '/' && x != 0)
			sum /= x;
		else if (ch == '/' && x == 0)
		{
			printf("ERROR");
			f = 1;
			break;
		}
		else
		{
			printf("ERROR");
			f = 1;
			break;
		}
	}
	if (f == 0)
		printf("%d", sum);

	return 0;
}