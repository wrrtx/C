#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 goto语句：可以滥用，但有问题
//复杂环境才用那么几次
//int main()
//{
//flag:
//	printf("haha\n");
//	printf("hehe\n");
//
//	goto flag;			//此时死循环
//
//	return 0;
//}

////程序2 关机程序：运行后电脑在1分钟内关机，但如果输入：我是猪，就取消关机
////cmd里：关机shutdown -s -t 60，取消关机shutdown -a
////C语言提供了一个函数：system()-执行系统命令的
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("请注意，你的电脑将在1分钟后关机！输入：我是猪，即可取消关机。\n");
//	//goto语句：
////again:
////	printf("请输入:>");
////	scanf("%s", input);
////	if (strcmp(input, "我是猪") == 0)
////	{
////		system("shutdown -a");
////		printf("已成功取消关机！\n");
////	}
////	else
////	{
////		printf("输入错误，系统将关机，你还可以再次输入！\n");
////		goto again;
////	}
//	
//	//不用goto语句：
//	while (1)
//	{
//		printf("请输入:>");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("已成功取消关机！\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入！\n");
//		}
//	}
//	return 0;
//}

////程序3 goto 语句只能在一个函数范围内跳转，不能跨函数
//void test()
//{
//flag:
//	printf("test\h");
//}
//int main()
//{
//	goto flag;//此处显示未定义
//	return 0;
//}				//这种情况是不可以的，跨函数了
