#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 �ṹ������
////���飺һ����ͬ����Ԫ�صļ���
////�ṹ�壺һЩֵ�ļ��ϣ����Ϳ��Բ�ͬ
////
////��ȫ����
//struct book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b3, b4, b5;//b3,b4,b5��ȫ�ֱ���
//
////����ȫ����(�����ṹ������)
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double b;
//}s;//ֻ����һ��
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double b;
//}a[20], * ps;
//
//int main()
//{
//	struct book b1, b2;//b1,b2�Ǿֲ�����
//	ps = &s;//���Թ���������err
//
//	return 0;
//}

////2 �ṹ���������
//////err
////struct Node
////{
////	int data;//4
////	struct Node next;
////};
////int main()
////{
////	sizeof(struct Node);//�㲻����С
////
////	return 0;
////}
//
////����ı�﷽ʽ
////1
//typedef struct Node
//{
//	int data;
//	struct Node* next;//���԰�����ͬ�ṹ���ָ�����ͣ������ܰ�����ͬ�Ľṹ������
//}*linklist;
////2
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;
//
//int main()
//{
//	int ret = sizeof(struct Node);
//	printf("%d\n", ret);
//
//	return 0;
//}

////3 �ṹ������Ķ���ͳ�ʼ��
//struct Point
//{
//	int x;
//	int y;
//}p1 = { 2,3 };//��ʼ��
//struct score//Ҫ��������
//{
//	int n;
//	char ch;
//};
//struct stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct stu s1 = { "zhangsan",20,{100,'q'} };
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
//
//	return 0;
//}

////4 �ṹ���ڴ����->����ṹ��Ĵ�С
////1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
////2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
////	������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
////	VS��Ĭ�ϵ�ֵΪ8,ֻ��VS��Ĭ�϶�����
////3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
////4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�ýṹ���Լ������������������������ṹ���
////�����С��������������������Ƕ�׽ṹ��Ķ�����������������
//#include <stddef.h>
//struct s1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c1;
//	struct s3 p3;
//	double d;
//};
//
//int main()
//{
//	/*struct s1 p1;
//	struct s2 p2;*/
//
//	printf("%d\n", sizeof(struct s1));//12
//	printf("%d\n", sizeof(struct s2));//8
//	printf("------------------------------\n");
//
//	printf("%d\n", offsetof(struct s1, c1));
//	printf("%d\n", offsetof(struct s1, i));
//	printf("%d\n", offsetof(struct s1, c2));
//	printf("------------------------------\n");
//
//	printf("%d\n", offsetof(struct s2, c1));
//	printf("%d\n", offsetof(struct s2, c2));
//	printf("%d\n", offsetof(struct s2, i));
//	printf("------------------------------\n");
//
//	printf("%d\n", sizeof(struct s3));//16
//	printf("%d\n", sizeof(struct s4));//32
//
//	return 0;
//}

////5 �޸ı�����Ĭ�϶�����
////#pragma once//ͷ�ļ���ʹ�ã������ǣ���ֹͷ�ļ����������
//#pragma pack(4)//��Ĭ�϶�������Ϊ4
//struct s
//{
//	int i;
//	double d;
//};
//#pragma pack()//��Ĭ�϶������ָ���8
//
//#pragma pack(1)
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct s));//16 -> 12
//	printf("%d\n", sizeof(struct s1));//6 ������
//
//	return 0;
//}

//6 �ṹ�崫��
struct S
{
	int data[1000];
	int num;
};
//1
void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ss.data[i]);
	}
	printf("%d\n", ss.num);
}
//2
void print2(const struct S* p)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", p->data[i]);
	}
	printf("%d\n", p->num);
}

int main()
{
	struct S s = { {1,2,3},100 };
	print1(s);	//��ֵ���� -- ʱ��ռ��(��ѹջ)
	print2(&s);	//��ַ���� -- ʱ��ռ�С(��ѡ)

	return 0;
}