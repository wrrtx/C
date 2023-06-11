#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float weight = 0;
	scanf("%f", &weight);
	float price;
	if (weight >= 0 && weight <= 10)
	{
		price = weight * 1.30;
		printf("%.2f", price);
	}
	else if (weight > 10 && weight <= 50)
	{
		price = 10.00 * 1.30 + (weight - 10) * 1.8;
		printf("%.2f", price);
	}
	else if (weight > 50 && weight <= 200)
	{
		price = 10.00 * 1.30 + 40.00 * 1.8 + (weight - 50) * 2.4;
		printf("%.2f", price);
	}
	else if (weight > 200)
	{
		price = 10.00 * 1.30 + 40.00 * 1.8 + 150 * 2.4 + (weight - 200) * 4.5;
		printf("%.2f", price);
	}
	else
	{
		printf("Error!");
	}

	return 0;
}