#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int longth = 0;
	int width = 0;
	scanf("%d%d", &longth, &width);
	int C = (longth + width) * 2;
	int S = longth * width;
	printf("C = %d\n", C);
	printf("S = %d\n", S);

	return 0;
}