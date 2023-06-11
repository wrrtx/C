#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	double sum = 0;
	while (i <= n)
	{
		sum += 1.0 / (i * 2.0 - 1.0);
		i++;
	}
	printf("sum = %.6lf", sum);

	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int n;
//	double sum = 0, t = 1;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		sum += 1.0 / t;
//		t += 2;
//	}
//
//	printf("sum = %.6lf", sum);
//	return 0;
//}