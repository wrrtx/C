#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a = 0;
	scanf("%f", &a);	//输入浮点数
	int max = ceil(a);	//用函数返回不小于a的数
	int min = max - 1;	//不大于a的数
	if (max > a)		//不小于a的数的情况
	{
		printf("%d\n", min);
		printf("%d", max);
	}
	else
	{
		printf("%d\n", max);	//这里就是不懂的地方，为什么相等的时候输出也是相等？
		printf("%d", max);		//样例：输入a的数：4.00；输出要4（换行）4才能通过
	}

	return 0;
}
//#include<stdio.h>
//int main() 
//{
//    float a;+
//    scanf("%f", &a);
//    printf("%d\n%d", (int)(a), (int)ceil(a));
//}