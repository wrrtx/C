#define _CRT_SECURE_NO_WARNINGS 1

////1计算函数
//#include <stdio.h>
//int max3(int x, int y, int z)
//{
//	if (x > y)
//	{
//		if (y > z)
//			return x;
//		else if (x > z)
//			return x;
//		else
//			return z;
//	}
//	else//(y>x)
//	{
//		if (x > z)
//			return y;
//		else if (y > z)
//			return y;
//		else
//			return z;
//	}	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	double m = (max3(a + b, b, c)) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2f", m);
//
//	return 0;
//}

////2几何
//#include <stdio.h>
//int main()
//{
//	int s = 0;
//	scanf("%d", &s);
//
//
//	return 0;
//}

////3成绩转换
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n / 10)
//	{
//		case 9:
//		case 10:
//			printf("A");
//			break;
//		case 8:
//			printf("B");
//			break;
//		case 7:
//			printf("C");
//			break;
//		case 6:
//			printf("D");
//			break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:
//			printf("E");
//			break;
//	}
//
//
//	return 0;
//}

////4求一元二次方程
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

//5计算天数
#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d/%d/%d", &a, &b, &c);
	int e = 0, d = 0;
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
	{
		if (b <= 2)
		{
			e = c + b / 2 * 31;
			printf("%d", e);
		}
		else if (b >= 3 && b <= 7)
		{
			if (b % 2 == 0)
			{
				e = (b / 2) * 31;
				d = (b / 2 - 2) * 30 + 29;
				printf("%d", e + d + c);
			}
			else
			{
				e = (b / 2) * 31;
				d = (b / 2 - 1) * 30 + 29;
				printf("%d", e + d + c);
			}
		}
		else
		{
			if (b % 2 == 0)
			{
				e = (b / 2) * 31;
				d = (b / 2 - 2) * 30 + 29;
				printf("%d", e + d + c);
			}
			else
			{
				e = (b / 2 + 1) * 31;
				d = (b / 2 - 3) * 30 + 29;
				printf("%d", e + d + c);
			}
		}
	}
	else
		if (b <= 2)
		{
			e = c + b / 2 * 31;
			printf("%d", e);
		}
		else if (b >= 3 && b <= 7)
		{
			if (b % 2 == 0)
			{
				e = (b / 2) * 31;
				d = (b / 2 - 2) * 30 + 28;
				printf("%d", e + d + c);
			}
			else
			{
				e = (b / 2) * 31;
				d = (b / 2 - 1) * 30 + 28;
				printf("%d", e + d + c);
			}
		}
		else
		{
			if (b % 2 == 0)
			{
				e = (b / 2) * 31;
				d = (b / 2 - 2) * 30 + 28;
				printf("%d", e + d + c);
			}
			else
			{
				e = (b / 2 + 1) * 31;
				d = (b / 2 - 3) * 30 + 28;
				printf("%d", e + d + c);
			}
		}

	return 0;
}

////6程序设计联考
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

////7高速公路处罚
//#include <stdio.h>
//int main()
//{
//	int sp = 0;
//	int ban = 0;
//	scanf("%d%d", &sp, &ban);
//	int x = (float)(sp - ban) / ban * 100.0 + 0.5;
//	if (sp <= ban)
//	{
//		printf("OK");
//	}
//	else
//	{
//		if (x < 10)
//			printf("OK");
//		else if (x < 50)
//		{
//			printf("Exceed %d%%. Ticket 200\n", x);
//		}
//		else
//		{
//			printf("Exceed %d%%. License Revoked\n", x);
//		}
//	}
//
//	return 0;
//}

////8计算油费
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	char c = 0;
//	double ret = 0;
//	scanf("%d%d%c", &a, &b, &c);
//	if (b == 90 && c == 'm') {
//		ret = 6.95 * a * 0.95;
//	}
//	else if (b == 90 && c == 'e') {
//		ret = 6.95 * a * 0.97;
//	}
//	else if (b == 93 && c == 'm') {
//		ret = 7.44 * a * 0.95;
//	}
//	else if (b == 93 && c == 'e') {
//		ret = 7.44 * a * 0.97;
//	}
//	else if (b == 97 && c == 'm') {
//		ret = 7.93 * a * (1 - 0.05);
//	}
//	else if (b == 97 && c == 'e') {
//		ret = 7.93 * a * 0.97;
//	}
//	printf("%.2f", ret);
//
//	return 0;
//}

////9三角形面积和周长
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	double s, area, p, ret;
//	if (a + b > c && a + c > b && b + c > a || a == b == c)
//	{
//		p = a + b + c;
//		s = (a + b + c) / 2.0;
//		ret = s * (s - a) * (s - b) * (s - c) * 1.0;
//		area = sqrt(ret);
//		printf("area = %.2f; perimeter = %.2f", area, p);
//	}
//	else
//	{
//		printf("These sides do not correspond to a valid triangle");
//	}
//
//	return 0;
//}