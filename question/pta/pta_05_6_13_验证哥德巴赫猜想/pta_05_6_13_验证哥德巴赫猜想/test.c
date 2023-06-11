#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int prime(int p);
void Goldbach(int n);

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if (prime(m) != 0) printf("%d is a prime number\n", m);
    if (m < 6) m = 6;
    if (m % 2) m++;
    cnt = 0;
    for (i = m; i <= n; i += 2) {
        Goldbach(i);
        cnt++;
        if (cnt % 5) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime(int p)
{
	int f = 0;
	int j = 0;
	if (p == 1)
		return 0;
	for (j = 2; j <= sqrt(p); j++)
	{
		if (p % j == 0)
		{
			f++;
			break;
		}
	}
	if (f == 0)
		return 1;
	else
		return 0;
}
void Goldbach(int n)
{
	int r1 = 0, r2 = 0;
	int m = 0;
	int i = 0;
	for (i = 2; i <= n / 2; i++)
	{
		int r1 = prime(i);
		if (r1 == 1)
		{
			m = n - i;
			r2 = prime(m);
		}
		if (r2 == 1)
			break;
	}
	printf("%d=%d+%d", n, i, m);
}


//#include <stdio.h>
//#include <math.h>
//int begin(int n)
//{
//	int f = 0;
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			f++;
//			break;
//		}
//	}
//	if (f == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int i = 2;
//	int m = 0;
//	int r1 = 0, r2 = 0;
//	for (i = 2; i <= N / 2; i++)
//	{
//		int r1 = begin(i);
//		if (r1 == 1)
//		{
//			m = N - i;
//			r2 = begin(m);
//		}
//		if (r2 == 1)
//			break;
//	}
//	printf("%d = %d + %d\n", N, i, m);
//
//	return 0;
//}