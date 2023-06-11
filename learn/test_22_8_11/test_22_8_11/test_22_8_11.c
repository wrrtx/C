#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//程序1 选择语句
//int main(void)
//{
//	int input = 0;		//输入的值
//	printf("上大学之后，你要怎么选\n");
//	printf("好好学习输入1，摆烂输入2\n");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			printf("你可以沉淀实力，拿到好offer。");	//此处可以用大括号括起来，也可以不括
//		}
//		else
//		{
//			printf("那你只能被社会毒打。");		//此处可以用大括号括起来，也可以不括
//		}
// 
//	return 0;
//}

//程序2 循环语句
//int main(void)
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("继续写代码，line:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("你将得到好offer\n");
//	}
//
//	return 0;
//}

//程序3 函数
//int Add(int x, int y)				//定义求和函数
//{
//	int z = 0;
//	z = x + y;
//	
//	return z;
//}
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	
//	//int sum = num1 + num2;		//这个不是函数的解决方法
//	int sum = Add(num1, num2);		//函数的解决方法
//	
//	printf("%d\n", sum);
//
//	return 0;
//}

//程序4 数组
int main(void)
{
	////非数组的方法
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//……

	//数组：一组相同类型的元素的集合(相同的类型！！！)
	//数组是用下标来访问的,下标都是从0开始的
	
	//char ch[5] = { 'a','b','c' };				//不完全初始化，剩余的默认为0
	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	
	return 0;
}