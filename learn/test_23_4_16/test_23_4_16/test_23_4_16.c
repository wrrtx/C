#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 �������� -- �ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա
////�ص㣺
////1.�ṹ�е����������Աǰ���������һ��������Ա��
////2.sizeof ���ص����ֽṹ��С����������������ڴ档
////3.�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�
////С������Ӧ���������Ԥ�ڴ�С��
//typedef struct S
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//4
//
//	return 0;
//}

//2 ��������ʹ�� -- �����ڴ��ͷţ�����ٶ�
#include <stdlib.h>
typedef struct S
{
	int n;
	int* arr;
	int a[0];//���������Ա
};

int main()
{
	////1
	//struct S* ps = (struct S*)malloc(sizeof(struct S));
	//if (ps == NULL)
	//{
	//	return 1;
	//}
	//ps->n = 100;
	//ps->arr = (int*)malloc(40);
	//if (ps->arr == NULL)
	//{
	//	return 1;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(ps->arr + i) = i;
	//	printf("%d ", *(ps->arr + i));
	//}
	//int* ptr = (int*)realloc(ps->arr, 80);
	//if (ptr == NULL)
	//{
	//	return 1;
	//}
	//free(ps->arr);
	//free(ps);
	//ps = NULL;

	//2 ��������
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->a[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->a[i]);
	}
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	free(ps);
	ps = NULL;

	return 0;
}