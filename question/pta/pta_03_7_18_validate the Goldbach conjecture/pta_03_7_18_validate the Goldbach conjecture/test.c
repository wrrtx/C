#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
////int begin(int n)
////{
////	int flag = 1;
////	int i = 0;
////	for (i = 2; i < (int)sqrt(n); i++)
////	{
////		if (n % i == 0)
////		{
////			flag = 0;
////			break;
////		}
////	}
////	return flag;
////}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int i1 = 2, i2 = 0, j = 0;
//	int m = 0;
//	int f1 = 1, f2 = 1;
//	int n = N / 2;
//	for (i1 = 2; i1 <= N / 2 + 1; i1++)
//	{
//		for (i2 = 2; i2 <= sqrt(i1); i2++)
//		{
//			if (i1 == 2)
//				f1 = 1;
//			else if (i1 % i2 == 0)
//				f1 = 0;
//		}
//		if(f1==1)
//		{
//			m = N - i1;
//			while (j <= sqrt(m))
//			{
//				if (m % j == 0)
//				{
//					f2 = 0;
//					break;
//				}
//				j++;
//			}
//		}
//		if (f2 == 1 && f1 == 1)
//			break;
//	}
//	printf("%d = %d + %d\n", N, i1, m);
//
//	return 0;
//}
#include <stdio.h>
#include <math.h>
int begin(int n)
{
	int f = 0;
	int j = 0;
	//if (n == 2)
	//	f = 1;
	//else
	//{
		for (j = 2; j <= sqrt(n); j++)
		{
			if (n % j == 0)
			{
				f++;
				break;
			}
		}
	//}
	if (f == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int N = 0;
	scanf("%d", &N);
	int i = 2;
	int m = 0;
	int r1 = 0, r2 = 0;
	for (i = 2; i <= N / 2; i++)
	{
		int r1 = begin(i);
		if (r1 == 1)
		{
			m = N - i;
			r2 = begin(m);
		}
		if (r2 == 1)
			break;
	}
	printf("%d = %d + %d\n", N, i, m);

	return 0;
}