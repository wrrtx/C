#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ϰ��
////1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);//ptr�൱��a[5]�����ķ�ʽ����
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	//����Ľ����ʲô��
//
//	return 0;
//}

////2
////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	//ָ�����;�����ָ�������
//	printf("%p\n", p + 0x1);//0x100014 �൱��+20
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001 �൱��ǿ������ת�������ͱ���
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004 �൱��ǿ������ת������ָ�룬4���ֽ�
//
//	return 0;
//}

////3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	//С�� : 01000000 02000000 03000000 04000000
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//0x0012ff44 -> int+1 -> 0x0012ff45
//	//���ʵ���00 00 00 02
//	//0x02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);//4  /  2 00 00 00
//
//	return 0;
//}

////4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//���ű��ʽ��ѡ���ұߵ����֣�a[0][0]=1,a[0][1]=3
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//
//	return 0;
//}

////5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//FFFFFFFC  -4
//	//-4�ĵ�ַ
//
//	return 0;
//}

////6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	//��ȡ�����������ַ��+1����10�ĵ�ַ����
//	int* ptr2 = (int*)(*(aa + 1));
//	//��ȡ����һ�еĵ�ַ��+1����ָ��6�ĵ�ַ���൱��aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10  5
//
//	return 0;
//}

////7
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//
//	return 0;
//}

//8
//�Ե�ַ++p��ı�
//��p[-1]�Ⲣû�иı�
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT  **(cpp+1)
	printf("%s\n", *-- * ++cpp + 3);//ER  *(*(cpp+1)-1)+3
	printf("%s\n", *cpp[-2] + 3);//ST  **(cpp-2)+3
	printf("%s\n", cpp[-1][-1] + 1);//EW  *(*(cpp-1)-1)+1

	return 0;
}