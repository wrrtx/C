#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

////1 字符输出函数 fputc 写(单个)
//void my_fputc()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	////1
//	//fputc('a', pf);
//	//2
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//}

////2 文本行输入函数 fputs
//void my_fputs()
//{
//	//打开
//	FILE* pf = fopen("test.txt", "w");//w -> a
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		perror("fopen");//可以加文字
//		return 1;
//	}
//	//写一行
//	fputs("hello bit\n", pf);//如果文件有内容会销毁原先内容
//							//若想保留原来文本不被销毁，那文件打开形式为'a'
//	fputs("hello bit\n", pf);
//	fclose(pf);
//	pf = NULL;
//}

////3 格式化输入函数 fprintf
//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};
//void my1_fprintf()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	//打开
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写
//	fprintf(pf, "%s %d %f", s.arr, s.age, s.scorce);
//	fclose(pf);
//	pf = NULL;
//}

////4 二进制输入 fread
//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};
//void my_fwrite()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	FILE* pf = fopen("test.txt", "wb");//以二进制形式写到文件中
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//以二进制方式写
//	fwrite(&s, sizeof(struct S), 1, pf);//存储的是二进制方式
//		//数据   数据的大小    个数 写入的文件
//	fclose(pf);
//	pf = NULL;
//}

//5