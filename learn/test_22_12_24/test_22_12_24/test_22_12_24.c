#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 �ṹ�����������ʼ���ͷ���
//struct b
//{
//	char c;
//	short s;
//	double d;
//};
//struct stu
//{
//	struct b a;//Ҳ����Ƕ��������
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//}s1, s2;//s1��s2Ҳ�ǽṹ��������������ȫ�ֱ���
//int main()
//{
//	struct stu s = { {'w',20,3.14},"����",30,"20221224" };//����s�Ǿֲ�����
//	//. ->
//	printf("%c\n", s.a.c);
//	printf("%s\n", s.id);
//
//	struct stu* ps = &s;
//	printf("%c\n", (*ps).a.c);
//	printf("%c\n", ps->a.c);
//
//	return 0;
//}

//����2 �ṹ�崫��
struct b
{
	char c;
	short s;
	double d;
};
struct stu
{
	struct b a;
	char name[20];
	int age;
	char id[20];
};
void print1(struct stu t)
{
	printf("%c %d %lf %s %d %s\n", t.a.c, t.a.s, t.a.d, t.name, t.age, t.id);
}
void print2(struct stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->a.c, ps->a.s, ps->a.d, ps->name, ps->age, ps->id);
}
int main()
{
	struct stu s = { {'w',20,3.14},"����",30,"20221224" };
	//д��������ӡs������
	print1(s);	//��ֵ����
	print2(&s);	//��ַ���ã����Խ�ʡ�ռ��ʱ�䣬Ч�ʸ�

	return 0;
}