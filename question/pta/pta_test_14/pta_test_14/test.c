#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int age(int n)
//{
//	int c;
//	if (n == 1) c = 10;
//	else c = age(n - 1) + 2;
//	return (c);
//}
//
//int main() 
//{
//	int n = 5;
//	printf("age:%d\n",age(n));
//	return 0;
//}


//#include <stdio.h>
//void Rev(int* x, int n);
//
//int main()
//{
//    int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 };
//    int* p;
//    Rev(a, 10);
//    //µ÷ÓÃÄæÐòº¯Êý
//    printf("The array has been reverted:\n");
//    for (p = a; p < a + 10; p++)
//        printf("%d,", *p);
//    return 0;
//}
//void Rev(int* x, int n)
//{
//    int t, * p, * i, * j, m = (n - 1) / 2;
//    i = x;  j = x + n - 1;  p = x + m;
//    for (; i <= p; i++, j--)
//    {
//        t = *i;
//        *i = *j;
//        *j = t;
//    }
//}


//#include <stdio.h>
//#include <math.h>
//
//double Trunc(double x);
//
//int main()
//{
//    double x, y;
//    scanf("%lg", &x);
//    y = Trunc(x);
//    printf("%.15g\n", y);
//    return 0;
//}
//
//double Trunc(double x)
//{
//    double y, z, n;
//    
//    if (x <= -1)
//    {
//        y = ceil(x);
//        return y;
//    }
//    
//    else if (x>0)
//    {
//        y = floor(x);
//        return y;
//    }
//    else
//    {
//        y = (int)x;
//        return y;
//    }
//}


#include <stdio.h>

int ProductOdd(int a, int b)
{
    int sum = 1;
    int i = 0;
    int ret = 0;
    int c = 0;
    int f = 0;
    for (i = a; i <= b; i++)
    {
        if (i <= -1)
        {
            ret = -i;
            if (ret % 2 == 1)
            {
                sum *= ret;
                c++;
                f = 1;
            }
        }
        else if (i % 2 == 1)
        {
            sum *= i;
            f = 1;
        }
    }
    if (a <= -1 && c % 2 == 1)
        return -sum;
    else if (f == 1)
        return sum;
    else
        return 0;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("ProductOdd = %d\n", ProductOdd(a, b));
    return 0;
}


//#include <stdio.h>
//int main()
//{
//	int account = 0;
//	scanf("%d", &account);
//	int n = account / 100000;
//	switch (n)
//	{
//	case 1:
//		printf("Hunan Agricultural University");
//		break;
//	case 2:
//		printf("Jishou University");
//		break;
//	case 3:
//		printf("Huaihua University");
//		break;
//	case 4:
//		printf("Aerospace University");
//		break;
//	case 5:
//		printf("Ocean University");
//		break;
//	default:
//		printf("Other University");
//		break;
//	}
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int i = 0, c = 0;
//	int sum = 0;
//	for (i = a; i <= b; i++)
//	{
//		printf("%5d", i);
//		c++;
//		sum += i;
//		if (c % 5 == 0)
//			printf("\n");
//	}
//	if (c % 5 != 0)
//		printf("\nSum = %d", sum);
//	else
//		printf("Sum = %d", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0, ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int c = 0;
//	int arr[10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		sum = arr[i + 1] - arr[i];
//		c++;
//		if (c % 3 == 1)
//			printf("%d", sum);
//		else
//			printf(" %d", sum);
//		if (c % 3 == 0)
//			printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int is(int x)
//{
//	int i = 0;
//	int f = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			f = 1;
//			return 0;
//		}
//	}
//	if (f == 0)
//		return 1;
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	int i = 0;
//	int c = 0;
//	int sum = 0;
//	for (i = n;;i--)
//	{
//		if (is(i))
//		{
//			c++;
//			if (c == 1)
//			{
//				printf("%d", i);
//				sum += i;
//			}
//			else
//			{
//				printf("+%d", i);
//				sum += i;
//			}
//			if (c == k || i == 2)
//			{
//				printf("=");
//				break;
//			}
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}