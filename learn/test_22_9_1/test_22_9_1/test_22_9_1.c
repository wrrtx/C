#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 常见关键字
////      C语言提供的，不能自己创建，且变量名不能是关键字
//int main(void)
//{
//	//int char;   //char不可以做变量名
//	{
//		auto int a = 10;
//		//局部变量里都会有auto，做自动变量（自动创建，自动销毁），但auto可以省略掉。
//		//此外auto在新的C语言语法中也有其他用法，这里暂时不考虑
//	}
//
//	//extern是用来声明外部符号
//
//	register int num = 100; //register是建议num的值放在寄存器中，大量/频繁被使用的数据可以放在其中以提高效率
//
//	//signed 有符号的 10/-2
//	//unsigned 无符号的
//	//static 静态的
//	//union 联合体（共用体）
//	//void 无/空
//	//volatile 体现个人的c语言段位
//
//	//define 预处理指令，不是关键字
//	//include 预处理指令，不是关键字
//
//	return 0;//返回，与int呼应
//}

////程序2 关键字typedef：类型重定义/类型重定名
//typedef unsigned int u_int;
//int main(void)
//{
//	unsigned int num = 100;
//	u_int num2 = 100;		//此时u_int和unsigned int是一样的
//
//	return 0;
//}

////程序3 static：静态的
//// 用法：1.修饰局部变量，改变了局部变量的生命周期，本质上是改变了变量的存储类型，变成静态变量，与全局变量相当
////       2.修饰全局变量
////		 3.修饰函数
//////1.局部变量
////void test()
////{
////	static int a = 1;
////	a++;
////
////	printf("%d ", a);
////}				//没加static时出局部后自动销毁，加上static后a并没有自动销毁，而是保留
////int main()
////{
////	int i = 0;
////	while (i < 10)
////	{
////		test();
////		i++;
////	}
////
////	return 0;
////}
//////2.全局变量
//////static修饰之后使这个全局变量只能在自己所在的源文件里使用，其他源文件不能使用！
//////全局变量在其他源文件内部可以被使用，是因为全局变量具有外部链接属性，但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了!
////extern int g_val;	//声明
////int main()
////{
////	printf("%d\n", g_val);
////
////	return 0;
////}
////3.修饰函数
////static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用
////本质上 : static是将函数的外部链接属性变成了内部链接属性!(和static修饰全局变量一样!)
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = Add(a, b);
//	
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

////程序4 #define是一个预处理指令，定义常量和宏
//////1.定义符号/常量
////#define MAX 1000
////int main()
////{
////	printf("MAX = %d\n", MAX);
////	return 0;
////}
////2.定义宏
//#define ADD(X,Y) ((X)+(Y))	/*X+Y*/			//加上括号使其变成一个整体的表达式
//int main()
//{
//	//宏是完成替换的
//	printf("%d\n", 4 * ADD(2, 3));//#define ADD(X,Y) X+Y如果是这样定义，就会变成4*2+3，输出11
//	
//	//printf("%d\n", 4*ADD(2, 3));//输出20
//
//	return 0;
//}

// //程序5 指针 相当于地址
//int main()
//{
//	int a = 10;//a在内存中分配4个字节空间
//	printf("%p\n", &a);//打印地址
//	int* pa = &a;//pa是用来存放地址的，在C语言中pa是指针变量
//				 //* 说明pa是指针变量，int 说明pa执行的对象是int类型
//	*pa = 20;	 //此处* 是解引用操作符，*pa就是通过pa里边的地址找到a
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

////程序6 指针的大小
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//x64输出都是8，x86输出都是4，这是因为指针是用来存放地址，地址大小决定指针大小
//	//32位  32bit   4byte
//	//64位  64bit   8byte
//
//	return 0;
//}

//程序7 结构体:使C语言有能力描述复杂类型，创建新的类型出来
struct Stu		//学生的结构体
{
	char name[20];
	int age;
	double score;	//双精度浮点型打印用%lf
};
struct Book		//书的结构体
{
	char name[20];
	float price;
	char  id[30];
};
int main()
{
	struct Stu a = {"张三", 20, 98.5};//结构体初始化
	printf("1: %s %d %lf\n", a.name, a.age, a.score);//结构体变量.成员变量
	
	struct Stu * pa = &a;
	printf("2: %s %d %lf\n", (*pa).name, (*pa).age, (*pa).score);//较啰嗦

	printf("3: %s %d %lf\n", pa->name, pa->age, pa->score);//较直观，结构体指针->成员变量名

	return 0;
}