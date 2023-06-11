#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
void begin(int x)
{
	int i = 0;
	int flag = 1;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		printf("%d\n", x);
}
int main()
{
	int n = 0, m = 0;
	scanf("%d", &n);
	int i = 0;
	if (n == 1)
		printf("None\n");
	else
	{
		for (i = 2; i <= n; i++)
		{
			m = pow(2, i);
			m = m - 1;
			begin(m);
		}
	}

	return 0;
}