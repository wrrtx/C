#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//程序1已经通过
int main()
{
	int X, Y;
	scanf("%d%d", &X, &Y);
	int cache = X;
	X = Y;
	Y = cache;
	printf("%d\n%d", X, Y);

	return 0;
}
//程序2似乎不用if语句
//int main()
//{
//	int X, Y;
//	scanf("%d%d", &X, &Y);
//	int cache = 0;
//	if (Y > X)
//	{
//		cache = X;
//		X = Y;
//		Y = cache;
//	}
//	printf("%d\n%d", X, Y);
//
//	return 0;
//}//