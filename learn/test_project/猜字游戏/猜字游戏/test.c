#define _CRT_SECURE_NO_WARNINGS 1

//猜字游戏
//1.自动产生一个1-100之间的随机数
//2.猜对了，恭喜并结束游戏
//3.猜错了会告诉你大了还是小了，然后继续猜，直到猜对
//4.一局游戏结束后可以选择继续玩，或者退出游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mune()
{
	printf("                           \n");
	printf("     欢迎打开猜字游戏      \n");
	printf("     数字的范围在1-100     \n");
	printf("                           \n");
	printf("        开始游戏：1        \n");
	printf("        退出游戏：0        \n");
	printf("                           \n");
}
void game()
{
	//1.产生随机数字
	//rand函数返回了一个0-32767之间的数字
	//利用时间一直在变的特点，使用时间戳，使ret的值保持随机

	int ret = rand() % 100 + 1;//%100的余数是0-99，加1就变成是1-100
	//printf("%d\n", ret);//验证是否是1-100

	//2.猜数字
	int guess = 0;

	printf("请输入想猜的数字:>");

	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜的数字小了\n\n");
			printf("请重新输入:>");
		}
		else if (guess > ret)
		{
			printf("猜的数字大了\n\n");
			printf("请重新输入:>");
		}
		else
		{
			printf("恭喜你，猜对了！\n\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	mune();//打印菜单
	printf("请选择是否进入游戏:>");
	scanf("%d", &input);

	do
	{
		switch (input)
		{
		case 1:
			printf("欢迎进入游戏！\n\n");
			game();
			break;
		case 0:
			printf("已退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新输入！\n");
			break;
		}
		if (input == 1)
		{
			printf("是否继续游戏?\n继续：1\n退出：0\n请选择:>");
			scanf("%d", &input);
			if (input == 0)
			{
				printf("已退出游戏！\n");
				break;
			}
		}
		if (input > 1)
		{
			printf("请选择是否进入游戏:>");
			scanf("%d", &input);
		}
		if (input == 0)
		{
			printf("已退出游戏！\n");
		}
	} while (input);

	return 0;
}