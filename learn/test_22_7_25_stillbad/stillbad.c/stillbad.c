//	stillbad.c -- 修复错误程序以及错误语法
#include <stdio.h>
int main(void)	//填写备注时注意符号为//（单行）或者/* */（多行）
{	//使用花括号而不是圆括号
	int n, n2, n3;	//定义int时变量错误

	n = 5;
	n2 = n * n;
	n3 = n2 * n;	//语法中3次方不是n2*n2,表达出错
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
}