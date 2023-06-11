#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	double sum = 2.0;
	double r1 = 1, r2 = 1;
	int i = 1;
	double eps;
	scanf("%le", &eps);
	for (i = 1;; i++)
	{
		if (eps > 0.3)
			break;
		r1 *= i;
		r2 *= (i * 2 + 1);
		sum += r1 / r2 * 2.0;
		if (r1 / r2 * 1.0 < eps)
			break;
	}
	printf("PI = %.5f", sum);

	return 0;
}