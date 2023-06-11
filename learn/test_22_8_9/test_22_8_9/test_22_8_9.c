#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//程序1 转义字符:转变了它原来的意思
//int main(void)
//{
//	printf("c:\test\test.c\n");	//  \t变成TAB，\n变成换行，用\\即可打印正确
//	printf("c:\\test\\test.c\n");
//	printf("ab\ncd\n");			//  \t,\n转成其他意思
//	printf("(are you ok??)\n");	//  ??)--] -- 三字母词，但现在很多编译器已经不支持了
//	//一般会打印成(are you ok]，在每个?前加上\即可打印(are you ok??)
//	/*
//			\?		书写多个问号时时使用，防止被解析成三字母词
//			\'		用于表示字符常量'
//			\"		用于表示一个字符串内部的双引号
//			\\		用于表示一个反斜杠，防止被解析成一个转义字符
//			\a		警告字符，蜂鸣
//			\b		退格符
//			\f		进纸符
//			\n		换行
//			\r		回车
//			\t		水平制表符
//			\v		垂直制表符
//			\ddd	ddd表示一个1~3个八进制数字，如\130x
//			\xdd	dd表示2个十六进制数字，如\x30 0
//	*/
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");		//用\使打印正确，是打印的字符不与前面语法冲突
//	printf("\a\a\a\a\a\n");			//  \a是警告字符
//
//	//8_11补齐内容
//	printf("%c\n", '\130');		//8进制的130是十进制的88，在ASCII码值中用X表示
//	printf("%c\n", '\101');							//而且A —— 65（十进制）在八进制中是101
//	printf("%c\n", '\x30');
//	printf("%d\n",strlen("c:\test\328\test.c"));
//
//	return 0;
//}

//程序2 注释：在一些复杂的代码加上注释，用来解释复杂代码
int main(void)
{
	int a = 10;		//C++的注释风格
	/*
	int b = 5;
	*/
	//C语言的注释风格，但缺陷就是不支持嵌套注释
	//一般采用C++注释风格

	return 0;
}