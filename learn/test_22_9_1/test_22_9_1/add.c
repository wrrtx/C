#define _CRT_SECURE_NO_WARNINGS 1

//全局变量被static修饰之后使这个全局变量只能在自己所在的源文件里使用，其他源文件不能使用！
//static int g_val = 2022;

//函数被static修饰之后使这个函数只能在自己所在的源文件里使用，其他源文件不能使用！
/*static*/ int Add(int x, int y)
{
	return x + y;
}