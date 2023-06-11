#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//程序1 数组作为函数参数（冒泡排序）
void bubble_sort(int arr[], int sz)//形参arr本质是指针
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;		//优化(例子：一开始就是升序)
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序 - 冒泡排序：两两相邻的元素进行比较，并且可能的话需要交换
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//数组传参的时候，传递的其实是数组首元素的地址

	return 0;
}

////程序2 数组名是什么 - 是数组首元素的地址
////只有2个例外：1.sizeof（数组名） - 这时表示整个数组 - 计算的是整个数组的大小单位是字节
////             2.&数组名 - 表示整个数组的地址 - 取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr[0]);
//	printf("%p\n", arr);//数组名是首元素的地址
//
//	int sz = sizeof(arr);
//	printf("%d\n", sz);//数组名表示整个数组
//
//	printf("%p\n", &arr);//这里取出来的是数组的地址，只不过因为开始的首元素一样，所以才一样
//	printf("%p\n", &arr + 1);//验证,相差0x28，就是40
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//与上面作对比，相差4
//	printf("%p\n", &arr[0]);//这两种会相同
//
//	return 0;
//}
