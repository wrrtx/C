#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 字符指针
//int main()
//{
//	char ch = 'q';
//	char* pc = &ch;
//
//	char* ps = "hello bit";
//	//本质上是把"hello bit"这个字符串的首字符的地址存储在了ps中
//	printf("%c\n", *ps);//h
//	char arr[] = "hello bit";
//	//本质上是把"hello bit"这个字符串存在arr中
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//
//	*ps = 'w';
//	//此处改不了，因为*ps是常量字符串
//
//	return 0;
//}

////程序2 练习
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	//常量字符串
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//打印这个
//
//	//此处其实只有一个空间存了"hello bit."，str3和str4都指向该空间
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");//打印这个
//	else
//		printf("str3 and str4 are not same\n");
//
//	//验证
//	printf("%p\n", str3);
//	printf("%p\n", str4);
//	//地址相同
//
//	return 0;
//}

////程序3 指针数组
//int main()
//{
//	//指针数组
//	//数组 - 数组中存放的是指针(地址)
//	int* arr1[3];//存放整形指针的数组 
//
//	//int a = 10; 
//	//int b=20; 
//	//int c=30;
//	//int* arr[3] = { &a, &b, &c }; 
//	////此写法不好，没有应用场景，少见
//	//int i = 0;
//	//for (i = 0; i < 3; i++) 
//	//{
//	//	printf("%d ", *(arr[i]));
//	//}
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//			////也可以写成
//			//printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////程序4 数组指针定义 - 是指向数组的指针
////整型指针 - 是指向整型的指针
////字符指针 - 是指向字符的指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	//拿出数组的地址
//	int arr[10] = { 1,2,3,4,5 };
//							//arr - 数组名是首元素的地址 - arr[0]的地址
//	int(*parr)[10] = &arr;	//取出的是数组的地址
//							//parr就是一个数组指针 - 其中存放的是数组地址
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//
//	return 0;
//}

////程序5 数组指针名 &arr和arr区别
////回顾知识点
////数组名是数组百元索的地址，但是有2个例外：
////1.sizeof(数组名)- 数组名表示整个数组，计算的是整个数组大小，单位是字节
////2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);	
//	printf("%p\n", &arr);//内容一样是因为指向的地址相同
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;//代表的类型不同
//
//	printf("%p\n", p1);		//006FFBD8
//	printf("%p\n", p1 + 1);	//006FFBDC  相差4字节
//
//	printf("%p\n", p2);		//006FFBD8
//	printf("%p\n", p2 + 1);	//006FFC00  相差40字节
//	
//	return 0;
//}

////程序6 数组指针的使用1
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//简单，常用
//	int* p = arr;
//
//	int(*pa)[10] = &arr;//把数组arr的地址赋值给数组指针变量p,但是我们一般很少这样写代码
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//
//	return 0;
//}

////程序7 数组指针的使用2
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//void print2(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6 }, { 3,4,5,6,7 } };
//	//第一种写法
//	print1(arr, 3, 5);
//	//第二种写法
//	//数组名arr，表示首元素的地址
//	//而二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print2(arr, 3, 5);
//	return 0;
//}
//理解:
//int arr[5];//整型数组
//int* parr1[10];//整型指针的数组
//int(*parr2)[10];//数组指针，该指针能够指向一个数组，数组10个元素，每个元素的类型是int
//int(*parr[10])[5];	//parr3是一个存储数组指针的数组
//					//该数组能能够存放10个数组指针
//					//每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型

////程序8 数组参数、指针参数 - 一维数组传参
//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int* arr)//ok
//{}
//void test2(int* arr[20])//ok
//{}
//void test2(int** arr)//ok
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

////程序9 数组参数、指针参数 - 二维数组传参
//void test(int arr[3][5])//ok
//{}
//void test(int arr[][])//no，列不可以省略
//{}
//void test(int arr[][5])//ok
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//no
//{}
//void test(int* arr[5])//no
//{}
//void test(int(*arr)[5])//ok
//{}
//void test(int** arr)//no
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//这里传了第一行的地址
//}

////程序10 数组参数、指针参数 - 一级指针传参
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("*d ", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);
//
//	char ch = 'w';
//	char* pl = &ch;
//	test(&ch);
//	test(pl);
//
//	return 0;
//}

//程序10 数组参数、指针参数 - 二级指针传参
void test(int** p2)
{
	**p2 = 20;
}
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	test(ppa);
	test(&pa);//传一级指针地址也可以
	printf("%d\n", a);//打印20

	//传存放一级指针的数组也可以
	int* arr[10] = { 0 };
	test(arr);

	return 0;
}