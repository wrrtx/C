#include "game.h"

void Initial_page()
{
	//��ʼҳ��
	menu();
}

void game()
{
	//������������
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//��ʼ������
	//'0'Ϊ������
	//'1'Ϊ����
	//չʾҳ�����'*'
	initial_board(mine, ROWS, COLS, '0');
	initial_board(show, ROWS, COLS, '*');

	//��ӡ����
	displayboard(show, ROW, COL);
	//displayboard(mine, ROW, COL);

	//��������
	setmine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);

	//��������
	findmine(mine, show, ROW, COL);

	//��Ϸ�������ӡ����
	displayboard(mine, ROW, COL);
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