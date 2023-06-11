#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int x = 0;
	int a[4] = { 0 };
	int i = 0;
	scanf("%d", &x);
	for (i = 0; i < 4; i++)
	{
		a[i] = (x % 10 + 9) % 10;
		x /= 10;
	}
	int sum = a[0] * 100 + a[1] * 1000 + a[2] + a[3] * 10;
	if (sum > 1000)
		printf("The encrypted number is %d", sum);
	else
		printf("The encrypted number is 0%d", sum);

	return 0;
}