#define _CRT_SECURE_NO_WARNINGS 1

//������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.�¶��ˣ���ϲ��������Ϸ
//3.�´��˻��������˻���С�ˣ�Ȼ������£�ֱ���¶�
//4.һ����Ϸ���������ѡ������棬�����˳���Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mune()
{
	printf("                           \n");
	printf("     ��ӭ�򿪲�����Ϸ      \n");
	printf("     ���ֵķ�Χ��1-100     \n");
	printf("                           \n");
	printf("        ��ʼ��Ϸ��1        \n");
	printf("        �˳���Ϸ��0        \n");
	printf("                           \n");
}
void game()
{
	//1.�����������
	//rand����������һ��0-32767֮�������
	//����ʱ��һֱ�ڱ���ص㣬ʹ��ʱ�����ʹret��ֵ�������

	int ret = rand() % 100 + 1;//%100��������0-99����1�ͱ����1-100
	//printf("%d\n", ret);//��֤�Ƿ���1-100

	//2.������
	int guess = 0;

	printf("��������µ�����:>");

	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("�µ�����С��\n\n");
			printf("����������:>");
		}
		else if (guess > ret)
		{
			printf("�µ����ִ���\n\n");
			printf("����������:>");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	mune();//��ӡ�˵�
	printf("��ѡ���Ƿ������Ϸ:>");
	scanf("%d", &input);

	do
	{
		switch (input)
		{
		case 1:
			printf("��ӭ������Ϸ��\n\n");
			game();
			break;
		case 0:
			printf("���˳���Ϸ��\n");
			break;
		default:
			printf("ѡ��������������룡\n");
			break;
		}
		if (input == 1)
		{
			printf("�Ƿ������Ϸ?\n������1\n�˳���0\n��ѡ��:>");
			scanf("%d", &input);
			if (input == 0)
			{
				printf("���˳���Ϸ��\n");
				break;
			}
		}
		if (input > 1)
		{
			printf("��ѡ���Ƿ������Ϸ:>");
			scanf("%d", &input);
		}
		if (input == 0)
		{
			printf("���˳���Ϸ��\n");
		}
	} while (input);

	return 0;
}