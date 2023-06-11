#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//导入
//程序的翻译环境和执行环境：
//在ANSI C的任何一种实现中，存在两个不同的环境。
//第1种是翻译环境，在这个环境中源代码被转换为可执行的机器指令。
//第2种是执行环境，它用于实际执行代码。

////1 翻译环境
////源文件 -> 编译器 -> 目标文件(/链接库) -> 链接器 -> 可执行程序
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//test_23_5_19.obj 生成目标文件
//	//Linux gcc -- xxx.o
//
//	return 0;
//}

////2 编译过程
////test.c -> 编译 -> 链接 -> test.exe
////编译：
////1__预处理（文本操作）：
////	1.头文件的包含 
////	2.define定义符号的替换，并且删除定义符号 
////	3.注释删除
////2__编译（把代码转换成汇编代码）：
////	1.进行语法分析、词法分析、符号汇总、语义分析
////	2.符号汇总：把全局符号汇总出来（Add、g_val、main）
////3__汇编：
////	1.把汇编代码转换成二进制指令
////	2.形成符号表（给符号关联一个地址）(Add、Add、main)
////链接：
////1__合并段表：相同的文件进行合并
////2__符号表的合并和重定位：筛选地址合并成一个表，声明的地址会被筛掉
////
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//《程序员的自我修养》

//3 运行环境
//程序执行的过程：
//1__程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，程序
//的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成。
//2__程序的执行便开始。接着便调用main函数。
//3__开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回
//地址。程序同时也可以使用静态（static）内存，存储于静态内存中的变量在程序的整个执行过程
//一直保留他们的值。
//4__终止程序。正常终止main函数；也有可能是意外终止。

////4 预定义符号
////__FILE__   进行编译的源文件
////__LINE__   文件当前的行号
////__DATE__   文件被编译的日期
////__TIME__   文件被编译的时间
////__STDC__   如果编译器遵循ANSI C，其值为1，否则未定义
//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return EXIT_FAILURE;//1
//		//EXIT_SUCCESS -- 0
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "file:%s line=%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}//记录日志
//	fclose(pf);
//	pf = NULL;
//
//	//printf("%d\n", __STDC__);//报错，没有这个符号
//	//但gcc是严格遵守标准的，所以以gcc编译器为准
//
//	return 0;
//}

////5 #define 定义标识符
//#define MAX 1000//不能加分号，否则替换为 1000;
//#define STR "hello bit"
//#define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\ttime:%s\n" ,\
//							__FILE__,__LINE__ , \
//							__DATE__,__TIME__ )
//							//续行符，可以识别换行，但续行符后面不能有任何字符或者其他
//int main()
//{
//	int m = MAX;
//	printf("%d\n", MAX);//预编译会把MAX全部替换为1000
//	printf("%s\n", STR);//如上同理
//
//	return 0;
//}

////6 #define 定义宏
////#define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏或定义宏
////1. 宏参数和#define 定义中可以出现其他#define定义的符号。但是对于宏，不能出现递归。
////2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。
//#define SQUARE(X) ((X)*(X))	//名字和括号要靠在一起，写宏的时候尽量都给括号
//#define DOUBLE(Y) ((Y)+(Y))	//注意整体需不需要，一定不要省括号
//int main()
//{
//	int r = SQUARE(5);
//	int r1 = SQUARE(5 + 1);//如果宏没括号，等于 5 + 1 * 5 + 1
//	printf("%d\n", r);
//	printf("%d\n", r1);
//
//	int r2 = 10 * DOUBLE(3 * 2);//如果少最外面的括号，就等于10*(3*2)+(3*2)=66
//	printf("%d\n", r2);
//
//	return 0;
//}

////7 #
//#define PRINT(N) printf("the value of "#N" is %d\n", N)//#N 相当于 "N",作为一个字符串
//#define PRINT1(N, FORMAT) printf("the value of "#N" is "FORMAT"\n", N)
//
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	//printf("the value of b is %d\n", b);//用宏封装
//	PRINT(a);
//	PRINT(b);
//
//	//都打印
//	float c = 3.14f;
//	PRINT1(a, "%d");
//	PRINT1(c, "%f");
//
//	return 0;
//}

////8 ##
//#define CAT(Class, Num) Class##Num//将两个符号合并，允许宏定义从分离的文本片段创建标识符
//
//int main()
//{
//	int Class106 = 100;
//	printf("%d\n", CAT(Class, 106));
//	printf("%d\n", Class106);//上面句子相当于此句子
//
//	return 0;
//}

////9 带副作用的宏参数
//#define MAX(a, b) ((a)>(b)?(a):(b))
//
//int main()
//{
//	//int a = 1;
//	//int b = a + 1;//a的值不变
//	//b = ++a;//a的值也发生改变
//
//	int a = 5, b = 4;
//	int m = MAX(a++, b++);
//	//		   ((a++)>(b++)?(a++):(b++))
//	//	6		 5   > 6   ? 6->7
//	printf("m=%d\n", m);//6
//	printf("a=%d b=%d\n", a, b);//7 5
//
//	return 0;
//}

////10 宏和函数
////习惯命名约定：把宏名全部大写,函数名不要全部大写
//#define MAX(x, y) ((x)>(y)?(x):(y))
//#define MALLOC(num, type) (type*)malloc((num)*sizeof(type))
//
//int Max(int x, int y)
//{
//	return (x) > (y) ? (x) : (y);
//}
//
//int main()
//{
//	int m = MAX(2, 3);
//	//->m = (x) > (y) ? (x) : (y);
//	int m1 = Max(2, 3);
//	//小型代码且不容易出错的可以用宏
//	//大型且复杂，而且容易出错的建议用函数
//	
//	//malloc(40);要计算类型
//	int* p = MALLOC(10, int);
//
//	return 0;
//}

////11 #undef
//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	//printf("%d\n", M);//报错
//
//	return 0;
//}

////12 条件编译
//#include <stdio.h>
////#define __DEBUG__//注释掉之后for中的printf不会被执行
//#define M 3
////#define symbol
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d\n", arr[i]);//为了观察数组是否赋值成功。
//#endif //__DEBUG__		//告诉读者和那个是一对
//	}
//
////1.常量表达式
//#if 0
//	printf("hehe\n");
//#endif
//
////2.多个分支的条件编译
//#if M<5
//	printf("M<5\n");
//#elif M==5
//	printf("M==5\n");
//#else
//	printf("M>5\n");
//#endif
//
////3.判断是否被定义
//#if !defined(symbol) //4==5等条件
////!是一个反面
////也可以写成 #ifdef symbol,反面是#ifndef symbol
//	printf("symbol\n");
//#endif
//
////4.嵌套指令
//#if defined(OS_UNIX)
//	#ifdef OPTION1
//		unix_version_option1();
//	#endif
//	#ifdef OPTION2
//		unix_version_option2();
//	#endif
//#elif defined(OS_MSDOS)
//	#ifdef OPTION2
//		msdos_version_option2();
//	#endif
//#endif
//
//
//	return 0;
//}

////13 文件包含
//#include "test.h"
//#include "test.h"
//#include "test.h"
//#include "test.h"
////1
////内容是
///*#ifndef __TEST_H__
//#define __TEST_H__
//int Add(int x, int y)
//{
//	return x + y;
//}
//#endif*/
////防止头文件被多次重复的包含
//
////2
///*#pragma once//古老的编译器不可以用
//int Add(int x, int y)
//{
//	return x + y;
//}*/
//
////3嵌套文件包含
////防止重复包含，就要在每个头文件中写下列语句
///*#ifndef __TEST_H__
//#define __TEST_H__
////头文件的内容
//#endif	//__TEST_H__	*/
//
//// <> ""
////区别：查找的策略不同
////	<>直接去库目录下查找
////	""先去代码所在路径下查找，如果找不到，再去库目录下查找  整体效率慢点
//
//int main()
//{
//	int m = Add(3, 4);
//	printf("%d\n", m);
//
//	return 0;
//}
////《高质量C/C++编程指南》
////《C语言深度解剖》

//14 写一个宏计算结构体中某变量相对首地址的偏移，并说明
//offsetof
//#include <stddef.h>
#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)
struct S
{
	char c1;
	int i;
	char c2;
};
int main()
{
	struct S s = { 0 };
	//printf("%d\n", offsetof(struct S, c1));
	//printf("%d\n", offsetof(struct S, i));
	//printf("%d\n", offsetof(struct S, c2));

	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));

	return 0;
}