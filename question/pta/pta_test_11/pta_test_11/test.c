#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <math.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    double edge1, edge2, edge3, L, A;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    edge1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    edge2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    edge3 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    if (edge1 + edge2 > edge3 && edge1 + edge3 > edge2 && edge2 + edge3 > edge1)
    {
        double p;
        L = edge1 + edge2 + edge3;
        p = L / 2;
        A = sqrt(p * (p - edge1) * (p - edge2) * (p - edge3));
        printf("L = %.2lf, A = %.2lf", L, A);
    }
    else
        printf("Impossible");

    return 0;
}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double x1, y1, x2, y2, x3, y3;
//    double L, A, a, b, c;
//    scanf_s(" %lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
//    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//    b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
//    c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
//    L = (a + b + c);
//    A = 1 / 2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
//    if (a + b > c && b + c > a && c + a > b)
//        printf("L = %.2lf, A = %.2lf", L, A);
//    else
//        printf("Impossible");
//
//    return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = b / 100 * 60 + b % 100;
//	int d = a / 100 * 60 + a % 100;
//	int h = (c - d) / 60;
//	int m = (c - d) % 60;
//	if (h < 10 && h>0 && m > 9)
//		printf("%d%d%c%d", 0, h, ':', m);
//	else if (h == 0 && m > 9)
//		printf("00%c%d", ':', m);
//	else if (h > 9 && m > 9)
//		printf("%d%c%d", h, ':', m);
//	else if (h < 10 && h>0 && m <= 9)
//		printf("%d%d%c0%d", 0, h, ':', m);
//	else if (h == 0 && m <= 9)
//		printf("00%c0%d", ':', m);
//	else if (h > 9 && m <= 9)
//		printf("%d%c0%d", h, ':', m);
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	double c;
//	if (b > 0)
//		c = a * 1.0 / b;
//	else if (b < 0)
//	{
//		c = a * 1.0 / b;
//	}
//	if (b > 0)
//		printf("%d%c%d=%.2f", a, '/', b, c);
//	else if (b < 0)
//		printf("%d%c%c%d%c=%.2f", a, '/', '(', b, ')', c);
//	else if (b == 0)
//		printf("%d%c%d=Error", a, '/', b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	char ch[4];
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %d", &ch, &a, &b);
//		ch[3] = '\0';
//		if ((a < 15 || a > 20) || (b < 50 || b > 70))
//		{
//			for (j = 0; j < 3; j++)
//			{
//				printf("%c", ch[j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f%f%f", &a, &b, &c);
//	double t1 = b * b - 4.0 * a * c;
//	double t2 = 0, t3 = 0;
//	double x1 = 0, x2 = 0;
//	if (a == 0 && b == 0 & c == 0)
//		printf("Zero Equation");
//	else if (a == 0 && b == 0 & c != 0)
//		printf("Not An Equation");
//	else if (a == 0 && b != 0 && c != 0)
//	{
//		x1 = (-c) / (b * 1.00);
//		printf("%.2f", x1);
//	}
//	else if (t1 == 0)
//	{
//		x1 = (-b) / (2.0 * a);
//		printf("%.2f", x1);
//	}
//	else if (t1 > 0)
//	{
//		t2 = sqrt(t1);
//		x1 = ((-b) + t2) / (2.0 * a);
//		x2 = ((-b) - t2) / (2.0 * a);
//		if (x1 > x2)
//			printf("%.2f\n%.2f", x1, x2);
//		else
//			printf("%.2f\n%.2f", x2, x1);
//	}
//	else
//	{
//		t3 = -t1;
//		t2 = sqrt(t3);
//		x2 = t2 / (2.0 * a);
//		x1 = (-b) / (2.0 * a);
//		if (x1 != 0 && x2 != 0)
//		{
//			printf("%.2f+%.2fi\n", x1, x2);
//			printf("%.2f-%.2fi\n", x1, x2);
//		}
//		else
//		{
//			printf("0.00+%.2fi\n", x2);
//			printf("0.00-%.2fi", x2);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int now = 0;
//	int min = 0;
//	scanf("%d%d", &now, &min);
//	int hr1 = now / 100;
//	int min1 = now % 100;
//	min1 = min1 + min;
//	int min2 = 0;
//	int hr2 = 0;
//	min2 = (min1 + hr1 * 60) % 60;
//	hr2 = (min1 + hr1 * 60) / 60;
//	int time = 0;
//	if (hr2 > 0 && hr2 < 24)
//	{
//		time = hr2 * 100 + min2;
//		printf("%d", time);
//	}
//	else if (hr2 == 0 || hr2 == 24)
//	{
//		if (min2 == 0)
//		{
//			printf("000");
//		}
//		else if (min2 <= 9 && min2 > 0)
//		{
//			time = min2;
//			printf("00%d", time);
//		}
//		else
//		{
//			time = min2;
//			printf("0%d", time);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0;
//	char tmp = 0;
//	int letter = 0, blank = 0, digit = 0, other = 0;
//	for (i = 0; i < 10; i++)
//	{
//		tmp = getchar();
//		if (a == 10)
//			break;
//		else if (tmp == '\n')
//		{
//			++a;
//			++blank;
//		}
//		else if (tmp == ' ')
//		{
//			++a;
//			++blank;
//		}
//		else if ((tmp <= 90 && tmp >= 65) || (tmp <= 122 && tmp >= 97))
//		{
//			++a;
//			++letter;
//		}
//		else if (tmp <= 57 && tmp >= 48)
//		{
//			++a;
//			++digit;
//		}
//		else
//		{
//			++a;
//			++other;
//		}
//	}
//	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
//	return 0;
//}