#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int price;
	int discount;
	double d_p;
	scanf("%d%d", &price, &discount);
	d_p = price * (0.1 * discount);
	printf("%.2f", d_p);

	return 0;
}