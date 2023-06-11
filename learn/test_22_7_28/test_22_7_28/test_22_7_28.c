#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//程序1 作用域
//局部变量的作用域：变量所在的局部范围
//全局变量的作用域：整个工程
//int g_val = 2022;	//全局变量
//int main(void)
//{
//	printf("Hello,work!\n");
//	printf("1:%d\n", g_val);	//全局第一次
//	{
//		printf("2:%d\n", g_val);//全局第二次
//
//		int a = 10;
//		printf("a = %d\n", a);	//局部变量
//
//	}6
//
//	printf("3:%d\n", g_val);	//全局第三次
//
//	return 0;
//}

//程序2 跨文件的全局变量
//此处需要声明
//extern int g_val;
//int main(void)
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//程序3 生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量的生命周期：进入所在局部范围到离开所在局部范围
//全局变量的生命周期：整个工程的开始到结束
int main(void)					//工程结束
{
	{							//进入
		int a = 10;
		printf("a = %d\n", a);
	}							//结束

	return 0;
}								//工程结束