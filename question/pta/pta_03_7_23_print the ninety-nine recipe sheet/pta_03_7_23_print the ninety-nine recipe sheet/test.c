#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	int i = 1, j = 1;
	for (i = 1; i <= N; i++)	//������ѭ�����Լ���ӡ������
	{
		for (j = 1; j <= i; j++)	//������ѭ��
		{
			int x = i * j;		//����
		//	if (x <= 9)			//���ո�ʽ��ӡ
				printf("%d*%d=%d   ", j, i, x);
		//	else
		//		printf("%d*%d=%d  ", j, i, x);
		}
		printf("\n");			//ÿ�д�ӡ��Ͼͻ���
	}

	return 0;
}