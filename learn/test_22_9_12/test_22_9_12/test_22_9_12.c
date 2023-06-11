#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 循环语句while
////打印1-10的数字以及break和continue的作用
//int main()
//{
//	int i = 1;			//初始值
//
//	while (i <= 10)		//括号里面为判断表达式，判断部分
//	{
//		if (5 == i)
//			break;	//i=5时跳出循环，因此，在while循环中，break用于永久的终止循环，输出1 2 3 4
//			//continue;	//跳过该语句后面的代码返回while，i一直是5，变成死循环，输出1 2 3 4后光标一直闪
//		//在while循环中，continue的作用是跳过本次循环continue后边的代码，直接去判断部分，看是否进行下一次循环
//		printf("%d ", i);
//		i++;			//调整部分
//	}
//
//	return 0;
//}

////程序2 分析代码1
//int main()
//{
//	int cha = getchar();	//输入一个字符
//	printf("%c\n", cha);
//	putchar(cha);			//可以替代，与getchar成对，输出一个字符
//
//	return 0;
//
//	int ch = 0;
//	//按下cerl+z  getchar读取结束
//	while ((ch = getchar()) != EOF) //EOF是end of file,文件结束标志，本身EOF是-1
//	{
//		putchar(ch);		//这时可以不断读取字符
//	}						
//
//	return 0;
//}

////程序3  对程序2的意义分析
////希望要有空杯心态，别自我膨胀，静心学习
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);	//数组本身就是一个地址，所以不需要加地址符号
//	//如果用空格做密码可以用gets
//	printf("请确认密码，输入(Y/N):>");
//	/*清理缓冲区中的\n
//	getchar();//但只能清理一次字符*/
//	//清理缓冲区中多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("输入成功");
//	}
//	else
//	{
//		printf("输入失败");
//	}
//
//	return 0;
//}

//程序4 分析代码2
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9' )	//其意义就是说打印非字符，即数字
			continue;
		
		putchar(ch);
	}

	return 0;
}
