#include "game.h"

//��Ϸ��ʼҳ��
void menu()
{
	printf("******************************\n");
	printf("******       ɨ��       ******\n");
	printf("******      1.play      ******\n");
	printf("******      0.exit      ******\n");
	printf("******************************\n");
}

//��ʼ��ɨ��
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

//��ӡ����
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//printf("----------ɨ��----------\n");
	//��ӡ��������
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
	//printf("----------ɨ��----------\n");
}

//��������
void setmine(char board[ROWS][COLS], int row, int col)
{
	//��������Ŀ
	int count = row + 1;
	//�����������
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

//����ѡ��λ����Χ�׵ĸ���
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
	//����ȥ���м�ģ�Ҳ���Ա���������һ��'0'
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

//�������
int mark(char show[ROWS][COLS], char mine[ROWS][COLS])
{
	int x = 0, y = 0;
	int z = 0;
	printf("��Ҫ��ǣ�1������0\n");
	printf("�Ƿ�������:>");
	scanf("%d", &z);
	printf("\n");
	switch (z)
	{
	case 1:
		printf("������Ҫ��ǵ�����:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] == '*')
		{
			show[x][y] = '?';
			displayboard(show, ROW, COL);
		}
		else
			printf("����������������룡\n");
		break;
	case 0:
		return z;
	default:
		printf("����������������룡\n");
		break;
	}
}

//�ж���Ӯ
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

//��������
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//�������
	int x = 0;
	int y = 0;
	////ԭʼ�ķ�ʽ���������������Ŀ����
	//int count = 0;

	do
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);

		//�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж��Ƿ�Ϊ����
			if (mine[x][y] == '1')
			{
				printf("�˴����ף���Ϸ����!\n");
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
			printf("����Ƿ�������������:>");
			scanf("%d%d", &x, &y);
		}
		//��Ϸʤ���ķ�ʽ(�ҳ���������)
		if (count(show) == ROW + 1)
		{
			printf("���Ѿ��ҵ������ף���Ϸʤ��!\n");
			break;
		}
		while (mark(show, mine));
	} while (1);
}