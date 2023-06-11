#define _CRT_SECURE_NO_WARNINGS 1

////7-1
//#include <stdio.h>
//int main()
//{
//	printf("Programming in C is fun!");
//
//	return 0;
//}

////7-2
//#include <stdio.h>
//int main()
//{
//	int f = 150;
//	int c = 5 * (f - 32) / 9;
//	printf("fahr = 150, celsius = %d", c);
//
//	return 0;
//}

////7-3
//#include <stdio.h>
//int main()
//{
//	double h = 0.5 * 10 * 3 * 3;
//	printf("height = %.2f", h);
//
//	return 0;
//}

////7-4
//#include <stdio.h>
//int main()
//{
//	int f = 0;
//	scanf("%d", &f);
//	int c = 5 * (f - 32) / 9;
//	printf("Celsius = %d", c);
//
//	return 0;
//}

////7-5
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//
//	return 0;
//}

////7-6
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	double sum = 0, aver = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	sum = a + b + c + d;
//	aver = sum / 4;
//	printf("Sum = %.0f; Average = %.1f", sum, aver);
//
//	return 0;
//}

////7-7
//#include <stdio.h>
//int main()
//{
//	printf("****\n");
//	printf("***\n");
//	printf("**\n");
//	printf("*");
//
//	return 0;
//}

////7-8
//#include <stdio.h>
//int main()
//{
//	int f = 100;
//	int c = 5 * (f - 32) / 9;
//	printf("fahr = 100, celsius = %d", c);
//
//	return 0;
//}

////7-9
//#include <stdio.h>
//int main()
//{
//	int m = 87, e = 72, c = 93;
//	int aver = (m + e + c) / 3;
//	printf("math = 87, eng = 72, comp = 93, average = %d", aver);
//
//	return 0;
//}

////7-10
//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	int y = x * x;
//	printf("%d = %d * %d\n", y, x, x);
//	printf("%d * %d = %d", x, x, y);
//
//	return 0;
//}

////7-11
//#include <stdio.h>
//int main()
//{
//	int c = 26;
//	int f = 9 * c / 5 + 32;
//	printf("celsius = 26, fahr = %d", f);
//
//	return 0;
//}

////7-12
//#include <stdio.h>
//int main()
//{
//	int x = 152 % 10;
//	int y = 152 / 10 % 10;
//	int z = 152 / 100;
//	printf("152 = %d + %d*10 + %d*100", x, y, z);
//
//	return 0;
//}

////7-13
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0, z = 0;
//	int n = 0, m = 0;
//	scanf("%d%d", &x, &y);
//	x = x % 100 + x / 100 * 60;
//	y = y % 100 + y / 100 * 60;
//	z = y - x;
//	n = z % 60;
//	m = z / 60;
//	if (m <= 0 && n < 10)
//		printf("00:0%d", n);
//	else if (m <= 0 && n >= 10)
//		printf("00:%d", n);
//	else if (m < 10 && n < 10)
//		printf("0%d:0%d", m, n);
//	else if (m < 10 && n >= 10)
//		printf("0%d:%d", m, n);
//	else if (m >= 10 && n < 10)
//		printf("%d:0%d", m, n);
//	else if (m >= 0 && n >= 10)
//		printf("%d:%d", m, n);
//
//	return 0;
//}

////7-14
//#include <stdio.h>
//int main()
//{
//	printf("------------------------------------\n");
//	printf("Province      Area(km2)   Pop.(10K)\n");
//	printf("------------------------------------\n");
//	printf("Anhui         139600.00   6461.00\n");
//	printf("Beijing        16410.54   1180.70\n");
//	printf("Chongqing      82400.00   3144.23\n");
//	printf("Shanghai        6340.50   1360.26\n");
//	printf("Zhejiang      101800.00   4894.00\n");
//	printf("------------------------------------\n");
//
//	return 0;
//}

////7-15
//#include <stdio.h>
//int main()
//{
//	double a = 0, d = 0;
//	int b = 0;
//	char c = 0;
//	scanf("%lf %d %c %lf", &a, &b, &c, &d);
//	printf("%c %d %.2f %.2f", c, b, a, d);
//
//	return 0;
//}

////7-16
//#include <stdio.h>
//int main()
//{
//	int f = 0, i = 0;
//	int cm = 0;
//	scanf("%d", &cm);
//	f = cm / 30.48;
//	i = (cm / 30.48 - f) * 12;
//	printf("%d %d", f, i);
//
//	return 0;
//}

////7-17
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	int n = 0, m = 0;
//	scanf("%d %d", &x, &y);
//	x = x % 100 + x / 100 * 60;
//	m = (x + y) / 60;
//	n = (x + y) % 60;
//	if (m == 0)
//		printf("0");
//	else if (m > 0)
//		printf("%d", m);
//	if (n == 0)
//		printf("00");
//	else if (n < 10)
//		printf("0%d", n);
//	else
//		printf("%d", n);
//
//	return 0;
//}

////7-18
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int x = 0, y = 0, z = 0;
//	scanf("%d", &a);
//	x = a % 10;
//	y = a / 10 % 10;
//	z = a / 100;
//	if (x == 0)
//	{
//		if (y == 0)
//			printf("%d", z);
//		else
//			printf("%d%d", y, z);
//	}
//	else
//		printf("%d%d%d", x, y, z);
//
//	return 0;
//}

////7-19
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("Hello, %d and %d!", a, b);
//
//	return 0;
//}

////7-20
//#include <stdio.h>
//int next(int n)
//{
//	int sum = 0;
//	do
//	{
//		sum += n % 10;
//		n /= 10;
//	} while (n);
//	return (sum);
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	while (++i)
//	{
//		int x = next(n);
//		int y = n;
//		n = x * 3 + 1;
//		printf("%d:%d\n", i, n);
//		if (y == n)
//			break;
//	}
//
//	return 0;
//}

////7-21
//#include <stdio.h>
//int main()
//{
//	printf("I\n \nL\no\nv\ne\n \nG\nP\nL\nT\n");
//
//	return 0;
//}

////7-22
//#include <stdio.h>
//int main()
//{
//	int h = 0;
//	double x = 0;
//	scanf("%d", &h);
//	x = (h - 100) * 0.9 * 2;
//	printf("%.1f", x);
//
//	return 0;
//}

////7-23
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	printf("a=%d,b=%d", y, x);
//
//	return 0;
//}

////7-24
//#include <stdio.h>
//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	double s = r * r * 3.14;
//	printf("%.6f", s);
//
//	return 0;
//}

////7-25
//#include <stdio.h>
//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	double c = 2 * r * 3.14;
//	printf("s=%.6f", c);
//
//	return 0;
//}

////7-26
//#include <stdio.h>
//int main()
//{
//	double x = 0, y = 0, z = 0;
//	scanf("%lf%lf", &x, &y);
//	z = x * x * 1.0 + y * y * 1.0;
//	printf("%.6f", z);
//
//	return 0;
//}

////7-27
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d", &x);
//	y = x % 10;
//	printf("%d", y);
//
//	return 0;
//}

////7-28
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0, z = 0, sum = 0;
//	scanf("%d%d%d", &x, &y, &z);
//	sum = x + y + z;
//	printf("sum=%d", sum);
//
//	return 0;
//}

////7-29
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0, z = 0;
//	double aver = 0;
//	scanf("%d%d%d", &x, &y, &z);
//	aver = (x + y + z) / 3.0;
//	printf("aver=%.6f", aver);
//
//	return 0;
//}

////7-30
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d", &x);
//	y = pow(2, x);
//	printf("2^%d = %d", x, y);
//
//	return 0;
//}

////7-31
//#include <stdio.h>
//int a(int i)
//{
//	if (i % 7 == 0 || i % 10 == 7)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int n = 0, c = 0;
//	scanf("%d", &n);
//	if (n >= 70)
//		c = n / 70 * 16;
//	for (int i = 1; i <= n % 70; i++)
//	{
//		if (a(i))
//			c++;
//	}
//	printf("%d", c);
//
//	return 0;
//}

////7-32
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	double b = 0;
//	char c = 0;
//	scanf("a=%d,b=%lf:c=%c", &a, &b, &c);
//	if (a > 0)
//		printf("a=+%-9d,", a);
//	else if (a < 0)
//		printf("a=%-10d,", a);
//	else
//		printf("a=%-10d,", a);
//	printf("b=%20.3f,c=%c", b, c);
//
//	return 0;
//}

////7-33
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", a * b);
//
//	return 0;
//}

////7-34
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%.2f %d", a * 1.0 / b, a % b);
//
//	return 0;
//}

////7-35
//#include <stdio.h>
//int main()
//{
//	char m1 = 0, m2 = 0;
//	char d1 = 0, d2 = 0;
//	int y = 0;
//	scanf("%c%c-%c%c-%d", &m1, &m2, &d1, &d2, &y);
//	printf("%d-%c%c-%c%c", y, m1, m2, d1, d2);
//
//	return 0;
//}

////7-36
//#include <stdio.h>
//int main()
//{
//	char s[8] = { '\0' };
//	scanf("%s", s);
//	printf("Hello %s", s);
//
//	return 0;
//}

////7-37
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", (a / 9) * 2);
//
//	return 0;
//}

////7-38
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%.2f", a * 0.1 * b);
//
//	return 0;
//}

////7-39
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	char arr[7] = { '\0' };
//	scanf("%s", arr);
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c->", arr[i]);
//		arr[i] -= 32;
//		printf("%c->", arr[i]);
//		arr[i] %= 10;
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

////7-40
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("C = %d\nS = %d", (a + b) * 2, a * b);
//
//	return 0;
//}

////7-41
////1
//#include <stdio.h>
//int main()
//{
//	char arr[100] = { '\0' };
//	int i = 0;
//	int f = 0;
//	scanf("%s", arr);
//	while (arr[i] != '\0')
//	{
//		if (arr[i] != '2' || arr[i + 1] != '0' || arr[i + 2] != '1' || arr[i + 3] != '9')
//		{
//			f = 1;
//			break;
//		}
//		else
//			i += 4;
//	}
//	if (f == 0)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
////2
////#include <stdio.h>
////int main()
////{
////	char arr[100] = { '\0' };
////	int count = 0;
////	int i = 0;
////	scanf("%s", arr);
////	while (arr[i] != '\0')
////	{
////		count += arr[i];
////		++i;
////	}
////	if (count % ('2' + '0' + '1' + '9') == 0)
////		printf("Yes\n");
////	else
////		printf("No\n");
////
////	return 0;
////}

////7-42
//#include <stdio.h>
//int main()
//{
//	double x = 0;
//	double y = 0;
//	scanf("%lf", &x);
//	if (x == 0)
//		printf("f(0.0) = 0.0");
//	else
//	{
//		y = 1.0 / x;
//		printf("f(%.1f) = %.1f", x, y);
//	}
//
//	return 0;
//}

////7-43
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double x = 0;
//	double y = 0;
//	scanf("%lf", &x);
//	if (x >= 0)
//	{
//		y = pow(x, 0.5);
//		printf("f(%.2f) = %.2f", x, y);
//	}
//	else
//	{
//		y = pow((x + 1), 2) + 2 * x * 1.0 + 1.0 / x;
//		printf("f(%.2f) = %.2f", x, y);
//	}
//
//	return 0;
//}

////7-44
//#include <stdio.h>
//int main()
//{
//	int low = 0;
//	int up = 0;
//	double x = 0;
//	scanf("%d%d", &low, &up);
//	if (low > up)
//		printf("Invalid.\n");
//	else
//	{
//		printf("fahr celsius\n");
//		while (low <= up)
//
//		{
//			x = 5.0 * (low - 32) / 9;
//			printf("%d%6.1f\n", low, x);
//			low += 2;
//		}
//	}
//
//	return 0;
//}

////7-45
//#include <stdio.h>
//int main()
//{
//	double c = 0;
//	double cost = 0;
//	scanf("%lf", &c);
//	if (c > 50)
//	{
//		cost = (c - 50) * 0.58 + 50.0 * 0.53;
//		printf("cost = %.2f", cost);
//	}
//	else if (c > 0)
//	{
//		cost = c * 0.53;
//		printf("cost = %.2f", cost);
//	}
//	else
//		printf("Invalid Value!\n");
//
//	return 0;
//}

////7-46
//#include <stdio.h>
//int main()
//{
//	double n = 0;
//	scanf("%lf", &n);
//	if (n > 0)
//		printf("sign(%.0f) = 1", n);
//	else if (n < 0)
//		printf("sign(%.0f) = -1", n);
//	else
//		printf("sign(0) = 0");
//
//	return 0;
//}

////7-47
//#include <stdio.h>
//int main()
//{
//	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int input = 0;
//		scanf("%d", &input);
//		if (1 == input)
//			printf("price = 3.00\n");
//		else if (2 == input)
//			printf("price = 2.50\n");
//		else if (3 == input)
//			printf("price = 4.10\n");
//		else if (4 == input)
//			printf("price = 10.20\n");
//		else if (0 == input)
//			break;
//		else
//			printf("price = 0.00\n");
//
//	}
//
//	return 0;
//}

////7-48
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int ret = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		ret = a;
//		a = b;
//		b = ret;
//	}
//	if (a < c)
//	{
//		ret = a;
//		a = c;
//		c = ret;
//	}
//	if (b < c)
//	{
//		ret = b;
//		b = c;
//		c = ret;
//	}
//	printf("%d->%d->%d", c, b, a);
//
//	return 0;
//}

////7-49
//#include <stdio.h> 
//int main()
//{
//	int sp = 0;
//	int ban = 0;
//	scanf("%d%d", &sp, &ban);
//	double x = (sp - ban) * 1.0 / ban * 100.0;
//	if (x < 10)
//		printf("OK");
//	else
//	{
//		if (x < 50)
//		{
//			printf("Exceed %.0f%%. Ticket 200\n", x);
//		}
//		else
//		{
//			printf("Exceed %.0f%%. License Revoked\n", x);
//		}
//	}
//	return 0;
//}

////7-50
//#include <stdio.h>
//int main()
//{
//	double x = 0;
//	int y = 0;
//	double count = 0;
//	scanf("%lf%d", &x, &y);
//	if (x <= 3)
//		count = 10;
//	else if (x <= 10)
//		count = 10 + (x - 3) * 2.0;
//	else
//		count = 10 + 7 * 2.0 + (x - 10) * 3.0;
//	if (y >= 5)
//		count += y / 5 * 2;
//	printf("%.0f", count);
//
//	return 0;
//}

////7-51
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int x = 0;
//	int a[5] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		switch (x / 10)
//		{
//		case 9:
//		case 10:
//			a[0]++;
//			break;
//		case 8:
//			a[1]++;
//			break;
//		case 7:
//			a[2]++;
//			break;
//		case 6:
//			a[3]++;
//			break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:
//			a[4]++;
//			break;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", a[i]);
//		if (i != 4)
//			printf(" ");
//	}
//
//	return 0;
//}

////7-52
//#include <stdio.h>
//int main()
//{
//	double x = 0;
//	double y = 0;
//	scanf("%lf", &x);
//	if (x != 10)
//		printf("f(%.1f) = %.1f", x, x);
//	else
//		printf("f(10.0) = 0.1");
//	
//	return 0;
//}

////7-53
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x <= 1600)
//		printf("0.00");
//	else if (x <= 2500)
//		printf("%.2f", (x - 1600) * 0.05);
//	else if (x <= 3500)
//		printf("%.2f", (x - 1600) * 0.1);
//	else if (x <= 4500)
//		printf("%.2f", (x - 1600) * 0.15);
//	else
//		printf("%.2f", (x - 1600) * 0.2);
//
//	return 0;
//}

////7-54
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	double C = 0;
//	double S = 0;
//	double s = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		C = a + b + c;
//		s = C / 2.0;
//		S = pow(s * (s - a) * (s - b) * (s - c) * 1.0, 0.5);
//		printf("area = %.2f; perimeter = %.2f", S, C);
//	}
//	else
//		printf("These sides do not correspond to a valid triangle\n");
//
//	return 0;
//}

////7-55
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	char z = 0;
//	double c = 0;
//	scanf("%d %d %c", &x, &y, &z);
//	if (y == 90)
//	{
//		if (z == 'm')
//			c = x * 6.95 * 0.95;
//		else
//			c = x * 6.95 * 0.97;
//	}
//	else if (y == 93)
//	{
//		if (z == 'm')
//			c = x * 7.44 * 0.95;
//		else
//			c = x * 7.44 * 0.97;
//	}
//	else
//	{
//		if (z == 'm')
//			c = x * 7.93 * 0.95;
//		else
//			c = x * 7.93 * 0.97;
//	}
//	printf("%.2f", c);
//
//	return 0;
//}

////7-56
//#include <stdio.h>
//int main()
//{
//	int v = 0;
//	scanf("%d", &v);
//	if (v <= 60)
//		printf("Speed: %d - OK\n", v);
//	else
//		printf("Speed: %d - Speeding\n");
//
//	return 0;
//}

////7-57
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a == b)
//		printf("C\n");
//	else if (a == c)
//		printf("B\n");
//	else
//		printf("A\n");
//
//	return 0;
//}

////7-58
//#include <stdio.h>
//int main()
//{
//	double x = 0;
//	scanf("%lf", &x);
//	if (x <= 15)
//		printf("%.2f", 4.0 * x / 3.0);
//	else
//		printf("%.2f", 2.5 * x - 17.5);
//
//
//	return 0;
//}

////7-59
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	double z = 0;
//	scanf("%d%d", &x, &y);
//	if (x < 5)
//	{
//		if (y > 40)
//			z = 30.0 * 40 + (y - 40) * 30 * 1.5;
//		else
//			z = 30.0 * y;
//	}
//	else
//	{
//		if (y > 40)
//			z = 50.0 * 40 + (y - 40) * 50 * 1.5;
//		else
//			z = 50.0 * y;
//	}
//	printf("%.2f", z);
//
//	return 0;
//}

////7-60
//#include <stdio.h>
//int main()
//{
//	int x = 0, z = 0;
//	char y = 0;
//	scanf("%d %c %d", &x, &y, &z);
//	if (y == '+')
//		printf("%d", x + z);
//	else if (y == '-')
//		printf("%d", x - z);
//	else if (y == '*')
//		printf("%d", x * z);
//	else if (y == '/')
//		printf("%d", x / z);
//	else if (y == '%')
//		printf("%d", x % z);
//	else
//		printf("ERROR\n");
//
//	return 0;
//}

////7-61
//#include <stdio.h>
//int main()
//{
//	char a[6] = { '\0' };
//	scanf("%s", a);
//	int h = (a[0] - '0') * 10 + a[1] - '0';
//	int m = (a[3] - '0') * 10 + a[4] - '0';
//	if (h < 12 || h == 12 && m == 0)
//		printf("Only %c%c:%c%c.  Too early to Dang.\n", a[0], a[1], a[3], a[4]);
//	else
//	{
//		while (h - 12)
//		{
//			printf("Dang");
//			--h;
//		}
//		if (m != 0)
//			printf("Dang");
//	}
//
//	return 0;
//}

////7-62
//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 0;
//	int x = 0, y = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		scanf("%d", &m);
//		if (m % 2 == 1)
//			x++;
//		else
//			y++;
//		--n;
//	}
//	printf("%d %d\n", x, y);
//
//	return 0;
//}

////7-63
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x >= 0)
//		printf("y=%.6f", x + 3.0);
//	else
//		printf("y=%.6f", x / 2.0);
//
//	return 0;
//}

////7-64
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

////7-65
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("max=%d\n", max);
//
//	return 0;
//}

////7-66
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x >= 0)
//		printf("%d", x);
//	else
//		printf("%d", -x);
//
//	return 0;
//}

////7-67
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x % 2 == 1)
//		printf("y=%d", x * 3);
//	else
//		printf("y=%d", x * 2);
//
//	return 0;
//}

////7-68
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x >= 100 && x <= 999)
//		printf("yes\n");
//	else
//		printf("no\n");
//
//	return 0;
//}

////7-69
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x % 2 == 0)
//		printf("yes\n");
//	else
//		printf("no\n");
//
//	return 0;
//}

////7-70
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x > 0)
//		printf("y=1\n");
//	else
//		printf("y=-1\n");
//
//	return 0;
//}

////7-71
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x >= 60)
//		printf("pass\n");
//	else
//		printf("fail\n");
//
//	return 0;
//}

////7-72
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0, z = 0;
//	int t = 0;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x > y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	if (x > z)
//	{
//		t = x;
//		x = z;
//		z = t;
//	}
//	if (y > z)
//	{
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("x=%d,y=%d,z=%d\n", x, y, z);
//
//	return 0;
//}

////7-73
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	if (b > 0)
//		printf("%d/%d=%.2f", a, b, a * 1.0 / b);
//	else if (b < 0)
//		printf("%d/(%d)=%.2f", a, b, a * 1.0 / b);
//	else
//		printf("%d/%d=Error", a, b);
//
//	return 0;
//}

////7-74
//#include <stdio.h>
//int main()
//{
//	int x = 0, c = 0;
//	while (1)
//	{
//		scanf("%d", &x);
//		++c;
//		if (x == 250)
//			break;
//	}
//	printf("%d", c);
//
//	return 0;
//}

////7-75
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int k = 0;
//	int c = 0;
//	char arr[8] = { '\0' };
//	char a[8] = { '\0' };
//	scanf("%d", &k);
//	while (1)
//	{
//		++c;
//		scanf("%s", arr);
//		if (strcmp(arr, "End") == 0)
//			break;
//		if (k == c - 1)
//		{
//			printf("%s\n", arr);
//			c = 0;
//		}
//		else
//		{
//			if (strcmp(arr, "ChuiZi") == 0)
//				printf("Bu\n");
//			else if (strcmp(arr, "JianDao") == 0)
//				printf("ChuiZi\n");
//			else if (strcmp(arr, "Bu") == 0)
//				printf("JianDao\n");
//		}
//	}
//
//	return 0;
//}

////7-76
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	char a[4] = { '\0' };
//	int x = 0, y = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %d", a, &x, &y);
//		if (x < 15 || x > 20 || y < 50 || y > 70)
//			printf("%s\n", a);
//	}
//
//	return 0;
//}

////7-77
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= '0' && ch <= '9')
//		printf("digit\n");
//	else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//		printf("character\n");
//	else
//		printf("ERROR\n");
//
//	return 0;
//}

////7-78
//#include <stdio.h>
//int main()
//{
//	int a[3] = { 0 };
//	scanf("%d%d%d", &a[0], &a[1], &a[2]);
//	int max = a[0], min = a[0];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//		if (min > a[i])
//			min = a[i];
//	}
//	printf("%d %d\n", max, min);
//
//	return 0;
//}

////7-79
//#include <stdio.h>
//int main()
//{
//	int guess = 0;
//	scanf("%d", &guess);
//	if (guess < 38)
//		printf("Too small!\n");
//	else if (guess > 38)
//		printf("Too big!\n");
//	else
//		printf("Good Guess!\n");
//
//	return 0;
//}

////7-80
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double k = 0, m = 0;
//	double y = 0;
//	scanf("%lf%lf", &k, &m);
//	y = k * 1.0 / pow(m, 2);
//	if (y > 25)
//		printf("%.1f\nPANG\n", y);
//	else
//		printf("%.1f\nHai Xing\n", y);
//
//	return 0;
//}

////7-81
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	char a[7] = { '\0' };
//	scanf("%d", &i);
//	while (i--)
//	{
//		scanf("%s", a);
//		if (a[0] + a[1] + a[2] == a[3] + a[4] + a[5])
//			printf("You are lucky!\n");
//		else
//			printf("Wish you good luck.\n");
//	}
//
//	return 0;
//}

////7-82
//#include <stdio.h>
//void b(int s, int t)	//男生
//{
//	if (s == 130)
//		printf("wan mei! ");
//	else if (s < 130)
//		printf("duo chi yu! ");
//	else if (s > 130)
//		printf("ni li hai! ");		//以上部分是判断身高
//	if (t == 27)
//		printf("wan mei!");
//	else if (t < 27)
//		printf("duo chi rou!");
//	else if (t > 27)
//		printf("shao chi rou!");//以上部分是判断体重
//	printf("\n");		//换行
//}
//void g(int s, int t)		//女生
//{
//	if (s == 129)
//		printf("wan mei! ");
//	else if (s < 129)
//		printf("duo chi yu! ");
//	else if (s > 129)
//		printf("ni li hai! ");	//以上部分是判断身高
//	if (t == 25)
//		printf("wan mei!");
//	else if (t < 25)
//		printf("duo chi rou!");
//	else if (t > 25)
//		printf("shao chi rou!");	//以上部分是判断体重
//	printf("\n");//换行
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);	//个数
//	int x = 0, s = 0, t = 0;	//x是性别，s是身高，t是体重
//	int i = 0;
//	if (n == 0)
//		;
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d%d%d", &x, &s, &t);	//输入3个值
//			switch (x)//判断是男生还是女生
//			{
//			case 1:
//				b(s, t);	//男生
//				break;
//			case 0:
//				g(s, t);//女生
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

////7-83
//#include <stdio.h>
//int main()
//{
//	printf("This is a simple problem.\n");
//
//	return 0;
//}

////7-84
//#include <stdio.h>
//int main()
//{
//	printf("  A\n");
//	printf("A   A\n");
//	printf("  A\n");
//
//	return 0;
//}

////7-85
//#include <stdio.h>
//int main()
//{
//	printf("I'm gonna WIN!\n");
//	printf("I'm gonna WIN!\n");
//	printf("I'm gonna WIN!\n");
//
//	return 0;
//}

////7-86
//#include <stdio.h>
//int main()
//{
//	printf("[1] Select crisps\n");
//	printf("[2] Select popcorn\n");
//	printf("[3] Select chocolate\n");
//	printf("[4] Select cola\n");
//	printf("[0] Exit\n");
//
//	return 0;
//}

////7-87
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//
//	return 0;
//}

////7-88
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	printf("%d + %d = %d\n", x, y, x + y);
//	printf("%d - %d = %d\n", x, y, x - y);
//	printf("%d * %d = %d\n", x, y, x * y);
//	if (x * 1.0 / y == x / y)
//		printf("%d * %d = %d\n", x, y, x / y);
//	else
//		printf("%d / %d = %.2f\n", x, y, x * 1.0 / y);
//
//	return 0;
//}

////7-89
//#include <stdio.h>
//int main()
//{
//	int d = 0;
//	scanf("%d", &d);
//	if (d + 2 > 7)
//		printf("%d", d - 5);
//	else
//		printf("%d", d + 2);
//
//	return 0;
//}

////7-90
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int a = x / 100;
//	int b = (x - a * 100) / 50;
//	int c = (x - a * 100 - b * 50) / 20;
//	int d = (x - a * 100 - b * 50 - c * 20) / 10;
//	int e = (x - a * 100 - b * 50 - c * 20 - d * 10) / 5;
//	int f = (x - a * 100 - b * 50 - c * 20 - d * 10 - e * 5) / 2;
//	int g = x - a * 100 - b * 50 - c * 20 - d * 10 - e * 5 - f * 2;
//	printf("%3d元:%3d张\n", 100, a);
//	printf("%3d元:%3d张\n", 50, b);
//	printf("%3d元:%3d张\n", 20, c);
//	printf("%3d元:%3d张\n", 10, d);
//	printf("%3d元:%3d张\n", 5, e);
//	printf("%3d元:%3d张\n", 2, f);
//	printf("%3d元:%3d张\n", 1, g);
//
//	return 0;
//}

////7-91
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int s = 0, n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s += i;
//	}
//	printf("%d", s);
//
//	return 0;
//}

//7-92
#include <stdio.h>
int main()
{
	char ch = 0;
	int a = 0;
	int z = 0;	//char的范围在-127到127之间，z容易超范围，改用int类型可以解决此问题
	//unsigned char z = 0;						//或者unsigned char 0-255
	scanf("%c %d", &ch, &a);//ch是明文，a是密钥
	a %= 26;		//如果超过26就求余数
	z = ch + a;		
	if (z > 122)	//这里是让不在a-z范围的矫正
		z -= 26;
	else if (z < 97)
		z += 26;
	printf("%c", z);

	return 0;
}

////7-93
//#include <stdio.h>
//int main()
//{
//	int n = 0, b = 0;
//	scanf("%d%d", &n, &b);
//	if (n % b == 0)
//		printf("%d", n / b);
//	else
//		printf("%d", n / b + 1);
//
//	return 0;
//}

////7-94
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double x = 0;
//	scanf("%lf", &x);
//	if (x > 6)
//		printf("%.3f", 5.0 / 27.0 * (pow(x, 2) + 4 * x - 6));
//	else if (x <= 6 && x > 0)
//		printf("%.3f", log10(16) / log10(3) + x * 1.0);
//	else
//		printf("%.3f", 23.0 / 7.0 * fabs(4.0 + x * x * x));
//
//	return 0;
//}

////7-95
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x < 100 || x > 999)
//		printf("Invalid Value.\n");
//	else
//	{
//		int a = x / 100;
//		int b = x / 10 % 10;
//		int c = x % 10;
//		if (a * a * a + b * b * b + c * c * c == x)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//
//	return 0;
//}

////7-96
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d", &x);
//	while (x > 0)
//	{
//		if (x % 2 == 1)
//			y += x;
//		scanf("%d", &x);
//	}
//	printf("%d", y);
//
//	return 0;
//}

////7-97
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	int x = 0, y = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d%d", &x, &y);
//		if (fabs(y - (x - 100) * 0.9 * 2.0) < (x - 100) * 0.9 * 2.0 * 0.1)
//			printf("You are wan mei!\n");
//		else if (y > (x - 100) * 0.9 * 2.0)
//			printf("You are tai pang le!\n");
//		else
//			printf("You are tai shou le!\n");
//	}
//
//	return 0;
//}