#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int A = 0, B = 0;
	scanf("%d%d", &A, &B);
	int c = A * B;
	int flag = 1;
	while (c)
	{
		if (c % 10 != 0 && flag)
		{
			flag--;
			printf("%d", c % 10);
		}
		else if (flag == 0)
			printf("%d", c % 10);
		c = c / 10;
	}

	return 0;
}