#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 ö��
////�ŵ㣺
////1. ���Ӵ���Ŀɶ��ԺͿ�ά����
////2. ��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���cpp�����Ͻ�
////3. ��ֹ��������Ⱦ����װ��
////4. ���ڵ���
////5. ʹ�÷��㣬һ�ο��Զ���������
//
////#define Mon 1//û������
////���У�����ʱҪ����滻��Ԥ����
//
//enum Day//����
//{
//	Mon = 1,//0 Ĭ�ϴ�0��ʼ,��ֵ���Ըı俪ʼ�����֣��Ǹ���ʼֵ
//	Tues,//1
//	Wed,//2
//	Thu,//3
//	Fri,
//	Sat,
//	Sun
//};//�ᷭ��ɶ�����
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color//��ɫ
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Day d = Fri;
//	printf("%d\n", Mon);//0 -> 1
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thu);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);
//
//	return 0;
//}

////2 ���ϣ������壩
//union Un
//{
//	int a;//4
//	char c;//1
//};
//
////����
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));//һ��
//
//	return 0;
//}

////3 �жϵ�ǰ�������С��
////1
////int check_sys()
////{
////	int a = 1;
////	return *(char*)&a;
////}
//
////2
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1��С�ˣ�����0�Ǵ��
//	return u.c;
//}
//
//int main()
//{
//	//01 00 00 00   С��
//	//00 00 00 01   ���
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}

//4 �������С����
//1.���ϵĴ�С����������Ա�Ĵ�С��
//2.������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
union Un1
{
	char c[5];//1  5
	int i;//4   //Ҳ���ڶ���
};
union Un2
{
	short c[7];//2   14
	int i;//4
};

int main()
{
	//��������Ľ����ʲô��
	printf("%d\n", sizeof(union Un1));//8
	printf("%d\n", sizeof(union Un2));//16

	return 0;
}