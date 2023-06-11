#include "game.h"

//游戏初始页面
void menu()
{
	printf("******************************\n");
	printf("******       扫雷       ******\n");
	printf("******      1.play      ******\n");
	printf("******      0.exit      ******\n");
	printf("******************************\n");
}

//初始化扫雷
void initial_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//printf("----------扫雷----------\n");
	//打印棋盘坐标
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	//printf("----------扫雷----------\n");
}

//建立雷区
void setmine(char board[ROWS][COLS], int row, int col)
{
	//雷区的数目
	int count = row + 1;
	//随机生成雷区
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//计算选择位置周围雷的个数
/*static int*/void get_mine_count(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//1
	//return mine[x - 1][y - 1] +
	//	mine[x - 1][y] +
	//	mine[x - 1][y + 1] +
	//	mine[x][y - 1] +
	//	mine[x][y + 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] - '0' * 8;

	//2
	//可以去除中间的，也可以保留并减多一个'0'
	if (x == 0 || y == 0 || x == ROW + 1 || y == COL + 1)
		return;
	if (show[x][y] == '*')
	{
		int i = 0;
		int j = 0;
		int z = mine[x - 1][y - 1] +
				mine[x - 1][y] +
				mine[x - 1][y + 1] +
				mine[x][y - 1] +
				mine[x][y + 1] +
				mine[x + 1][y - 1] +
				mine[x + 1][y] +
				mine[x + 1][y + 1] - '0' * 8;
		if (z != 0)
		{
			show[x][y] = z + '0';
			/*return z - (ROW - 1) * '0';*/
		}
		else
		{
			show[x][y] = ' ';
			for (i = -1; i <= 1; i++)
			{
				for (j = -1; j <= 1; j++)
				{
					get_mine_count(mine, show, x + i, y + j);
				}
			}
		}
	}
}

//标记雷区
int mark(char show[ROWS][COLS], char mine[ROWS][COLS])
{
	int x = 0, y = 0;
	int z = 0;
	printf("需要标记：1，否则：0\n");
	printf("是否标记雷区:>");
	scanf("%d", &z);
	printf("\n");
	switch (z)
	{
	case 1:
		printf("请输入要标记的坐标:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] == '*')
		{
			show[x][y] = '?';
			displayboard(show, ROW, COL);
		}
		else
			printf("输入错误，请重新输入！\n");
		break;
	case 0:
		return z;
	default:
		printf("输入错误，请重新输入！\n");
		break;
	}
}

//判断输赢
int count(char show[ROWS][COLS])
{
	int i = 0, j = 0;
	int z = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			if (show[i][j] == '*' || show[i][j] == '?' && z < ROWS)
				++z;
		}
	}
	return z;
}

//查找雷区
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//坐标变量
	int x = 0;
	int y = 0;
	////原始的方式，计算非雷区的数目变量
	//int count = 0;

	do
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);

		//判断坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断是否为雷区
			if (mine[x][y] == '1')
			{
				printf("此处有雷，游戏结束!\n");
				break;
			}
			else
			{
				/*count = */get_mine_count(mine, show, x, y);
				displayboard(show, ROW, COL);
			}
		}
		else
		{
			printf("坐标非法，请重新输入:>");
			scanf("%d%d", &x, &y);
		}
		//游戏胜利的方式(找出所有雷区)
		if (count(show) == ROW + 1)
		{
			printf("你已经找到所有雷，游戏胜利!\n");
			break;
		}
		while (mark(show, mine));
	} while (1);
}