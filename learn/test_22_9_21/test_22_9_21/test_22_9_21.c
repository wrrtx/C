#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 函数的调用
////int swap(int x, int y)
//void swap(int* pa, int* pb)		
//{
//	//int z = 0;		
//	//z = x;		
//	//x = y;
//	//y = z;	
//	//return x;
//	//return y;
//
//	int z = 0;			
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("打印前：a = %d , b = %d\n", a, b);
//
//	//函数的调用：
//	//swap(a, b);	//传值调用，形参和实参没有联系
//	swap(&a, &b);	//传址调用，形参和实参有联系
//
//	printf("打印后：a = %d , b = %d\n", a, b);
//
//	////指针
//	//int* pa = &a;		
//	//*pa = 20;			//pa是一个指针变量
//	//printf("%d\n", a);
//
//	return 0;
//}

////程序2 练习1：用函数判断一个数是不是素数(100-200)
//int is_prime(int n)
//{
//	//2 -> n-1之间的数字
//	int j = 0;
//	for (j = 2; j < n; j++)	//n可以用sqrt（n）开方代替优化，这是要引用头文件#include <math.h>
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}	//函数仅仅表达一个功能就好，这样更单一、独立！
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", count);
//
//	return 0;
//}

////程序3 练习2：用函数判断是否为闰年 
//int is_leap_year(int n)	//一个函数不写返回类型，返回类型则默认int类型
//{
//	//if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))	//错误：对闰年的判断不熟悉 
//	//	return 1;
//	//else
//	//	return 0;
//
//	//更简单的写法:
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}					//要注意return的用法
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

////程序4 练习3：用函数实现一个整型有序数组的二分查找
//int binary_search(int arr2[], int k, int s)	//arr2就是一个指针
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr2[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr2[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//设定：找到了就返回找到位置的下标
//	//      找不到就返回-1
//	//数组arr1传参，实际传递的不是数组本身，仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr1, key, sz);//所以这句话不可以放到函数里，否则算不出
//	if (-1 == ret)
//	{
//		printf("找不到了!\n");
//	}
//	else
//	{
//		printf("找到了，下标是: %d\n", ret);
//	}
//
//	return 0;
//}

//程序5 练习4：用函数，每调用一次这个函数就会将num的值增加1
void add(int *p)
{
	(*p)++;
}
int main()
{
	//每次调用函数时会使num增加1
	int num = 0;
	//地址
	add(&num);					//一定要清楚什么时候传值，什么时候传址
	printf("%d\n", num);//1

	add(&num);
	printf("%d\n", num);//2

	add(&num);
	printf("%d\n", num);//3

	return 0;
}