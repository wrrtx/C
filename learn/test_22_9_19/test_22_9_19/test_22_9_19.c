#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 函数也叫子程序，库函数
////利用工具www.cplusplus.com学习库函数strcpy - 复制,库函数memset - 内存设置
//#include <string.h>	//strcpy的库函数
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	memset(arr2, 'x', 5);
//	printf("%s\n", arr2);
//
//	return 0;
//}

////程序2 自定义函数，例子1：找出两个整数中的最大值 - 设计自定义函数get_max
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//返回z - 返回较大值
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用，此处是调用
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//程序3 自定义函数，例子2：写一个函数可以交换两个整形变量的内容
//改变主程序时要用指针，不改变时则不用
//int swap(int x, int y)
void swap(int* pa, int* pb)		//此处为函数的定义，括号中是形式参数-形参，未调用时什么都不是，调用完后就销毁，和局部变量一样
{
	//int z = 0;		//此时地址发生了变化，参考指针的办法修改
	//z = x;			//实参传给形参时，形参是实参的一份临时拷贝，改变形参不能改变实参
	//x = y;
	//y = z;	
	//return x;
	//return y;

	int z = 0;			//此处形参能找到主函数的a和b，才能改变
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("打印前：a = %d , b = %d\n", a, b);

	//函数的调用：（括号中叫实际参数-实参，它可以是常量、变量、表达式、函数等，但必须有确定的值）
	//swap(a, b);
	swap(&a, &b);

	printf("打印后：a = %d , b = %d\n", a, b);

	////指针
	//int* pa = &a;		
	//*pa = 20;			//pa是一个指针变量
	//printf("%d\n", a);

	return 0;
}