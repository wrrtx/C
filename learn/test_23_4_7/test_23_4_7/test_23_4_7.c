#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 结构体声明
////数组：一组相同类型元素的集合
////结构体：一些值的集合，类型可以不同
////
////完全声明
//struct book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b3, b4, b5;//b3,b4,b5是全局变量
//
////不完全声明(匿名结构体类型)
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double b;
//}s;//只能用一次
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double b;
//}a[20], * ps;
//
//int main()
//{
//	struct book b1, b2;//b1,b2是局部变量
//	ps = &s;//可以过，但这是err
//
//	return 0;
//}

////2 结构体的自引用
//////err
////struct Node
////{
////	int data;//4
////	struct Node next;
////};
////int main()
////{
////	sizeof(struct Node);//算不出大小
////
////	return 0;
////}
//
////链表的表达方式
////1
//typedef struct Node
//{
//	int data;
//	struct Node* next;//可以包含相同结构体的指针类型，但不能包含相同的结构体类型
//}*linklist;
////2
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;
//
//int main()
//{
//	int ret = sizeof(struct Node);
//	printf("%d\n", ret);
//
//	return 0;
//}

////3 结构体变量的定义和初始化
//struct Point
//{
//	int x;
//	int y;
//}p1 = { 2,3 };//初始化
//struct score//要放在上面
//{
//	int n;
//	char ch;
//};
//struct stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct stu s1 = { "zhangsan",20,{100,'q'} };
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
//
//	return 0;
//}

////4 结构体内存对齐->计算结构体的大小
////1. 第一个成员在与结构体变量偏移量为0的地址处。
////2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
////	对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
////	VS中默认的值为8,只有VS有默认对齐数
////3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
////4. 如果嵌套了结构体的情况，嵌套的结构体对齐到该结构体自己的最大对齐数的整数倍处，结构体的
////整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
//#include <stddef.h>
//struct s1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c1;
//	struct s3 p3;
//	double d;
//};
//
//int main()
//{
//	/*struct s1 p1;
//	struct s2 p2;*/
//
//	printf("%d\n", sizeof(struct s1));//12
//	printf("%d\n", sizeof(struct s2));//8
//	printf("------------------------------\n");
//
//	printf("%d\n", offsetof(struct s1, c1));
//	printf("%d\n", offsetof(struct s1, i));
//	printf("%d\n", offsetof(struct s1, c2));
//	printf("------------------------------\n");
//
//	printf("%d\n", offsetof(struct s2, c1));
//	printf("%d\n", offsetof(struct s2, c2));
//	printf("%d\n", offsetof(struct s2, i));
//	printf("------------------------------\n");
//
//	printf("%d\n", sizeof(struct s3));//16
//	printf("%d\n", sizeof(struct s4));//32
//
//	return 0;
//}

////5 修改编译器默认对齐数
////#pragma once//头文件中使用，功能是：防止头文件被多次引用
//#pragma pack(4)//把默认对齐数改为4
//struct s
//{
//	int i;
//	double d;
//};
//#pragma pack()//把默认对齐数恢复成8
//
//#pragma pack(1)
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct s));//16 -> 12
//	printf("%d\n", sizeof(struct s1));//6 不对齐
//
//	return 0;
//}

//6 结构体传参
struct S
{
	int data[1000];
	int num;
};
//1
void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ss.data[i]);
	}
	printf("%d\n", ss.num);
}
//2
void print2(const struct S* p)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", p->data[i]);
	}
	printf("%d\n", p->num);
}

int main()
{
	struct S s = { {1,2,3},100 };
	print1(s);	//传值调用 -- 时间空间大(会压栈)
	print2(&s);	//传址调用 -- 时间空间小(首选)

	return 0;
}