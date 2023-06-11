#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	int s1 = 100 * y / 2;
	int s2 = 100 * (100 - x) / 2;
	int s3 = 100 * 100 / 2;
	int p_s_a = s3 - s1 - s2;
	printf("%d", p_s_a);

	return 0;
}