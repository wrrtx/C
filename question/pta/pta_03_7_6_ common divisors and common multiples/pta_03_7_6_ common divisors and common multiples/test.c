#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int a(int m, int n)
{
	if (m % n == 0)//判断
		return n;	//返回最小公约数
	else
		a(n, m % n);//求出最小的公约数
}
int main()
{
	int M, N;
	scanf("%d%d", &M, &N);
	int i = 0;
	//if (N > M)
	//{
	//	i = M;
	//	M = N;
	//	N = i;
	//}
	int min = a(M, N);//辗转相除法，放到自定义函数中执行
	int max = N * M / min;//求最大公倍数
	printf("%d %d", min, max);//打印输出

	return 0;
}