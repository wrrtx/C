#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int money = 0;
	float year = 0;
	float rate = 0;
	scanf("%d%f%f", &money, &year, &rate);
	double cache = pow(1 + rate, year);
	double interest = money * cache - money;
	printf("interest = %.2f", interest);

	return 0;
}