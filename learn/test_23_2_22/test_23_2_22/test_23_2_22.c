#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10; 
//	int* pa = &a;
//	char ch = 'w'; 
//	char* pc = &ch;
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//	// 
//	//函数指针 - 存放函数地址的指针
//	//&函数名 - 取到的就是函数的地址
//	//
//	//pf就是一个函数指针变量
//	int (*pf)(int, int) = &Add;
//	
//	printf("sp\n", &Add);
//	printf("sp\n", Add);//意义一样
//
//	return 0;
//}

////2 练习 - 模仿上面写法
//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//
//	return 0;
//}

////3 调用函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	//或者
//	int (*pf)(int, int) = Add;//Add == pf
//
//	int ret = (*pf)(3, 5);
//	int ret1 = Add(3, 5);//最初的写法
//	int ret2 = pf(3, 5);//结果也是8
//	//这说明：*在括号里只是一个摆设，方便理解而已
//
//	//int ret3 = *pf(3, 5);//这种写法是错误的 err
//
//	printf("%d\n", ret);
//
//	return 0;
//}

////4 阅读几个代码
//int main()
//{
//	//代码1
//	//调用0地址处的函数，无参，返回类型为void
//	(*(void (*)())0)();//把0强制类型转换成函数指针(void (*)())，再用(*)使用，
//					   //因为没东西，所以最右边的括号没有内容
//
//	//代码2
//	//signal是一个函数名，int、void(*)(int)分别是signal的两个参数类型
//	//该函数指针指向一个参数为int，返回类型是void的函数
//	//signal返回的是一个函数指针类型void (*)(int)
//	//signal是一个函数声明
//	void (*signal(int, void(*)(int)))(int);
//
//	//typedef - 对类型进行重定义
//	typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
//	//typedef unsigned int uint;//类比，unsigned int == uint
//	pfun_t signal(int, pfun_t);//这段代码等价于代码2
//
//	return 0;
//}

////5 函数指针数组
////函数指针数组 - 存放函数指针的数组
////整型指针 int*   
////整型指针数组 int* arr[5];
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//
//{
//	int(*pf1)(int，int) = Add;
//	int(*pf2)(int，int) = Sub;
//	int (*pfarr[2])(int, int) = { Add,Sub };//pfarr就是函数指针数组
//
//	return 0;
//}

////6 运用函数指针数组
////计算器 - 计算整型变量的加减乘除
////
//void menu()
//{
//	printf("*************************\n");
//	printf("****  1:add   2:sub  ****\n");
//	printf("****  3:mul   4:div  ****\n");
//	printf("****      0.exit     ****\n");
//	printf("*************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int x = 0, y = 0;
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		//使用函数指针数组
//		if (input >= 1 && input <= 4)
//		{
//			//pfarr就是函数指针数组
//			//这种写法就是 转移表 -- 《C和指针》
//			int (*pfarr[5])(int, int) = { NULL,add,sub,mul,div };
//			printf("输入2个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("已退出\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//
//		//一般思路，但功能要求多时会太冗杂
//		/*switch (input)
//		{
//		case 1:
//			printf("输入2个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入2个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入2个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入2个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}

////7 指向函数指针数组的指针
////函数指针的数组 - 数组
////取出函数指针数组的地址
//// 
////整形数组 
//int arr[5];
//int(*p1)[5] = &arr;
////
////整型指针的数组
//int* arr[5];
//int* (*p2)[5] = &arr;
////p2是指向【整数指针数组】的指针
//
////函数指针数组 -- &函数指针数组
//int(*p)(int, int);//函数指针
//int(*p2[4])(int, int);//函数指针的数组
//int(*(*p3)[4])(intint) = &p2;//取出的是函数指针数组的地址
//							 //p3就是一个指向【函数指针的数组】的指针
//
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针pfun
//	void (*pfun)(const char*) = test;
//	//函数指针的数组pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//指向函数指针数组pfunArr的指针ppfunArr
//	void (*(*ppfunArr)[5])(const char*) = &pfunArr;
//
//	return 0;
//}

////8 回调函数
////回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个
////函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数
////的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应
//void menu()
//{
//	printf("*************************\n");
//	printf("****  1:add   2:sub  ****\n");
//	printf("****  3:mul   4:div  ****\n");
//	printf("****      0.exit     ****\n");
//	printf("*************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int calc(int (*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("输入2个操作数：");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			ret = calc(add);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			ret = calc(sub);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			ret = calc(mul);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			ret = calc(div);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////9 用回调函数实现qsort函数
////冒泡排序 - 引子
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int f = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0, f = 0; j < sz - i - 1; j++)
//		{
//			f = 1;
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (f == 0)
//			break;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//
//int main()
//{
//	//升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

////10 使用qsort函数
////void* base   存放待排序数据中第一个对象的地址
////size_t num   排序数据数组的个数
////size_t size  排序数据一个元素的大小，单位是字节
////int (*compar)(const void*, const void*)   函数指针，用来比较待排序数据中的两个元素的函数
////											大于0，第一个大于第二个
////											等于0，第一个等于第二个
////											小于0，第一个小于第二个
////void qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
////
//#include <stdlib.h>
//int compar_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//
//void test1()
//{
//	//整型数组的排序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compar_int);
//	print_arr(arr, sz);
//	printf("\n");
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//#include <string.h>
//int sort_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test2()
//{
//	//使用qsort函数排序结构体数据
//	struct stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按年龄排序
//	qsort(s, sz, sizeof(s[0]), sort_age);
//	//按名字排序
//	qsort(s, sz, sizeof(s[0]), sort_name);
//}
//
//int main()
//{
//	//升序
//	test1();
//	test2();
//	//降序的话就把函数返回部分变成e2-e1
//
//	return 0;
//}

//11 模仿qsort实现一个冒泡排序的通用算法
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换各个字节
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}

void test3()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	print_arr(arr, sz);
}

int main()
{
	//测试
	test3();

	return 0;
}