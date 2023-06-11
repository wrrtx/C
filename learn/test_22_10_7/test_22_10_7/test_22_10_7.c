#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 函数递归：大事化小
////两个必要条件：1.存在限制条件，到达后停止 2.每次调用都会越接近这个限制条件。但不一定满足就不出错
//int main()
//{
//	printf("hehe\n"); 
//	main();		//死递归，栈溢出
//
//	return 0;
//}

////程序2 接受一个整型值，无符号，按顺序打印每一位
//void print(unsigned int n)
//{
//	if (n > 9)			//重要条件：跳出，限制。控制使用的条件
//	{
//		print(n / 10);	//重要条件：进入。每次使用会逼近跳出条件
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;	//无符号整型，unsigned，n
//	scanf("%u", &num);//1234
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//
//	return 0;
//}

////程序3 举例满足递归条件但会出错：栈溢出stack overflow
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}								//满足两个条件，但栈溢出
//}
////推荐网站https://stackoverflow.com		程序员的知乎，一般是英语回答
////所以写递归：1.不能死递归 2.递归层次不能太深
//int main()
//{
//	test(1);
//	return 0;
//}

////程序4 错误解法：不创建临时变量并求字符串长度
//#include <string.h>
//int my_strlen(char* str)	//指针
//{
//	int count = 0;			//创建了临时变量
//	while (*str != '\0')	
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";			 //字符串结束标志：\0
//	//['b'] ['i']['t']["\0']
//	//printf("%d\n",strlen(arr));//调用函数
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));	//数组传过去是地址
//
//	return 0;
//}

////程序5 正确解法：不创建临时变量并求字符串长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//str++不可以，这样变成传了值再++变成了传原本的值再变化
//	else                              //++str也不行，传进去对了，但留下了的是变了之后的值
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']["\0']
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

////程序6 迭代：求n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0; 
//	int ret = 1;
//	//循环，也叫做迭代的方法
//	for (i = 1; i <= n; i++) 
//	{
//	ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

////程序7 递归：求n的阶乘
////有些功能可以使用迭代，也可以递归
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1; 
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

////程序8 递归：求第n个斐波那契数，前两个数加起来等于下一个数，不考虑溢出
//int count = 0;//设置一个全局变量，记录调用了几次
//int Fib(int n)
//{
//	//计算第3个斐波那契数的计算次数
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1; 
//	else
//		return Fib(n - 1) + Fib(n - 2);	//但这样效率太低（第50个，5分钟以上）
//}										//这是因为进行了大量重复的计算
//int main()
//{
//	int n = 0;
//	scanf("%d",&n); 
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}

//程序9 迭代：求第n个斐波那契数，前两个数加起来等于下一个数，不考虑溢出
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);

	printf("%d\n", ret);	//能快速算出，但因为整型太小，放不下数字，结果错误
							//效率高
	return 0;
}