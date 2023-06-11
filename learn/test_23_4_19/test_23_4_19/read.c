#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

////1 字符输入函数 fgetc 读(单个)
//void my_fgetc()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int ch = 0;
//	while((ch = fgetc(pf)) != EOF)//需要判断
//	{
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//}

////2 文本行输出函数 fgets
//void my_fgets()
//{
//	//打开
//	FILE* pf = fopen("test.txt", "r");//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//单单拿到错误代码
//		perror("fopen");//可以拿到错误代码并打印错误信息
//		return 1;
//	}
//	//读一行
//	char arr[20] = { 0 };
//	fgets(arr, 5, pf);//实际只有4，因为后面要放'\0'
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//}

////3 格式化输出 fscanf
//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};
//void my1_fscanf()
//{
//	struct S s = { 0 };
//	//打开
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.scorce));
//	printf("1: %s %d %f\n", s.arr, s.age, s.scorce);
//
//	fprintf(stdout, "2: %s %d %f\n", s.arr, s.age, s.scorce);
//
//	fclose(pf);
//	pf = NULL;
//}

////4 二进制输出 fwrite
//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};
//void my_fread()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//以二进制方式读
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.age, s.scorce);
//	fclose(pf);
//	pf = NULL;
//}

//