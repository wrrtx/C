#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1  ��ϰ
//sizeof(������) - ��������ʾ��������,���������������Ĵ�С
//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���е�����������������Ԫ�صĵ�ַ
int main()
{
	/*//һά���� 
	int a[] = { 1,2,3,4 };//4*4=16
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));// 4/8  a+0�ǵ�һ��Ԫ�ص�ַ ��sizeof(a+0)������ǵ�ַ��С
	//printf("%d\n", sizeof(*a));	//4 *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�ش�С
	//printf("%d\n", sizeof(a + 1));// 4/8 a+1�ǵڶ���Ԫ�ص�ַ��sizeof(a+1)������ǵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(a[1]));//4 ������ǵڶ���Ԫ�ش�С
	//
	printf("%d\n", sizeof(&a));// 4/8 &a��Ȼ�����������ַ��������һ����ַ
	printf("%d\n", sizeof(*&a));//16 &a -- int(*p)[4] = &a; �ҵ���ַ���ҵ�����
	printf("%d\n", sizeof(&a + 1));// 4/8  &a+1 ���������ռ�ĵ�ַ
	printf("%d\n", sizeof(&a[0]));// 4/8  ��ַ
	printf("%d\n", sizeof(&a[0] + 1));//4   ��ַ
	*/

	/*//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };//24  //6 4 '6' 1 4 4 4
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));// 4/8
	//printf("%d\n", sizeof(*arr));//1  *arr�����ҵ�arr[0]���Ԫ��
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8
	//
	//strlenҪ����\0����ֹͣ��Ҫע���ַ������ַ�����,���Ҵ��Ĳ���һ�����ַ�ָ��,�������ַ
	//sj sj err err sj sj sj
	printf("%d\n", strlen(arr));//sj
	printf("%d\n", strlen(arr + 0));//sj
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//sj
	printf("%d\n", strlen(&arr + 1));//sj-6
	printf("%d\n", strlen(&arr[0] + 1));//sj-1
	*/

	/*char arr[] = "abcdef";//7  //7 '7' 1 1 4 4 4
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));// 4/8  arr+0�ǵ�ַ
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8
	//
	//6 6 err err 6 sj 5
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//sj
	printf("%d\n", strlen(&arr[0] + 1));//5
	*/

	/*char* p = "abcdef";//7  //'7' '6' 1 1 4 4 4
	//printf("%d\n", sizeof(p));// 4/8
	//printf("%d\n", sizeof(p + 1));// 4/8  ���ǵ�ַ
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));// 4/8
	//printf("%d\n", sizeof(&p + 1));// 4/8
	//printf("%d\n", sizeof(&p[0] + 1));// 4/8
	//
	//6 5 err err '6' sj 5
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//sj	 ��p�����ַ���󿴣��������ַ������ַ�����
	printf("%d\n", strlen(&p + 1));//sj  ��ǰ���sjû�й�ϵ����Ϊ��֪��ǰ��sj�Ĵ�С
	printf("%d\n", strlen(&p[0] + 1));//5
	*/

	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48 ��ʾ�������� 3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 ��ʾ�����һ�еĴ�С
	printf("%d\n", sizeof(a[0] + 1));// 4/8  a[0]��Ϊ��������û�е�������sizeof�ڲ���û��ȡ��ַ&
									 //����a[0]�ǵ�һ�е�һ��Ԫ�صĵ�ַ
									 //a[0]+1 ���� a[0][1]�ĵ�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//4  a[0][1]��Ԫ�ش�С
	printf("%d\n", sizeof(a + 1));// 4/8 a�����ά������Ԫ�ص�ַ���ڴ˱�ʾ��һ�еĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));//16 ��ʾ�ڶ��еĵ�ַ��*�ͱ�ʾ�ڶ��д�С
	printf("%d\n", sizeof(&a[0] + 1));// 4/8
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16 a�����ά������Ԫ�ص�ַ��*�����һ�д�С
							   //*a  --  *(a+0)  --  a[0]
	printf("%d\n", sizeof(a[3]));//16 Խ���ˣ����ǵ�ͬ��*(a+3),��С�����͹涨 int [4]
	printf("%d\n", sizeof(a[-1]));//16 Ҳ��ֻ�������ͣ���ע�⣬����Ǵ��

	return 0;
}

////2 �ع�
//int main()
//{
//	short a = 5;
//	int s = 4;
//	//1.sizeofֻ�����ͣ��������
//	//2.sizeof��()���治���������
//	printf("%d\n", sizeof(a = s + 6));//2
//	printf("%d\n", a);//5
//
//	return 0;
//}