#define _CRT_SECURE_NO_WARNINGS 1
//可以使用scanf，虽然报告不安全，但是标准c提供。scanf_s只可以在VS运行编译，其他平台不可，且使用方法复杂。
#include <stdio.h>

//程序1  字符类型了解
//int main(void)
//{
//	char ch = 'a';	//字符类型
//	int age = 20;	//整型
//	short num = 10;	//短整型
//	//long
//	//long long
//
//	float weight = 55.5;	//单精度浮点型
//	double d = 1.55;	//双精度浮点型
//
//	printf("Hello,work.\n");
//	printf("%d\n", sizeof(char));	    //1
//	printf("%d\n", sizeof(short));		//2
//	printf("%d\n", sizeof(int));		//4
//	printf("%d\n", sizeof(long));		//4    int小于等于long
//	printf("%d\n", sizeof(long long));	//8
//	printf("%d\n", sizeof(float));		//4
//	printf("%d\n", sizeof(double));		//8
//	
//	// sizeof单位是字节byte
//	// 计算机单位：
//	// bit - 比特位
//	// byte - 字节 = 8bit
//	// kb = 1024byte
//	// mb = 1024 kb
//	// gb = 1024 mb
//	// tb = 1024gb
//	// pb = 1024tb
//	
//
//	return 0;
//}

//程序2  如何用变量表示
//int main(void)
//{
//	int age = 19;	//创建一个变量（推荐此表示方法）
//	double weight = 60.2;
//
//	age = age + 1;
//	weight = weight - 10;
//
//	printf("%d\n", age);		//%d - 整型
//	printf("%f\n", weight);		//%f - float
//								//%if - double
//	
//	return 0;
//}

//程序3  常量和变量分类
//常量 - 不能改变的量
//变量 - 能被改变的量：局部变量{}此括号内定义
//					   全局变量{}此括号外定义
//
//int a = 100;	//全局变量
//
//int main(void)
//{
//	int a = 10;	//局部变量
//	
//	printf("%d\n", a);
//	//当局部变量和全局变量冲突时，局部优先。同时不建议把全局变量和局部变量名字写成一样。
//
//	return 0;
//}

//程序4  变量的使用
//int main(void)
//{
//	//求2个整数的和
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	
//	scanf("%d %d", &a, &b);		//scanf才是标准c提供的
//	sum = a + b;
//	
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//程序5 找最大数
//int main(void)
//{
//	//数组
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找最大值
//	int max = arr[0];	//假设数组第一个元素是最大值，则拿剩下元素和max比较，如果找到则更新max
//
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//输出
//	printf("max = %d\n", max);
//
//	return 0;
//}

//程序5 复述
//int main(void)
//{
//	//数组
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找最大值
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//输出
//	printf("max = %d", max);
//
//	return 0;
//}

//程序6 十个数求平均值
int main(void)
{
	int arr[10] = { 0 };
	int i = 0;	//输入
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//求和
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	//求平均值
	int avg = sum / 10;
	//输出
	printf("avg = %d", avg);

	return 0;
}
