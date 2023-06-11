#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 结构体的声明、初始化和访问
//struct b
//{
//	char c;
//	short s;
//	double d;
//};
//struct stu
//{
//	struct b a;//也可以嵌套在里面
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//}s1, s2;//s1和s2也是结构体变量，但这个是全局变量
//int main()
//{
//	struct stu s = { {'w',20,3.14},"张三",30,"20221224" };//对象，s是局部变量
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

//程序2 结构体传参
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
	struct stu s = { {'w',20,3.14},"张三",30,"20221224" };
	//写个函数打印s的内容
	print1(s);	//传值调用
	print2(&s);	//传址调用，可以节省空间和时间，效率高

	return 0;
}