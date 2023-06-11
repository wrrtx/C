#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n < 0)
		printf("sign(%d) = %d", n, -1);
	else if (n > 0)
		printf("sign(%d) = %d", n, 1);
	else
		printf("sign(%d) = %d", n, 0);

	return 0;
}