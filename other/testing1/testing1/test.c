#define _CRT_SECURE_NO_WARNINGS 1

////1取余
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a % b;
//	printf("%d", c);
//
//	return 0;
//}

////2个位
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = a % 10;
//	printf("%d", c);
//
//	return 0;
//}

////3十位
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = (a / 10) % 10;
//	printf("%d", c);
//
//	return 0;
//}

////4牛妹数
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 50 && (n % 2) == 0)
//		printf("yes");
//	else
//		printf("no");
//
//	return 0;
//}

////5平均值
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	double d = (a + b + c) / 3.000000;
//	printf("%.6f", d);
//
//	return 0;
//}

////6广场维修
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int a = 0;
//	scanf("%d%d%d", &n, &m, &a);
//	int x = n / a;
//	int y = m / a;
//	if (n % a != 0)
//	{
//		if (m % a != 0)
//		{
//			x++;
//			y++;
//		}
//		else
//		{
//			x++;
//		}
//	}
//	else
//	{
//		if (m % a != 0)
//		{
//			y++;
//		}
//	}
//	printf("%d", x * y);
//
//	return 0;
//}

////7分钟计算
//#include <stdio.h>
//int main()
//{
//	int a1 = 0;
//	int b1 = 0;
//	int a2 = 0;
//	int b2 = 0;
//	scanf("%d%d", &a1, &b1);
//	scanf("%d%d", &a2, &b2);
//	int a = a1 * 60 + b1;
//	int b = a2 * 60 + b2;
//	printf("%d", b - a);
//
//	return 0;
//}

//8学圆
//#include <stdio.h>
//int main()
//{
//	double pi = 3.14159;
//	float a = 0;
//	scanf("%f", &a);
//	double c = 2 * a * pi;
//	double s = a * a * pi;
//	printf("%.6f\n", c);
//	printf("%.6f", s);
//
//	return 0;
//}

//9数字反转
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int b = n / 100;
//	int s = (n / 10) % 10;
//	int g = n % 10;
//	printf("%d%d%d", g, s, b);
//
//	return 0;
//}

////10温度转换
//#include <stdio.h>
//int main()
//{
//	float f = 0;
//	scanf("%f", &f);
//	double c = 5.0 / 9.0 * (f - 32);
//	printf("%.3f", c);
//
//	return 0;
//}

////11加法模拟器
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d+%d=%d\n", a, b, a + b);
//	printf("%7d\n", a);
//	printf("+%6d\n", b);
//	printf("-------\n");
//	printf("%7d", a + b);
//
//	return 0;
//}

////12判断奇偶
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//		printf("even");
//	else
//		printf("odd");
//
//	return 0;
//}

////13判断闰年
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		printf("yes");
//	else
//		printf("no");
//
//	return 0;
//}

////14吃瓜群众
//#include <stdio.h>
//int main()
//{
//	int weight = 0;
//	scanf("%d", &weight);
//	if (weight > 2 && weight % 2 == 0)
//		printf("YES, you can divide the watermelon into two even parts.");
//	else
//		printf("NO, you can't divide the watermelon into two even parts.");
//
//	return 0;
//}

////15最大最小值
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//		{
//			printf("The maximum number is : %d\n", a);
//			printf("The minimum number is : %d", c);
//		}
//		else if (a > c)
//		{
//			printf("The maximum number is : %d\n", a);
//			printf("The minimum number is : %d", b);
//		}
//		else
//		{
//			printf("The maximum number is : %d\n", c);
//			printf("The minimum number is : %d", b);
//		}
//	}
//	else//(b>a)
//	{
//		if (a > c)
//		{
//			printf("The maximum number is : %d\n", b);
//			printf("The minimum number is : %d", c);
//		}
//		else if (b > c)
//		{
//			printf("The maximum number is : %d\n", b);
//			printf("The minimum number is : %d", a);
//		}
//		else
//		{
//			printf("The maximum number is : %d\n", c);
//			printf("The minimum number is : %d", a);
//		}
//	}
//
//	return 0;
//}

////16幸运数字7
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i <= n; i++)
//	{
//		if (i % 7 == 0)
//		{
//			ret += i;
//		}
//	}
//	printf("%d", ret);
//
//	return 0;
//}

////17多组输出
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 0;
//	int a, b;
//	for (i = 1, ret = 0; i <= n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		ret = a + b;
//		printf("%d\n", ret);
//	}
//	printf("%d", ret);
//
//	return 0;
//}

////18 3和5
//////1
////#include <stdio.h>
////int main() {
////	int n, i = 1, x = 0, flag = 0;
////	scanf("%d", &n);
////	for (; i <= n; i++) {
////		if (i % 3 == 0) {
////			x = i;
////			while (x) {
////				if (x % 10 == 5) {
////					flag = 1;
////					break;
////				}
////				x /= 10;
////			}
////		}
////		if (flag == 1) {
////			printf("%d\n", i);
////		}
////		flag = 0;
////	}
////}
////2
//# include <stdio.h>
//int main(void) 
//{
//    int i, n;
//    int t;
//    int flag;
//    scanf("%d", &n);
//    for (i = 0; i <= n; i++)
//    {
//        flag = 0;
//        t = i;
//        while (t > 0) 
//        {//判断是否含有5
//            if (t % 10 == 5) 
//            {
//                flag = 1;//含有5
//                break;
//            }
//            else
//                t = t / 10;
//        }
//        if (i % 3 == 0 && flag) 
//        {//能被3整除且含有5
//            printf("%d\n", i);
//        }
//    }
//
//    return 0;
//}

////19 3和5和7
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
//			printf("%d\n", i);
//	}
//	return 0;
//}

////20四位数
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int a, b, c, d;
//	for (i = 1000; i <= n; i++)
//	{
//		if (i < n)
//		{
//			a = i / 1000;
//			b = i / 100 % 10;
//			c = a * 10 + b;
//			d = i % 100;
//			if ((c + d) * (c + d) == i)
//				printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}

////21数位之和
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int t = 0;
//	while (n)
//	{
//		if (n < 10)
//		{
//			t = t + n;
//			break;
//		}
//		else
//		{
//			t = n % 10 + t;
//			n = n / 10;
//		}
//	}
//	printf("%d", t);
//
//	return 0;
//}

//22、23、24题不会

////25阶乘计算
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	int x = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		x += ret;
//	}
//	printf("%d", x);
//
//	return 0;
//}

////26乘法表
//#include <stdio.h>
//int main()
//{
//	int x = 1;
//	int y = 1;
//	int z = 0;
//	int i = 0;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			z = x * y;
//			if (y != x && z <= 9)
//			{
//				printf("%d*%d= %d ", y, x, z);
//			}
//			else if(y != x && z > 9)
//			{
//				printf("%d*%d=%d ", y, x, z);
//			}
//			else if(y == x && z <= 9)
//			{
//				printf("%d*%d= %d\n", y, x, z);
//			}
//			else if (y == x && z > 9)
//			{
//				printf("%d*%d=%d\n", y, x, z);
//			}
//		}
//	}
//
//	return 0;
//}