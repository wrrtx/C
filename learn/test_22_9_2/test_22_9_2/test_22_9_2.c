#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 分支语句if else
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	//单分支语句
//	if (age >= 18)
//		printf("成年\n");
//
//	//双分支语句
//	if (age >= 18)
//		printf("成年\n");
//	else
//	{
//		printf("未成年\n");
//		printf("不可以玩很久游戏\n");
//	}										//如果没有大括号括着，那么else第二条语句将不属于选择语句，输出也会打印出来
//
//	//多分支语句
//	if (age <= 12)
//		printf("儿童\n");
//		//else if (12 < age <= 17)  如果age=20时，age>=18成立，使第一个语句部分成立，导致后面也会成立,语法错误
//		//正确写法如下
//	else if (age >= 12 && age <= 17)
//		printf("青少年\n");
//	else if (age >= 18 && age <= 45)
//		printf("青年\n");
//	else if (age >= 46 && age <= 69)
//		printf("中年\n");
//	else if (age > 69)
//		printf("老年\n");		//此时结尾可以使用else，也可以继续使用else if
//
//	return 0;	//一个分号隔开就是一条语句
//}

////程序2 悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	
//	/*原格式：
//	if (a == 1)			//此处第一个条件不成立，使用直接跳到return 0；语句
//		if (b == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");			//else和离得最近的if匹配，
//	return 0;*/
//
//	//改正：
//	if (a == 1)				
//	{
//		if (b == 2)
//		{
//			printf("呵呵\n");
//		}
//		else
//		{
//			printf("哈哈\n");		//所以加个大括号更清晰
//		}
//	}
//
//	//代码风格的书《高质量C/C++编程》
//
//	return 0;
//}

////程序3 if书写风格
//////1：
////int test()
////{
////	if (0)					//计算机中0为假，非0为真
////		return 0;			//return会直接结束该局部，不会继续往下进行
////
////	printf("hehe\n");
////	return 1;
////}
////int main()
////{
////	test();
////	return 0;
////}
////2：
//int main()
//{
//	int num = 3;
//
//	//if (num == 5)		//此语句如果少一个=也可以运行起来，但程序错了
//	if (5 == num)		//此语句就一定可以发现少等号，建议整型对比时都使用这种风格
//		printf("hehe\n");
//
//	return 0;
//}

////程序4 练习
//////1.判断一个数是否为奇数
////int main()
////{
////	///自己的代码：
////	int a = 0;
////	scanf("%d", &a);
////	int b = a % 2;
////	if (1 == b)
////		printf("a为奇数\n");
////	else
////		printf("a为偶数\n");
////
////	//或者按视频的：
////	int num = 15;
////	if (num % 2 == 1)
////		printf("奇数\n");
////
////	return 0;
////}
////2.输出1-100之间的奇数
//int main()
//{
//	//自己的代码：
//	int a = 1;
//	
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			int b = a;
//			printf("%d ", b);
//		}
//	a++;
//	}
//
//	//或者按视频的：
//	int i = 0;
//
//	for (i = 1; i <= 100; i++)		//i++可以写出i+=2
//	{
//		if (1 == i % 2)
//			printf("%d ", i);
//	}
//	//注意：for (int i = 1; i <= 100; i++)   此写法只可以在C++/C99标准中才可以运行成功
//
//	return 0;
//}

////程序5 分支语句switch:常常用于多分支的情况
//////1：每个数字对应星期几
////int main()
////{
////	int day = 0;
////	scanf("%d", &day);
////
////	switch (day)		//括号内必须是整型，字符也可以
////	{
////	case 1:						//case决定入口，同时要求是整型，而且一定要常量，可以写成1+0
////		printf("星期一\n");
////		break;					//break表示跳过/停止，决定出口，不一定要加，只要符合语法就好
////	case 2:
////		printf("星期二\n");
////		break;
////	case 3:
////		printf("星期三\n");
////		break;
////	case 4:
////		printf("星期四\n");
////		break;
////	case 5:
////		printf("星期五\n");
////		break;
////	case 6:
////		printf("星期六\n");
////		break;
////	case 7:
////		printf("星期天\n");
////		break;			//编程好习惯就是要把最后一个break加上，不建议删除
////	}
////
////	return 0;
////}
////2：区分工作日和休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)		
//	{
//	case 1:									
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	
//		//如果输入其他数字时给反馈时可以用如下语句：
//	default:
//		printf("输入错误\n");
//		break;			//这里可以放到开头，无顺序问题，满足需求就好
//	}
//
//	return 0;
//}

//程序6 练习
//看程序算出n，m的结果
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:  m++;//m=3
	case 2:  n++;//n=2
	case 3:
		switch (n)		//switch允许嵌套使用,需要注意switch括号中的值是什么
		{
		case 1:  n++;		//此处n=2，跳过该语句
		case 2:  m++;  n++;  //m=4,n=3
			break;
		}
	case 4:  m++;  //m=5
		break;
	default:  break;
	}
	printf("m = %d, n = %d\n", m, n);		//输出m=5,n=3
	return 0;
}