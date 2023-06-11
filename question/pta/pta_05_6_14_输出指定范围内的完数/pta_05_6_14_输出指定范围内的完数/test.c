#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0, j = 0, k = 0, c = 0;
//	int sum = 1;
//
//	for (i = m; i <= n; i++)
//	{
//		for (j = 2, sum = 1; j < i; j++)
//		{
//			if (i % j == 0)
//				sum += j;
//		}
//		if (sum == i)
//		{
//			c++;
//			printf("%d = 1", i);
//			for (k = 2; k <= sum / 2; k++)
//			{
//				if (sum % k == 0)
//					printf(" + %d", k);
//			}
//			printf("\n");
//		}
//	}
//
//	if (c == 0)
//		printf("None");
//	return 0;
//}

#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum(int number)
{
	if (number == 1)
		return 0;
	int j = 0;
	int sum = 1;
	for (j = 2, sum = 1; j < number; j++)
		if (number % j == 0)
			sum += j;
	return sum;
}
void PrintPN(int m, int n)
{
	int i = 0, k = 0, c = 0;
	for (i = m; i <= n; i++)
	{
		if (factorsum(i) == i)
		{
			c = 1;
			printf("%d = 1", i);
			for (k = 2; k <= i / 2; k++)
			{
				if (i % k == 0)
					printf(" + %d", k);
			}
			printf("\n");
		}
	}
	if (c == 0)
		printf("No perfect number");
}

