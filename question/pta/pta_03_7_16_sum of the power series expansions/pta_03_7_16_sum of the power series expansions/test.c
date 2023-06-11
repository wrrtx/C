#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	double x = 0;
	scanf("%lf", &x);
	int i = 1;
	double r1 = 0, r2 = 1, r3 = 1;
	double sum = 1.0;
	while (fabs(r3) >= 0.00001)
	{
		r1 = pow(x, i);
		r2 = r2 * i;
		r3 = r1 * 1.0 / r2;
		sum = sum + r3;
		i++;
	}
	printf("%.4f", sum);

	return 0;
}