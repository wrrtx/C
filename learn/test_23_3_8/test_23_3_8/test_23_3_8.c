#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//练习题
////1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);//ptr相当于a[5]，理解的方式来看
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	//程序的结果是什么？
//
//	return 0;
//}

////2
////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	//指针类型决定了指针的运算
//	printf("%p\n", p + 0x1);//0x100014 相当于+20
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001 相当于强制类型转换成整型变量
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004 相当于强制类型转成整型指针，4个字节
//
//	return 0;
//}

////3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	//小端 : 01000000 02000000 03000000 04000000
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//0x0012ff44 -> int+1 -> 0x0012ff45
//	//访问的是00 00 00 02
//	//0x02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);//4  /  2 00 00 00
//
//	return 0;
//}

////4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//逗号表达式，选择右边的数字，a[0][0]=1,a[0][1]=3
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//
//	return 0;
//}

////5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//FFFFFFFC  -4
//	//-4的地址
//
//	return 0;
//}

////6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	//是取出整个数组地址，+1就是10的地址后面
//	int* ptr2 = (int*)(*(aa + 1));
//	//是取出第一行的地址，+1就是指向6的地址，相当于aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10  5
//
//	return 0;
//}

////7
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//
//	return 0;
//}

//8
//对地址++p会改变
//但p[-1]这并没有改变
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT  **(cpp+1)
	printf("%s\n", *-- * ++cpp + 3);//ER  *(*(cpp+1)-1)+3
	printf("%s\n", *cpp[-2] + 3);//ST  **(cpp-2)+3
	printf("%s\n", cpp[-1][-1] + 1);//EW  *(*(cpp-1)-1)+1

	return 0;
}