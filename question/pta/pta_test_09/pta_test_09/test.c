#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//考试周
//int main()
//{
//	int A, B;
//	float c = 0;
//	scanf("%d%d", &A, &B);
//	c = A * 1.0 / B;
//	printf("%d/%.1f=%d", A, c, B);
//
//	return 0;
//}

//心理阴影面积
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int z = 5000 - 100 * y * 0.5 - 100 * (100 - x) * 0.5;
//	printf("%d", z);
//
//	return 0;
//}

//3人分糖果
//int main()
//{
//	int a = 8, b = 9, c = 10;
//	int r1 = a / 3;
//	int r2 = (b + r1) / 3;
//	int r3 = (r1 + r2 + c) / 3;
//	r1 = r1 + r2 + r3;
//	r2 = r2 + r3;
//	printf("%d %d %d", r1, r2, r3);
//
//	return 0;
//}

//整数算术运算
//int main()
//{
//	int A, B;
//	scanf("%d%d", &A, &B);
//	int r1 = A + B;
//	int r2 = A - B;
//	int r3 = A * B;
//	int r4 = A / B;
//	int r5 = A % B;
//	printf("%d + %d = %d\n", A, B, r1);
//	printf("%d - %d = %d\n", A, B, r2);
//	printf("%d * %d = %d\n", A, B, r3); 
//	printf("%d / %d = %d\n", A, B, r4);
//	printf("%d %c %d = %d\n", A, '%', B, r5);
//	return 0;
//}

//猫是液体
//int main()
//{
//	int x, y, z;
//	scanf("%d%d%d", &x, &y, &z);
//	int a = x * y * z;
//	printf("%d", a);
//
//	return 0;
//}

//两小时学完C语言
//int main()
//{
//	int N, K, M;
//	scanf("%d%d%d", &N, &K, &M);
//	int a = 0;
//	if (N >= K * M)
//	{
//		a = N - (K * M);
//	}
//	printf("%d",a);
//
//	return 0;
//}

//装酒,假酒
//int main()
//{
//	double p, t;
//	scanf("%lf%lf", &p, &t);
//	double n = t * 1.0 / p;
//	int a = n;
//	double b = n - a;
//	if (b == 0.0)
//		printf("%d", a);
//	else
//		printf("%d", a+1);
//	return 0;
//}

//字符变变变
int main()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	int c = a * 10 + b;
	printf("%d", c);
	return 0;
}