#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 用函数实现strcpy
//#include <string.h>
//#include <assert.h>
//////1
////void my_strcpy(char* dest, const char* src)//const可以使src的内容不被修改
////{
////	////1
////	//while (*src != 0)
////	//{
////	//	*dest = *src;
////	//	dest++;
////	//	src++;
////	//}
////	//*dest = *src;
//// 
////	////2
////	//while (*src != 0)
////	//{
////	//	*dest++ = *src;
////	//}
//// 
////    //3
////	assert(src != NULL);//断言,不成立的话会告诉错误在哪
////	assert(dest != NULL);
////	while (*dest++ = *src++);
////}
////2
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++);
//
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	////1
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	//2通过查看strcpy的定义来优化
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//
//	return 0;
//}

////程序2 const讲解
//int main()
//{
//	////1
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	//2 const 修饰变量，这个变量就被称为常变量，不能被修改，但本质上还是变量
//	const int num = 10;
//	int n = 100;
//	//num = 20;   //err
//
//	//const int* p = &num;
//	////const 修饰指针变量时
//	////const 如果放在*的左边，修饰的是*p，表示指针指向的内容是不能通过指针改变
//	////      但是指针变量本身是可以修改的
//	//*p = 20;	//err
//	//p = &n;		//可以运行
//
//	int* const p = &num;
//	////const 修饰指针变量时
//	////const 如果放在*的右边，修饰的是p，表示指针变量是不能被改变
//	////      但是指针指向的内容是可以修改的
//	*p = 20;	//可以运行
//	p = &n;		//err
//
//	printf("%d\n", num);
//
//	return 0;
//}

//程序3 用函数实现strlen
#include <assert.h>
size_t my_strlen(const char* dest)//int 可以换成 size_t —— unsigned int 无符号整型
{
	size_t c = 0;
	assert(dest != NULL);
	//或者
	//assert(dest);
	while (*dest++ != '\0')
	{
		c++;
	}
	return c;//这样返回永远不是负数
}
int main()
{
	char arr[] = "hello";
	printf("%d\n", my_strlen(arr));

	return 0;
}