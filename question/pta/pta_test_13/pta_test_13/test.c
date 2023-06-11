#define _CRT_SECURE_NO_WARNINGS 1

//1
//#include <stdio.h>
//
//int TotalLeapYear(int year);
//
//int main()
//{
//    int y;
//    scanf("%d", &y);
//    printf("%d\n", TotalLeapYear(y));
//
//    return 0;
//}
//
//int TotalLeapYear(int year)
//{
//    int i = year / 100;
//    int sum = year / 4 - (i - i / 4);
//    return sum;
//}

//2
//#include <stdio.h>
//
//int IsDigit(char x)
//{
//    if (x >= 48 && x <= 57)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    char c;
//    c = getchar();
//    if (IsDigit(c))
//    {
//        putchar('Y');
//    }
//    else
//    {
//        putchar('N');
//    }
//    putchar('\n');
//    return 0;
//}

//3
//#include <stdio.h>
//
//char ToRank(double score)
//{
//    int x = score;
//    switch (x / 10)
//    {
//    case 10:
//    case 9:
//        return 65;
//        break;
//    case 8:
//        return 66;
//        break;
//    case 7:
//        return 67;
//        break;
//    case 6:
//        return 68;
//        break;
//    case 5:
//    case 4:
//    case 3:
//    case 2:
//    case 1:
//    case 0:
//        return 69;
//        break;
//    }
//}
//
//int main()
//{
//    double s;
//    char r;
//    scanf("%lg", &s);
//    r = ToRank(s);
//    printf("%c\n", r);
//    return 0;
//}


//4
//#include <stdio.h>
//
//void ShowNameDayWeekEN(int dow)
//{
//    switch (dow)
//    {
//    case 0:
//        printf("Sunday");
//        break;
//    case 1:
//        printf("Monday");
//        break;
//    case 2:
//        printf("Tuesday");
//        break;
//    case 3:
//        printf("Wednesday");
//        break;
//    case 4:
//        printf("Thursday");
//        break;
//    case 5:
//        printf("Friday");
//        break;
//    case 6:
//        printf("Saturday");
//        break;
//    }
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    putchar('(');
//    ShowNameDayWeekEN(n);
//    putchar(')');
//    putchar('\n');
//    return 0;
//}


//5
//#include <stdio.h>
//
//double fact(int n)
//{
//    int i = 0;
//    double y = 1;
//    for (i = 1; i <= n; i++)
//    {
//        y *= i;
//    }
//    return y;
//}
//
//int main(void)
//{
//    int i, n;
//    double sum;
//
//    scanf("%d", &n);
//    sum = 1;
//    for (i = 1; i <= n; i++) 
//    {
//        sum = sum + 1.0 / fact(i);
//    }
//    printf("%f\n", sum);
//
//    return 0;
//}



//6
#include <stdio.h>
#include <math.h>
int fn(int a, int n)
{
    int i = 1;
    int b = 0;
    for (i = 0; i < n; i++)
    {
        b += a * pow(10, i);
    }
    return b;
}
int SumA(int a, int n)
{
    int i = 0, j = 0;
    int x = 0, y = a, z = a;
    for (i = 1; i < n; i++)
    {
        x = a * pow(10, i);
        y += x;
        z += y;
    }
    return z;
}

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}


//////1.1
//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	char C = 0;
//	scanf("%d %c", &N, &C);
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	if (N % 2 == 0)
//		x = N / 2;
//	else
//		x = N / 2 + 1;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%c", C);
//		}
//		printf("\n");
//	}
//	return 0;
//}



////1.2
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int x, y, z;
//		scanf("%d%d%d", &x, &y, &z);
//		if (x * x + y * y + z * z == 3 * x * y * z)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//
//	return 0;
//}



//1.3
//#include <stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	double a = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &a);
//		if (a < m)
//			printf("On Sale! %.1f\n", a);
//	}
//
//	return 0;
//}






////1.4
//#include <stdio.h>
//int main()
//{
//	int arr[24] = { 0 };
//	int i = 0;
//	for (i = 0; i < 24; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = 0;
//	scanf("%d", &a);
//	do
//	{
//		if (arr[a] > 50)
//			printf("%d Yes\n", arr[a]);
//		else
//			printf("%d No\n", arr[a]);
//		scanf("%d", &a);
//	} while (a >= 0 && a <= 23);
//
//	return 0;
//}