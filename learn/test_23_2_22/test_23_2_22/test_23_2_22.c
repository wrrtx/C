#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 ����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10; 
//	int* pa = &a;
//	char ch = 'w'; 
//	char* pc = &ch;
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//	// 
//	//����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//	//
//	//pf����һ������ָ�����
//	int (*pf)(int, int) = &Add;
//	
//	printf("sp\n", &Add);
//	printf("sp\n", Add);//����һ��
//
//	return 0;
//}

////2 ��ϰ - ģ������д��
//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//
//	return 0;
//}

////3 ���ú���ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	//����
//	int (*pf)(int, int) = Add;//Add == pf
//
//	int ret = (*pf)(3, 5);
//	int ret1 = Add(3, 5);//�����д��
//	int ret2 = pf(3, 5);//���Ҳ��8
//	//��˵����*��������ֻ��һ�����裬����������
//
//	//int ret3 = *pf(3, 5);//����д���Ǵ���� err
//
//	printf("%d\n", ret);
//
//	return 0;
//}

////4 �Ķ���������
//int main()
//{
//	//����1
//	//����0��ַ���ĺ������޲Σ���������Ϊvoid
//	(*(void (*)())0)();//��0ǿ������ת���ɺ���ָ��(void (*)())������(*)ʹ�ã�
//					   //��Ϊû�������������ұߵ�����û������
//
//	//����2
//	//signal��һ����������int��void(*)(int)�ֱ���signal��������������
//	//�ú���ָ��ָ��һ������Ϊint������������void�ĺ���
//	//signal���ص���һ������ָ������void (*)(int)
//	//signal��һ����������
//	void (*signal(int, void(*)(int)))(int);
//
//	//typedef - �����ͽ����ض���
//	typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//	//typedef unsigned int uint;//��ȣ�unsigned int == uint
//	pfun_t signal(int, pfun_t);//��δ���ȼ��ڴ���2
//
//	return 0;
//}

////5 ����ָ������
////����ָ������ - ��ź���ָ�������
////����ָ�� int*   
////����ָ������ int* arr[5];
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//
//{
//	int(*pf1)(int��int) = Add;
//	int(*pf2)(int��int) = Sub;
//	int (*pfarr[2])(int, int) = { Add,Sub };//pfarr���Ǻ���ָ������
//
//	return 0;
//}

////6 ���ú���ָ������
////������ - �������ͱ����ļӼ��˳�
////
//void menu()
//{
//	printf("*************************\n");
//	printf("****  1:add   2:sub  ****\n");
//	printf("****  3:mul   4:div  ****\n");
//	printf("****      0.exit     ****\n");
//	printf("*************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int x = 0, y = 0;
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//
//		//ʹ�ú���ָ������
//		if (input >= 1 && input <= 4)
//		{
//			//pfarr���Ǻ���ָ������
//			//����д������ ת�Ʊ� -- ��C��ָ�롷
//			int (*pfarr[5])(int, int) = { NULL,add,sub,mul,div };
//			printf("����2����������");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("���˳�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//
//		//һ��˼·��������Ҫ���ʱ��̫����
//		/*switch (input)
//		{
//		case 1:
//			printf("����2����������");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("����2����������");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("����2����������");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("����2����������");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}

////7 ָ����ָ�������ָ��
////����ָ������� - ����
////ȡ������ָ������ĵ�ַ
//// 
////�������� 
//int arr[5];
//int(*p1)[5] = &arr;
////
////����ָ�������
//int* arr[5];
//int* (*p2)[5] = &arr;
////p2��ָ������ָ�����顿��ָ��
//
////����ָ������ -- &����ָ������
//int(*p)(int, int);//����ָ��
//int(*p2[4])(int, int);//����ָ�������
//int(*(*p3)[4])(intint) = &p2;//ȡ�����Ǻ���ָ������ĵ�ַ
//							 //p3����һ��ָ�򡾺���ָ������顿��ָ��
//
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//����ָ��pfun
//	void (*pfun)(const char*) = test;
//	//����ָ�������pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//ָ����ָ������pfunArr��ָ��ppfunArr
//	void (*(*ppfunArr)[5])(const char*) = &pfunArr;
//
//	return 0;
//}

////8 �ص�����
////�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��
////�����������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú���
////��ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ
//void menu()
//{
//	printf("*************************\n");
//	printf("****  1:add   2:sub  ****\n");
//	printf("****  3:mul   4:div  ****\n");
//	printf("****      0.exit     ****\n");
//	printf("*************************\n");
//}
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int calc(int (*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("����2����������");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			ret = calc(add);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			ret = calc(sub);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			ret = calc(mul);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			ret = calc(div);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////9 �ûص�����ʵ��qsort����
////ð������ - ����
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int f = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0, f = 0; j < sz - i - 1; j++)
//		{
//			f = 1;
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (f == 0)
//			break;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//
//int main()
//{
//	//����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

////10 ʹ��qsort����
////void* base   ��Ŵ����������е�һ������ĵ�ַ
////size_t num   ������������ĸ���
////size_t size  ��������һ��Ԫ�صĴ�С����λ���ֽ�
////int (*compar)(const void*, const void*)   ����ָ�룬�����Ƚϴ����������е�����Ԫ�صĺ���
////											����0����һ�����ڵڶ���
////											����0����һ�����ڵڶ���
////											С��0����һ��С�ڵڶ���
////void qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
////
//#include <stdlib.h>
//int compar_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//
//void test1()
//{
//	//�������������
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compar_int);
//	print_arr(arr, sz);
//	printf("\n");
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//#include <string.h>
//int sort_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test2()
//{
//	//ʹ��qsort��������ṹ������
//	struct stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//����������
//	qsort(s, sz, sizeof(s[0]), sort_age);
//	//����������
//	qsort(s, sz, sizeof(s[0]), sort_name);
//}
//
//int main()
//{
//	//����
//	test1();
//	test2();
//	//����Ļ��ͰѺ������ز��ֱ��e2-e1
//
//	return 0;
//}

//11 ģ��qsortʵ��һ��ð�������ͨ���㷨
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//���������ֽ�
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}

void test3()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	print_arr(arr, sz);
}

int main()
{
	//����
	test3();

	return 0;
}