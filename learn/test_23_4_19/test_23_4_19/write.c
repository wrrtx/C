#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

////1 �ַ�������� fputc д(����)
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

////2 �ı������뺯�� fputs
//void my_fputs()
//{
//	//��
//	FILE* pf = fopen("test.txt", "w");//w -> a
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		perror("fopen");//���Լ�����
//		return 1;
//	}
//	//дһ��
//	fputs("hello bit\n", pf);//����ļ������ݻ�����ԭ������
//							//���뱣��ԭ���ı��������٣����ļ�����ʽΪ'a'
//	fputs("hello bit\n", pf);
//	fclose(pf);
//	pf = NULL;
//}

////3 ��ʽ�����뺯�� fprintf
//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};
//void my1_fprintf()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	//��
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д
//	fprintf(pf, "%s %d %f", s.arr, s.age, s.scorce);
//	fclose(pf);
//	pf = NULL;
//}

////4 ���������� fread
//struct S
//{
//	char arr[10];
//	int age;
//	float scorce;
//};
//void my_fwrite()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	FILE* pf = fopen("test.txt", "wb");//�Զ�������ʽд���ļ���
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�Զ����Ʒ�ʽд
//	fwrite(&s, sizeof(struct S), 1, pf);//�洢���Ƕ����Ʒ�ʽ
//		//����   ���ݵĴ�С    ���� д����ļ�
//	fclose(pf);
//	pf = NULL;
//}

//5