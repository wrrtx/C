#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 �ַ�ָ��
//int main()
//{
//	char ch = 'q';
//	char* pc = &ch;
//
//	char* ps = "hello bit";
//	//�������ǰ�"hello bit"����ַ��������ַ��ĵ�ַ�洢����ps��
//	printf("%c\n", *ps);//h
//	char arr[] = "hello bit";
//	//�������ǰ�"hello bit"����ַ�������arr��
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//
//	*ps = 'w';
//	//�˴��Ĳ��ˣ���Ϊ*ps�ǳ����ַ���
//
//	return 0;
//}

////����2 ��ϰ
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	//�����ַ���
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//��ӡ���
//
//	//�˴���ʵֻ��һ���ռ����"hello bit."��str3��str4��ָ��ÿռ�
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");//��ӡ���
//	else
//		printf("str3 and str4 are not same\n");
//
//	//��֤
//	printf("%p\n", str3);
//	printf("%p\n", str4);
//	//��ַ��ͬ
//
//	return 0;
//}

////����3 ָ������
//int main()
//{
//	//ָ������
//	//���� - �����д�ŵ���ָ��(��ַ)
//	int* arr1[3];//�������ָ������� 
//
//	//int a = 10; 
//	//int b=20; 
//	//int c=30;
//	//int* arr[3] = { &a, &b, &c }; 
//	////��д�����ã�û��Ӧ�ó������ټ�
//	//int i = 0;
//	//for (i = 0; i < 3; i++) 
//	//{
//	//	printf("%d ", *(arr[i]));
//	//}
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//			////Ҳ����д��
//			//printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////����4 ����ָ�붨�� - ��ָ�������ָ��
////����ָ�� - ��ָ�����͵�ָ��
////�ַ�ָ�� - ��ָ���ַ���ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	//�ó�����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5 };
//							//arr - ����������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ
//	int(*parr)[10] = &arr;	//ȡ����������ĵ�ַ
//							//parr����һ������ָ�� - ���д�ŵ��������ַ
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//
//	return 0;
//}

////����5 ����ָ���� &arr��arr����
////�ع�֪ʶ��
////�������������Ԫ���ĵ�ַ��������2�����⣺
////1.sizeof(������)- ��������ʾ�������飬����������������С����λ���ֽ�
////2.&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);	
//	printf("%p\n", &arr);//����һ������Ϊָ��ĵ�ַ��ͬ
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;//��������Ͳ�ͬ
//
//	printf("%p\n", p1);		//006FFBD8
//	printf("%p\n", p1 + 1);	//006FFBDC  ���4�ֽ�
//
//	printf("%p\n", p2);		//006FFBD8
//	printf("%p\n", p2 + 1);	//006FFC00  ���40�ֽ�
//	
//	return 0;
//}

////����6 ����ָ���ʹ��1
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�򵥣�����
//	int* p = arr;
//
//	int(*pa)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p,��������һ���������д����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//
//	return 0;
//}

////����7 ����ָ���ʹ��2
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//void print2(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6 }, { 3,4,5,6,7 } };
//	//��һ��д��
//	print1(arr, 3, 5);
//	//�ڶ���д��
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//����ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print2(arr, 3, 5);
//	return 0;
//}
//���:
//int arr[5];//��������
//int* parr1[10];//����ָ�������
//int(*parr2)[10];//����ָ�룬��ָ���ܹ�ָ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int
//int(*parr[10])[5];	//parr3��һ���洢����ָ�������
//					//���������ܹ����10������ָ��
//					//ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�ÿ��Ԫ����int����

////����8 ���������ָ����� - һά���鴫��
//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int* arr)//ok
//{}
//void test2(int* arr[20])//ok
//{}
//void test2(int** arr)//ok
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

////����9 ���������ָ����� - ��ά���鴫��
//void test(int arr[3][5])//ok
//{}
//void test(int arr[][])//no���в�����ʡ��
//{}
//void test(int arr[][5])//ok
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//no
//{}
//void test(int* arr[5])//no
//{}
//void test(int(*arr)[5])//ok
//{}
//void test(int** arr)//no
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//���ﴫ�˵�һ�еĵ�ַ
//}

////����10 ���������ָ����� - һ��ָ�봫��
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("*d ", *(ptr + i));
//	}
//}
//
//void test(char* p)
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p��һ��ָ��
//	print(p, sz);
//
//	char ch = 'w';
//	char* pl = &ch;
//	test(&ch);
//	test(pl);
//
//	return 0;
//}

//����10 ���������ָ����� - ����ָ�봫��
void test(int** p2)
{
	**p2 = 20;
}
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	test(ppa);
	test(&pa);//��һ��ָ���ַҲ����
	printf("%d\n", a);//��ӡ20

	//�����һ��ָ�������Ҳ����
	int* arr[10] = { 0 };
	test(arr);

	return 0;
}