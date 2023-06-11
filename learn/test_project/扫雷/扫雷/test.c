#include "game.h"

void Initial_page()
{
	//初始页面
	menu();
}

void game()
{
	//创建棋盘数组
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//初始化棋盘
	//'0'为非雷区
	//'1'为雷区
	//展示页面采用'*'
	initial_board(mine, ROWS, COLS, '0');
	initial_board(show, ROWS, COLS, '*');

	//打印棋盘
	displayboard(show, ROW, COL);
	//displayboard(mine, ROW, COL);

	//建立雷区
	setmine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);

	//查找雷区
	findmine(mine, show, ROW, COL);

	//游戏结束后打印雷区
	displayboard(mine, ROW, COL);
}

int main()
{
	int input = 0;
	int f1 = 0, f2 = 0;

	//创建随机值
	srand((size_t)time(NULL));

	Initial_page();
	printf("请选择是否进行游戏:>");
	scanf("%d", &input);

	do
	{
		switch (input)
		{
		case 1:
			printf("欢迎进入游戏\n");
			game();
			f1 = 0;
			break;
		case 0:
			printf("已退出游戏\n");
			f2 = 1;
			break;
		default:
			printf("输入错误，请重新输入！\n");
			printf("请选择是否进入游戏:>");
			scanf("%d", &input);
			break;
		}
		if (input == 1 && f1 == 0)
		{
			printf("是否再来一局游戏?\n继续：1\n退出：0\n请选择:>");
			scanf("%d", &input);
			f1 = 1;
		}
		if (input == 0 && f2 == 0)
		{
			printf("已退出游戏\n");
			break;
		}
	} while (input);

	return 0;
}