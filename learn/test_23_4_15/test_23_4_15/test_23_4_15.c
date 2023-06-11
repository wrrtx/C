#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 动态内存管理
////malloc 空间开辟失败返回空指针
////free
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//
////变长数组 c99支持
////数组指定大小可以变化，但并不是可以随便改长度
//int main()
//{
//	int arr[10] = { 0 };//栈区
//	//动态内存开辟
//	int* p = (int*)malloc(INT_MAX);//堆区
//	//开辟失败的情况 INT_MAX
//	if (p == NULL)//一定要判断
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//异常返回
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//没有free
//	//并不是内存空间不回收，程序退出时系统会自动回收内存
//
//	//释放
//	free(p);
//	p = NULL;//彻底让p释放，而不是指向某个内存地址
//	//早期无限申请内存空间会死机，但现在的系统达到某个值附近后停止分配
//	//free一定和malloc等内存开辟成对使用
//
//	return 0;//正常返回
//}

////2 动态内存管理
////calloc = malloc + memset
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//会自动初始化为0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打印
//	for (int i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	free(p);
//	p = NULL;
//
//	return 0;
//}

////3 动态内存管理
////realloc => realloc(NULL, 40) = malloc(40)
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	//开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	int* ptr = (int*)realloc(p, 8000);//不能用旧指针接收，因为可能申请失败
//	if (ptr != NULL)
//		p = ptr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

////4 常见动态内存错误
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	////1.解引用错误
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)//方案
//	//{
//	//	return 1;
//	//}
//	//*p = 20;//p可能是NULL，可能出问题
//	//free(p);
//	//p = NULL;
//
//	////2.动态内存开辟空间的越界
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 1;
//	//}
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	p[i] = i;//越界访问
//	//}
//	//free(p);
//	//p = NULL;
//
//	////3.对非动态开辟内存使用free释放
//	//int a = 10;
//	//int* p = &a;
//	////……
//	//free(p);//err
//	//p = NULL;
//
//	////4.使用free释放一块动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 1;
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//	//free(p);//找不到p空间申请的空间了
//	//p = NULL;
//
//	////5.对同一块动态内存多次释放
//	//int* p = (int*)malloc(100);
//	////……
//	//free(p);//加上 p = NULL; 可以解决
//	////……
//	//free(p);//重复释放
//
//	//6.动态开辟内存忘记释放（内存泄漏）
//	////1
//	//void test();
//	//test();
//	//
//	//2
//	int* p = test();
//	//忘记释放了
//
//	return 0;
//}
//int* test()
//{
//	////1
//	//int* p = (int*)malloc(100);
//	////……
//	//int flag = 0;
//	//scanf("%d", &flag);
//	//if (flag == 5)
//	//	return;
//	//
//	//free(p);
//	//p = NULL;//内存回收不了了
//
//	//2
//	int* p = (int*)malloc(100);
//	if (p = NULL)
//	{
//		return p;
//	}
//	//……
//	return p;
//}

////5 练习1
//#include <string.h>
//void GetMemory(char* p)//二级指针接收str地址
//{
//	p = (char*)malloc(100);//内存泄露
//}//没有返回地址，str依旧是空指针
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//传str的地址，后面释放内存
//	strcpy(str, "hello world");
//	printf(str);//str为空指针，解引用会崩溃
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

////6 练习2
//char* GetMemory(void)
//{
//	//返回栈空间地址的问题
//	char p[] = "hello world";
//	return p;//局部变量，内存释放了，极大可能会改，野指针
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//乱码
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

////7 练习3
//#include <string.h>
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//没有free
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

//8 练习4
#include <stdio.h>
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//此处应该加上 str = NULL;
	str = NULL;
	if (str != NULL)//str已经变成野指针
	{
		strcpy(str, "world");
		printf(str);//非法访问
	}
}
int main()
{
	Test();

	return 0;
}