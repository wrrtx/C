#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1  练习
//sizeof(数组名) - 数组名表示整个数组,计算的是整个数组的大小
//&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址
int main()
{
	/*//一维数组 
	int a[] = { 1,2,3,4 };//4*4=16
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));// 4/8  a+0是第一个元素地址 ，sizeof(a+0)计算的是地址大小
	//printf("%d\n", sizeof(*a));	//4 *a是数组的第一个元素，sizeof(*a)计算的是第一个元素大小
	//printf("%d\n", sizeof(a + 1));// 4/8 a+1是第二个元素地址，sizeof(a+1)计算的是地址的大小
	//printf("%d\n", sizeof(a[1]));//4 计算的是第二个元素大小
	//
	printf("%d\n", sizeof(&a));// 4/8 &a虽然是整个数组地址，但还是一个地址
	printf("%d\n", sizeof(*&a));//16 &a -- int(*p)[4] = &a; 找到地址再找到数组
	printf("%d\n", sizeof(&a + 1));// 4/8  &a+1 是数组后面空间的地址
	printf("%d\n", sizeof(&a[0]));// 4/8  地址
	printf("%d\n", sizeof(&a[0] + 1));//4   地址
	*/

	/*//字符数组
	char arr[] = { 'a','b','c','d','e','f' };//24  //6 4 '6' 1 4 4 4
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));// 4/8
	//printf("%d\n", sizeof(*arr));//1  *arr就是找到arr[0]这个元素
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8
	//
	//strlen要遇到\0才能停止，要注意字符串和字符数组,并且传的参数一定是字符指针,即数组地址
	//sj sj err err sj sj sj
	printf("%d\n", strlen(arr));//sj
	printf("%d\n", strlen(arr + 0));//sj
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//sj
	printf("%d\n", strlen(&arr + 1));//sj-6
	printf("%d\n", strlen(&arr[0] + 1));//sj-1
	*/

	/*char arr[] = "abcdef";//7  //7 '7' 1 1 4 4 4
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));// 4/8  arr+0是地址
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8
	//
	//6 6 err err 6 sj 5
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//sj
	printf("%d\n", strlen(&arr[0] + 1));//5
	*/

	/*char* p = "abcdef";//7  //'7' '6' 1 1 4 4 4
	//printf("%d\n", sizeof(p));// 4/8
	//printf("%d\n", sizeof(p + 1));// 4/8  都是地址
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));// 4/8
	//printf("%d\n", sizeof(&p + 1));// 4/8
	//printf("%d\n", sizeof(&p[0] + 1));// 4/8
	//
	//6 5 err err '6' sj 5
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//sj	 从p这个地址往后看，而不是字符串首字符往后看
	printf("%d\n", strlen(&p + 1));//sj  和前面的sj没有关系，因为不知道前面sj的大小
	printf("%d\n", strlen(&p[0] + 1));//5
	*/

	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48 表示整个数组 3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 表示计算第一行的大小
	printf("%d\n", sizeof(a[0] + 1));// 4/8  a[0]作为数组名并没有单独房子sizeof内部，没有取地址&
									 //所以a[0]是第一行第一个元素的地址
									 //a[0]+1 就是 a[0][1]的地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4  a[0][1]的元素大小
	printf("%d\n", sizeof(a + 1));// 4/8 a代表二维数组首元素地址，在此表示第一行的地址
	printf("%d\n", sizeof(*(a + 1)));//16 表示第二行的地址，*就表示第二行大小
	printf("%d\n", sizeof(&a[0] + 1));// 4/8
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16 a代表二维数组首元素地址，*代表第一行大小
							   //*a  --  *(a+0)  --  a[0]
	printf("%d\n", sizeof(a[3]));//16 越界了，但是等同于*(a+3),大小由类型规定 int [4]
	printf("%d\n", sizeof(a[-1]));//16 也是只看了类型，但注意，表达是错的

	return 0;
}

////2 回顾
//int main()
//{
//	short a = 5;
//	int s = 4;
//	//1.sizeof只看类型，不看结果
//	//2.sizeof的()里面不会进行运算
//	printf("%d\n", sizeof(a = s + 6));//2
//	printf("%d\n", a);//5
//
//	return 0;
//}