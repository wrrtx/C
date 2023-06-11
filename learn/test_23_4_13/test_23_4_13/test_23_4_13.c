#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 位段 -- 位是比特位 -- 节省空间的左右 -- 问题有点多
////位段的声明和结构是类似的，有两个不同:
////1.位段的成员必须是int、unsigned int 或signed int ，也可以是char等整型类型
////2.位段的成员名后边有一个冒号和一个数字
//// 
////空间分配:
////1. 位段的成员可以是int unsigned int signed int 或者是char （属于整形家族）类型
////2. 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
////3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
//struct A
//{
//	//4byte - 32bite
//	int _a : 2;//此时的数字代表分配的比特位的空间大小
//	int _b : 5;
//	int _c : 10;
//	//15
//	//4byte - 32bit
//	int _d : 30;
//};
////47bit
////6byte - 48bit
////8byte - 64bit
////一定程度上节省空间
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//
//	return 0;
//}

//2 位段空间分配
struct S
{
	//1byte
	char a : 3;
	char b : 4;
	//1byte
	char c : 5;
	//1byte
	char d : 4;//后面的数字不能超过类型大小
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));//3 前面空间不够的直接浪费并重新开辟空间
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;//如果内存大小不够，数据会发生截断

	return 0;
}