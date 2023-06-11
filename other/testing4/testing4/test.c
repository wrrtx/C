#define _CRT_SECURE_NO_WARNINGS 1
//int min(int x, int y)
//{
//	int z;
//	z = x > y ? y : x;
//	return z;
//}
#include<stdio.h>
//int main()
//{
//	int min(int x, int y);
//	double a, b,c;
//	scanf("%lf %lf", &a, &b);
//	c = min(a, b);
//	printf("The min is %2.2f", c);
//	return 0;
//}
int main()
{
	int i, n = 0;
	for (i = 2; i < 5; i++)
	{
		do 
		{
			if (i % 3)
				continue;
			n++;
		} while (!i);
		n++;

	}
	printf("%d", n);

	return 0;
}