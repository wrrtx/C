#include "game.h"

void Initial_page()
{
	//初始页面
	menu();
}

void game()
{
	char ret = 0;
	//创建棋盘数组并且初始化棋盘
	char board[ROW][COL];
	initial_board(board, ROW, COL);
	//打印棋盘
	displayboard(board, ROW, COL);
	//游戏内容
	while (1)
	{
		//玩家下棋
		playermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;

		//电脑下棋
		computermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家胜利！\n");
	else if (ret == '#')
		printf("电脑胜利！\n");
	else
		printf("平局\n");
	displayboard(board, ROW, COL);
	printf("\n");
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
