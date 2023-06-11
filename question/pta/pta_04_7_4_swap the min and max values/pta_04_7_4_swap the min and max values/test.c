#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);	//输入
	int i = 0, j = 1;
	int max = 0, min = 0;
	int arr[11] = { 0 }, m1 = 0, m2 = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);	//输入
	}
	max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			m1 = i;
		}
	}						//找最大值
	min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			m2 = i;
		}
	}						//找最小值
	if (n == 2 || (m1 == 0 && m2 == n - 1))
	{
		int t = arr[0];
		arr[0] = arr[n-1];
		arr[n-1] = t;
	}
	else if (arr[0] == max)
	{
		int t = arr[n-1];
		arr[0] = min;
		arr[n - 1] = max;
		arr[m2] = t;
	}
	else if (arr[n-1] == min)
	{
		int t = arr[0];
		arr[0] = min;
		arr[n - 1] = max;
		arr[m1] = t;
	}
	else
	{
		int t1 = arr[0];
		arr[0] = min;
		arr[m2] = t1;
		int t2 = arr[n - 1];
		arr[n - 1] = max;
		arr[m1] = t2;
	}
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	//arr1[0] = min, arr1[n - 1] = max;		//最大最小值放到新数组头尾
	//for (i = 0; i < n; i++)
	//{
	//	if (arr[i] != min && arr[i] != max)
	//	{
	//		arr1[j] = arr[i];				//不是最大最小的按顺序放到新数组
	//		j++;
	//	}
	//}
	//for (i = 0; i < n; i++)
	//	printf("%d ", arr1[i]);			//输出

	return 0;
}