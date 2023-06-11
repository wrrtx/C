#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, n;
	scanf("%d%d", &a, &n);
	int ret = a;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += ret;
		ret = ret * 10 + a;
	}
	printf("s = %d",s);

	return 0;
}