#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 λ�� -- λ�Ǳ���λ -- ��ʡ�ռ������ -- �����е��
////λ�ε������ͽṹ�����Ƶģ���������ͬ:
////1.λ�εĳ�Ա������int��unsigned int ��signed int ��Ҳ������char����������
////2.λ�εĳ�Ա�������һ��ð�ź�һ������
//// 
////�ռ����:
////1. λ�εĳ�Ա������int unsigned int signed int ������char ���������μ��壩����
////2. λ�εĿռ����ǰ�����Ҫ��4���ֽڣ� int ������1���ֽڣ� char ���ķ�ʽ�����ٵġ�
////3. λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�
//struct A
//{
//	//4byte - 32bite
//	int _a : 2;//��ʱ�����ִ������ı���λ�Ŀռ��С
//	int _b : 5;
//	int _c : 10;
//	//15
//	//4byte - 32bit
//	int _d : 30;
//};
////47bit
////6byte - 48bit
////8byte - 64bit
////һ���̶��Ͻ�ʡ�ռ�
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//
//	return 0;
//}

//2 λ�οռ����
struct S
{
	//1byte
	char a : 3;
	char b : 4;
	//1byte
	char c : 5;
	//1byte
	char d : 4;//��������ֲ��ܳ������ʹ�С
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));//3 ǰ��ռ䲻����ֱ���˷Ѳ����¿��ٿռ�
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;//����ڴ��С���������ݻᷢ���ض�

	return 0;
}