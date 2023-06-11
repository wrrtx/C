#include "game.h"

void Initial_page()
{
	//��ʼҳ��
	menu();
}

void game()
{
	char ret = 0;
	//�����������鲢�ҳ�ʼ������
	char board[ROW][COL];
	initial_board(board, ROW, COL);
	//��ӡ����
	displayboard(board, ROW, COL);
	//��Ϸ����
	while (1)
	{
		//�������
		playermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;

		//��������
		computermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���ʤ����\n");
	else if (ret == '#')
		printf("����ʤ����\n");
	else
		printf("ƽ��\n");
	displayboard(board, ROW, COL);
	printf("\n");
}

int main()
{
	int input = 0;
	int f1 = 0, f2 = 0;

	//�������ֵ
	srand((size_t)time(NULL));

	Initial_page();
	printf("��ѡ���Ƿ������Ϸ:>");
	scanf("%d", &input);

	do
	{
		switch (input)
		{
		case 1:
			printf("��ӭ������Ϸ\n");
			game();
			f1 = 0;
			break;
		case 0:
			printf("���˳���Ϸ\n");
			f2 = 1;
			break;
		default:
			printf("����������������룡\n");
			printf("��ѡ���Ƿ������Ϸ:>");
			scanf("%d", &input);
			break;
		}
		if (input == 1 && f1 == 0)
		{
			printf("�Ƿ�����һ����Ϸ?\n������1\n�˳���0\n��ѡ��:>");
			scanf("%d", &input);
			f1 = 1;
		}
		if (input == 0 && f2 == 0)
		{
			printf("���˳���Ϸ\n");
			break;
		}
	} while (input);

	return 0;
}
