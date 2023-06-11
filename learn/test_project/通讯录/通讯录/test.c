#include "contact.h"

enum Option
{
	Exit,	//0
	Add,	//1
	Del,	//2
	Search,	//3
	Modify,	//4
	Show,	//5
	Sort	//6
};

int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			SaveContact(&con);
			DestroyContact(&con);//��̬�ڴ�����
			printf("���˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
		}
	} while (input);

	return 0;
}