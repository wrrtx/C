#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����
//����ķ��뻷����ִ�л�����
//��ANSI C���κ�һ��ʵ���У�����������ͬ�Ļ�����
//��1���Ƿ��뻷���������������Դ���뱻ת��Ϊ��ִ�еĻ���ָ�
//��2����ִ�л�����������ʵ��ִ�д��롣

////1 ���뻷��
////Դ�ļ� -> ������ -> Ŀ���ļ�(/���ӿ�) -> ������ -> ��ִ�г���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//test_23_5_19.obj ����Ŀ���ļ�
//	//Linux gcc -- xxx.o
//
//	return 0;
//}

////2 �������
////test.c -> ���� -> ���� -> test.exe
////���룺
////1__Ԥ�����ı���������
////	1.ͷ�ļ��İ��� 
////	2.define������ŵ��滻������ɾ��������� 
////	3.ע��ɾ��
////2__���루�Ѵ���ת���ɻ����룩��
////	1.�����﷨�������ʷ����������Ż��ܡ��������
////	2.���Ż��ܣ���ȫ�ַ��Ż��ܳ�����Add��g_val��main��
////3__��ࣺ
////	1.�ѻ�����ת���ɶ�����ָ��
////	2.�γɷ��ű������Ź���һ����ַ��(Add��Add��main)
////���ӣ�
////1__�ϲ��α���ͬ���ļ����кϲ�
////2__���ű�ĺϲ����ض�λ��ɸѡ��ַ�ϲ���һ���������ĵ�ַ�ᱻɸ��
////
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//������Ա������������

//3 ���л���
//����ִ�еĹ��̣�
//1__������������ڴ��С����в���ϵͳ�Ļ����У�һ������ɲ���ϵͳ��ɡ��ڶ����Ļ����У�����
//������������ֹ����ţ�Ҳ������ͨ����ִ�д�������ֻ���ڴ�����ɡ�
//2__�����ִ�б㿪ʼ�����ű����main������
//3__��ʼִ�г�����롣���ʱ�����ʹ��һ������ʱ��ջ��stack�����洢�����ľֲ������ͷ���
//��ַ������ͬʱҲ����ʹ�þ�̬��static���ڴ棬�洢�ھ�̬�ڴ��еı����ڳ��������ִ�й���
//һֱ�������ǵ�ֵ��
//4__��ֹ����������ֹmain������Ҳ�п�����������ֹ��

////4 Ԥ�������
////__FILE__   ���б����Դ�ļ�
////__LINE__   �ļ���ǰ���к�
////__DATE__   �ļ������������
////__TIME__   �ļ��������ʱ��
////__STDC__   �����������ѭANSI C����ֵΪ1������δ����
//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return EXIT_FAILURE;//1
//		//EXIT_SUCCESS -- 0
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "file:%s line=%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}//��¼��־
//	fclose(pf);
//	pf = NULL;
//
//	//printf("%d\n", __STDC__);//����û���������
//	//��gcc���ϸ����ر�׼�ģ�������gcc������Ϊ׼
//
//	return 0;
//}

////5 #define �����ʶ��
//#define MAX 1000//���ܼӷֺţ������滻Ϊ 1000;
//#define STR "hello bit"
//#define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\ttime:%s\n" ,\
//							__FILE__,__LINE__ , \
//							__DATE__,__TIME__ )
//							//���з�������ʶ���У������з����治�����κ��ַ���������
//int main()
//{
//	int m = MAX;
//	printf("%d\n", MAX);//Ԥ������MAXȫ���滻Ϊ1000
//	printf("%s\n", STR);//����ͬ��
//
//	return 0;
//}

////6 #define �����
////#define ���ư�����һ���涨������Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ������
////1. �������#define �����п��Գ�������#define����ķ��š����Ƕ��ں꣬���ܳ��ֵݹ顣
////2. ��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ�����������
//#define SQUARE(X) ((X)*(X))	//���ֺ�����Ҫ����һ��д���ʱ������������
//#define DOUBLE(Y) ((Y)+(Y))	//ע�������費��Ҫ��һ����Ҫʡ����
//int main()
//{
//	int r = SQUARE(5);
//	int r1 = SQUARE(5 + 1);//�����û���ţ����� 5 + 1 * 5 + 1
//	printf("%d\n", r);
//	printf("%d\n", r1);
//
//	int r2 = 10 * DOUBLE(3 * 2);//���������������ţ��͵���10*(3*2)+(3*2)=66
//	printf("%d\n", r2);
//
//	return 0;
//}

////7 #
//#define PRINT(N) printf("the value of "#N" is %d\n", N)//#N �൱�� "N",��Ϊһ���ַ���
//#define PRINT1(N, FORMAT) printf("the value of "#N" is "FORMAT"\n", N)
//
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	//printf("the value of b is %d\n", b);//�ú��װ
//	PRINT(a);
//	PRINT(b);
//
//	//����ӡ
//	float c = 3.14f;
//	PRINT1(a, "%d");
//	PRINT1(c, "%f");
//
//	return 0;
//}

////8 ##
//#define CAT(Class, Num) Class##Num//���������źϲ�������궨��ӷ�����ı�Ƭ�δ�����ʶ��
//
//int main()
//{
//	int Class106 = 100;
//	printf("%d\n", CAT(Class, 106));
//	printf("%d\n", Class106);//��������൱�ڴ˾���
//
//	return 0;
//}

////9 �������õĺ����
//#define MAX(a, b) ((a)>(b)?(a):(b))
//
//int main()
//{
//	//int a = 1;
//	//int b = a + 1;//a��ֵ����
//	//b = ++a;//a��ֵҲ�����ı�
//
//	int a = 5, b = 4;
//	int m = MAX(a++, b++);
//	//		   ((a++)>(b++)?(a++):(b++))
//	//	6		 5   > 6   ? 6->7
//	printf("m=%d\n", m);//6
//	printf("a=%d b=%d\n", a, b);//7 5
//
//	return 0;
//}

////10 ��ͺ���
////ϰ������Լ�����Ѻ���ȫ����д,��������Ҫȫ����д
//#define MAX(x, y) ((x)>(y)?(x):(y))
//#define MALLOC(num, type) (type*)malloc((num)*sizeof(type))
//
//int Max(int x, int y)
//{
//	return (x) > (y) ? (x) : (y);
//}
//
//int main()
//{
//	int m = MAX(2, 3);
//	//->m = (x) > (y) ? (x) : (y);
//	int m1 = Max(2, 3);
//	//С�ʹ����Ҳ����׳���Ŀ����ú�
//	//�����Ҹ��ӣ��������׳���Ľ����ú���
//	
//	//malloc(40);Ҫ��������
//	int* p = MALLOC(10, int);
//
//	return 0;
//}

////11 #undef
//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	//printf("%d\n", M);//����
//
//	return 0;
//}

////12 ��������
//#include <stdio.h>
////#define __DEBUG__//ע�͵�֮��for�е�printf���ᱻִ��
//#define M 3
////#define symbol
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d\n", arr[i]);//Ϊ�˹۲������Ƿ�ֵ�ɹ���
//#endif //__DEBUG__		//���߶��ߺ��Ǹ���һ��
//	}
//
////1.�������ʽ
//#if 0
//	printf("hehe\n");
//#endif
//
////2.�����֧����������
//#if M<5
//	printf("M<5\n");
//#elif M==5
//	printf("M==5\n");
//#else
//	printf("M>5\n");
//#endif
//
////3.�ж��Ƿ񱻶���
//#if !defined(symbol) //4==5������
////!��һ������
////Ҳ����д�� #ifdef symbol,������#ifndef symbol
//	printf("symbol\n");
//#endif
//
////4.Ƕ��ָ��
//#if defined(OS_UNIX)
//	#ifdef OPTION1
//		unix_version_option1();
//	#endif
//	#ifdef OPTION2
//		unix_version_option2();
//	#endif
//#elif defined(OS_MSDOS)
//	#ifdef OPTION2
//		msdos_version_option2();
//	#endif
//#endif
//
//
//	return 0;
//}

////13 �ļ�����
//#include "test.h"
//#include "test.h"
//#include "test.h"
//#include "test.h"
////1
////������
///*#ifndef __TEST_H__
//#define __TEST_H__
//int Add(int x, int y)
//{
//	return x + y;
//}
//#endif*/
////��ֹͷ�ļ�������ظ��İ���
//
////2
///*#pragma once//���ϵı�������������
//int Add(int x, int y)
//{
//	return x + y;
//}*/
//
////3Ƕ���ļ�����
////��ֹ�ظ���������Ҫ��ÿ��ͷ�ļ���д�������
///*#ifndef __TEST_H__
//#define __TEST_H__
////ͷ�ļ�������
//#endif	//__TEST_H__	*/
//
//// <> ""
////���𣺲��ҵĲ��Բ�ͬ
////	<>ֱ��ȥ��Ŀ¼�²���
////	""��ȥ��������·���²��ң�����Ҳ�������ȥ��Ŀ¼�²���  ����Ч������
//
//int main()
//{
//	int m = Add(3, 4);
//	printf("%d\n", m);
//
//	return 0;
//}
////��������C/C++���ָ�ϡ�
////��C������Ƚ��ʡ�

//14 дһ�������ṹ����ĳ��������׵�ַ��ƫ�ƣ���˵��
//offsetof
//#include <stddef.h>
#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)
struct S
{
	char c1;
	int i;
	char c2;
};
int main()
{
	struct S s = { 0 };
	//printf("%d\n", offsetof(struct S, c1));
	//printf("%d\n", offsetof(struct S, i));
	//printf("%d\n", offsetof(struct S, c2));

	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));

	return 0;
}