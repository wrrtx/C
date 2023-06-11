#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int a, b;
//	double r1 = 0, r2 = 0, r3 = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d/%d", &a, &b);
//	}
//
//	return 0;
//}

#include<stdio.h>
typedef long long ll;//这里给long long int 起个别名，要不然太长了，每次写都要重写一遍
int gy(ll x, ll y)
{
	int temp = (x % y == 0) ? y : gy(y, x % y);//三目运算符还可以很好的传出最大公约数
	return temp;
}
int main()
{
	ll a = 0, b = 0, fenzi = 0, fenmu = 1, maxgy = 0;
	int n = 0, i = 0;
	scanf("%d", &n);
	do
	{
		scanf("%lld/%lld", &a, &b);
		fenzi = fenzi * b;
		fenzi = fenzi + a * fenmu;
		fenmu = fenmu * b;
		maxgy = gy(fenzi, fenmu);//每一次运算后都进行一次化简，便与运算，控制数据的范围，防止超出数据类型范围
		fenzi /= maxgy;
		fenmu /= maxgy;
		i++;
	} while (i < n);
	if (fenzi % fenmu == 0)
		printf("%lld", fenzi / fenmu);
	else if (fenzi && (fenzi / fenmu == 0))
		printf("%lld/%lld", fenzi, fenmu);
	else
		printf("%lld %lld/%lld", fenzi / fenmu, fenzi % fenmu, fenmu);
	return 0;
}