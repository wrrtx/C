#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int speed = 0;
	scanf("%d", &speed);
	if (speed <= 60)
		printf("Speed: %d - OK", speed);
	else
		printf("Speed: %d - Speeding", speed);

	return 0;
}