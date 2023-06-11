#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 枚举
////优点：
////1. 增加代码的可读性和可维护性
////2. 和#define定义的标识符比较枚举有类型检查，更加严谨。cpp更加严谨
////3. 防止了命名污染（封装）
////4. 便于调试
////5. 使用方便，一次可以定义多个常量
//
////#define Mon 1//没有类型
////还有，工作时要完成替换（预处理）
//
//enum Day//星期
//{
//	Mon = 1,//0 默认从0开始,赋值可以改变开始的数字，是赋初始值
//	Tues,//1
//	Wed,//2
//	Thu,//3
//	Fri,
//	Sat,
//	Sun
//};//会翻译成二进制
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Day d = Fri;
//	printf("%d\n", Mon);//0 -> 1
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thu);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);
//
//	return 0;
//}

////2 联合（共用体）
//union Un
//{
//	int a;//4
//	char c;//1
//};
//
////共用
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));//一致
//
//	return 0;
//}

////3 判断当前计算机大小端
////1
////int check_sys()
////{
////	int a = 1;
////	return *(char*)&a;
////}
//
////2
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1是小端，返回0是大端
//	return u.c;
//}
//
//int main()
//{
//	//01 00 00 00   小端
//	//00 00 00 01   大端
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

//4 联合体大小计算
//1.联合的大小至少是最大成员的大小。
//2.当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
union Un1
{
	char c[5];//1  5
	int i;//4   //也存在对齐
};
union Un2
{
	short c[7];//2   14
	int i;//4
};

int main()
{
	//下面输出的结果是什么？
	printf("%d\n", sizeof(union Un1));//8
	printf("%d\n", sizeof(union Un2));//16

	return 0;
}