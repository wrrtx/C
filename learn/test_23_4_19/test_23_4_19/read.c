#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

////1 �ַ����뺯�� fgetc ��(����)
//void my_fgetc()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int ch = 0;
//	while((ch = fgetc(pf)) != EOF)//��Ҫ�ж�
//	{
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//}

////2 �ı���������� fgets
//void my_fgets()
//{
//	//��
//	FILE* pf = fopen("test.txt", "r");//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//�����õ��������
//		perror("fopen");//�����õ�������벢��ӡ������Ϣ
//		return 1;
//	}
//	//��һ��
//	char arr[20] = { 0 };
//	fgets(arr, 5, pf);//ʵ��ֻ��4����Ϊ����Ҫ��'\0'
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//}

////3 ��ʽ����� fscanf
//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};
//void my1_fscanf()
//{
//	struct S s = { 0 };
//	//��
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.scorce));
//	printf("1: %s %d %f\n", s.arr, s.age, s.scorce);
//
//	fprintf(stdout, "2: %s %d %f\n", s.arr, s.age, s.scorce);
//
//	fclose(pf);
//	pf = NULL;
//}

////4 ��������� fwrite
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
//	//�Զ����Ʒ�ʽ��
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.age, s.scorce);
//	fclose(pf);
//	pf = NULL;
//}

//