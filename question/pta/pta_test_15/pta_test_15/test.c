#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    int a[10000];
//    int* p;
//    int n;
//    scanf("%d", &n);
//    for (p = a; p < a + n; p++)
//        scanf("%d",p);//此处为a[i]地址，即当前指针变量p指向的地址
//    for (p = a + n - 1; n > 0; p--, n--)//从后往前输出
//        printf("%d ", *p);//输出当前元素值
//    return 0;
//}

#include<stdio.h>
void Porder(int n);
int main()
{
    int num;
    scanf("%d", &num);
    Porder(num);
    return 0;
}

void Porder(int n) {
    if (n > 10)
    {
        Porder(n/10);
    }
    printf("%d\n",n%10);
}

//#include <stdio.h>
//
//double Fac(int x);
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%.10g\n", Fac(n));
//    return 0;
//}
//
//double Fac(int x)
//{
//    if (x == 0)
//        return 1;
//    else
//    {
//        return x * Fac(x - 1);
//    }
//}

//#include <stdio.h>
//
//#define Cube(x)
//
//int IsNarc(int x);
//
//int main()
//{
//    int x;
//    scanf("%d", &x);
//    if (IsNarc(x))
//    {
//        puts("Yes");
//    }
//    else
//    {
//        puts("No");
//    }
//    return 0;
//}
//
//int IsNarc(int x)
//{
//    if (x >= 100 && x <= 999)
//    {
//        int a = x % 10;
//        int b = x / 10 % 10;
//        int c = x / 100;
//        if (x == a * a * a + b * b * b + c * c * c)
//            //(x == Cube(a) + Cube(b) + Cube(c))
//            return 1;
//        else
//            return 0;
//    }
//    else
//        return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x >= 100 && x <= 999)
//		printf("yes");
//	else
//		printf("no");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d,%d", &a, &b);
//	if (a == 0 || b == 0);
//	else if (a % 2 == 0 && b % 2 == 0)
//		printf("%d+%d=%d", a, b, a + b);
//	else if (a % 2 == 1 && b % 2 == 1)
//		printf("%d-%d=%d", a, b, a - b);
//	else if (a % 2 == 1 && b % 2 == 0)
//		printf("%d*%d=%d", a, b, a * b);
//	else if (a % 2 == 0 && b % 2 == 1)
//		printf("%d%c%d=%d", a, '/', b, a / b);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a = 0;
//	char arr[1000] = { '\0' };
//	scanf("%c", &a);
//	getchar();
//	gets(arr);
//	int sz = strlen(arr);
//	int i = 0;
//	int max = 0;
//	int f = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == a)
//		{
//			max = i;
//			f = 1;
//		}
//	}
//	if (f == 1)
//		printf("index = %d", max);
//	else
//		printf("Not Found");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = 0;
//	int sum = 0;
//	while (n != 0)
//	{
//		c++;
//		sum += n % 10;
//		n = n / 10;
//	}
//	printf("%d %d", c, sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[100][10] = { 0 };
//	int a[100] = { 0 };
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0, j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[j][i] < 0)
//				a[i]++;
//		}
//	}
//	for (i = 0; i < n; i++)
//		printf("%d\n", a[i]);
//
//	return 0;
//}