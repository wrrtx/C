#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����1 �ú���ʵ��strcpy
//#include <string.h>
//#include <assert.h>
//////1
////void my_strcpy(char* dest, const char* src)//const����ʹsrc�����ݲ����޸�
////{
////	////1
////	//while (*src != 0)
////	//{
////	//	*dest = *src;
////	//	dest++;
////	//	src++;
////	//}
////	//*dest = *src;
//// 
////	////2
////	//while (*src != 0)
////	//{
////	//	*dest++ = *src;
////	//}
//// 
////    //3
////	assert(src != NULL);//����,�������Ļ�����ߴ�������
////	assert(dest != NULL);
////	while (*dest++ = *src++);
////}
////2
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++);
//
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	////1
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	//2ͨ���鿴strcpy�Ķ������Ż�
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//
//	return 0;
//}

////����2 const����
//int main()
//{
//	////1
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	//2 const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ��������ϻ��Ǳ���
//	const int num = 10;
//	int n = 100;
//	//num = 20;   //err
//
//	//const int* p = &num;
//	////const ����ָ�����ʱ
//	////const �������*����ߣ����ε���*p����ʾָ��ָ��������ǲ���ͨ��ָ��ı�
//	////      ����ָ����������ǿ����޸ĵ�
//	//*p = 20;	//err
//	//p = &n;		//��������
//
//	int* const p = &num;
//	////const ����ָ�����ʱ
//	////const �������*���ұߣ����ε���p����ʾָ������ǲ��ܱ��ı�
//	////      ����ָ��ָ��������ǿ����޸ĵ�
//	*p = 20;	//��������
//	p = &n;		//err
//
//	printf("%d\n", num);
//
//	return 0;
//}

//����3 �ú���ʵ��strlen
#include <assert.h>
size_t my_strlen(const char* dest)//int ���Ի��� size_t ���� unsigned int �޷�������
{
	size_t c = 0;
	assert(dest != NULL);
	//����
	//assert(dest);
	while (*dest++ != '\0')
	{
		c++;
	}
	return c;//����������Զ���Ǹ���
}
int main()
{
	char arr[] = "hello";
	printf("%d\n", my_strlen(arr));

	return 0;
}