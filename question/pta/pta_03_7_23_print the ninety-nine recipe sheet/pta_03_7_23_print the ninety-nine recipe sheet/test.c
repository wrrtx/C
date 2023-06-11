#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	int i = 1, j = 1;
	for (i = 1; i <= N; i++)	//控制外循环，以及打印的行数
	{
		for (j = 1; j <= i; j++)	//控制内循环
		{
			int x = i * j;		//求结果
		//	if (x <= 9)			//按照格式打印
				printf("%d*%d=%d   ", j, i, x);
		//	else
		//		printf("%d*%d=%d  ", j, i, x);
		}
		printf("\n");			//每行打印完毕就换行
	}

	return 0;
}