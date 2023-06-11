#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int up, down, height;
	scanf("%d%d%d", &up, &down, &height);
	float s = (up + down) * height * 0.500;;
	printf("%.3f", s);

	return 0;
}