#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int a(int m, int n)
{
	if (m % n == 0)//�ж�
		return n;	//������С��Լ��
	else
		a(n, m % n);//�����С�Ĺ�Լ��
}
int main()
{
	int M, N;
	scanf("%d%d", &M, &N);
	int i = 0;
	//if (N > M)
	//{
	//	i = M;
	//	M = N;
	//	N = i;
	//}
	int min = a(M, N);//շת��������ŵ��Զ��庯����ִ��
	int max = N * M / min;//����󹫱���
	printf("%d %d", min, max);//��ӡ���

	return 0;
}