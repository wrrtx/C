#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 函数的嵌套调用
////不能嵌套定义函数！！！！！只能嵌套调用
//void test3()
//{
//	printf("hehe!\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}

////程序2 函数的链式访问
//#include <string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	//链式访问1：
//	printf("%d\n", strlen("abc"));
//
//	//链式访问2：
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	printf("%s\n", strcpy(arr1, arr2));
//
//	//链式访问3：
//	printf("%d", printf("%d", printf("%d", 43)));	//printf函数返回的是打印在屏幕上字符的个数
//													//输出为4321
//	return 0;
//}

////程序3 函数的声明和定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下 - 告知，这样函数就可以放在下面了。如果函数放上面就不用声明。
//	//必须有函数名和返回类型，不过很少有这种定义方法
//	int Add(int, int);	
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//int Add(int x, int y)	//函数的定义
//{
//	return x + y;
//}

////程序4 实际应用（分工）
/////所以声明一般在头文件中，定义一般在对应的.c文件中
////实际中都是按照程序4这样写，而不是程序3这样写
//#include "add.h"
//#include "sub.h"		//函数声明一般在头文件中，相当于拷贝了头文件的内容
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//加法
//	int c = Add(a, b);
//	printf("%d\n", c);
//	//减法
//	int d = Sub(a, b);
//	printf("%d\n", d);
//
//	return 0;
//}

//程序5 保护自己的代码，隐藏代码
//导入静态库
#pragma comment(lib,"sub.lib")	//只有静态库，源代码依旧无法获得，但可以使用
#include "sub1.h"
int main()
{
	int a = 10;
	int b = 20;

	//减法
	int d = Sub(a, b);
	printf("%d\n", d);

	return 0;
}