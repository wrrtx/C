#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 ��̬�ڴ����
////malloc �ռ俪��ʧ�ܷ��ؿ�ָ��
////free
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//
////�䳤���� c99֧��
////����ָ����С���Ա仯���������ǿ������ĳ���
//int main()
//{
//	int arr[10] = { 0 };//ջ��
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(INT_MAX);//����
//	//����ʧ�ܵ���� INT_MAX
//	if (p == NULL)//һ��Ҫ�ж�
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//�쳣����
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//û��free
//	//�������ڴ�ռ䲻���գ������˳�ʱϵͳ���Զ������ڴ�
//
//	//�ͷ�
//	free(p);
//	p = NULL;//������p�ͷţ�������ָ��ĳ���ڴ��ַ
//	//�������������ڴ�ռ�������������ڵ�ϵͳ�ﵽĳ��ֵ������ֹͣ����
//	//freeһ����malloc���ڴ濪�ٳɶ�ʹ��
//
//	return 0;//��������
//}

////2 ��̬�ڴ����
////calloc = malloc + memset
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//���Զ���ʼ��Ϊ0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ӡ
//	for (int i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	free(p);
//	p = NULL;
//
//	return 0;
//}

////3 ��̬�ڴ����
////realloc => realloc(NULL, 40) = malloc(40)
//#include <string.h>
//#include <stdlib.h>
//#include <errno.h>
//int main()
//{
//	//����
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//����
//	int* ptr = (int*)realloc(p, 8000);//�����þ�ָ����գ���Ϊ��������ʧ��
//	if (ptr != NULL)
//		p = ptr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

////4 ������̬�ڴ����
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	////1.�����ô���
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)//����
//	//{
//	//	return 1;
//	//}
//	//*p = 20;//p������NULL�����ܳ�����
//	//free(p);
//	//p = NULL;
//
//	////2.��̬�ڴ濪�ٿռ��Խ��
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 1;
//	//}
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	p[i] = i;//Խ�����
//	//}
//	//free(p);
//	//p = NULL;
//
//	////3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//int a = 10;
//	//int* p = &a;
//	////����
//	//free(p);//err
//	//p = NULL;
//
//	////4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 1;
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//	//free(p);//�Ҳ���p�ռ�����Ŀռ���
//	//p = NULL;
//
//	////5.��ͬһ�鶯̬�ڴ����ͷ�
//	//int* p = (int*)malloc(100);
//	////����
//	//free(p);//���� p = NULL; ���Խ��
//	////����
//	//free(p);//�ظ��ͷ�
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��
//	////1
//	//void test();
//	//test();
//	//
//	//2
//	int* p = test();
//	//�����ͷ���
//
//	return 0;
//}
//int* test()
//{
//	////1
//	//int* p = (int*)malloc(100);
//	////����
//	//int flag = 0;
//	//scanf("%d", &flag);
//	//if (flag == 5)
//	//	return;
//	//
//	//free(p);
//	//p = NULL;//�ڴ���ղ�����
//
//	//2
//	int* p = (int*)malloc(100);
//	if (p = NULL)
//	{
//		return p;
//	}
//	//����
//	return p;
//}

////5 ��ϰ1
//#include <string.h>
//void GetMemory(char* p)//����ָ�����str��ַ
//{
//	p = (char*)malloc(100);//�ڴ�й¶
//}//û�з��ص�ַ��str�����ǿ�ָ��
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//��str�ĵ�ַ�������ͷ��ڴ�
//	strcpy(str, "hello world");
//	printf(str);//strΪ��ָ�룬�����û����
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

////6 ��ϰ2
//char* GetMemory(void)
//{
//	//����ջ�ռ��ַ������
//	char p[] = "hello world";
//	return p;//�ֲ��������ڴ��ͷ��ˣ�������ܻ�ģ�Ұָ��
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//����
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

////7 ��ϰ3
//#include <string.h>
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//û��free
//}
//int main()
//{
//	Test();
//
//	return 0;
//}

//8 ��ϰ4
#include <stdio.h>
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//�˴�Ӧ�ü��� str = NULL;
	str = NULL;
	if (str != NULL)//str�Ѿ����Ұָ��
	{
		strcpy(str, "world");
		printf(str);//�Ƿ�����
	}
}
int main()
{
	Test();

	return 0;
}