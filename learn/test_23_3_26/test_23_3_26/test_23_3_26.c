#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���Ȳ������Ƶ��ַ�������

////1 strlen
//#include <string.h>
//#include <assert.h>
////һ�������ַ���ʵ��
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c' };
//	//int len = strlen(arr1);
//	//int len1 = strlen(arr2);
//	//printf("%d\n%d", len, len1);//3 suiji
//
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

////2 ע��strlen����ֵ���޷�������
//#include <string.h>
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

////3 strcpy
//#include <string.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { '\0' };//20->5
//	//arr = "hello";//err
//	strcpy(arr, "hello");
//
//	//char arr1[] = { 'a','b','c' };
//	//strcpy(arr, arr1);//err
//
//	//char* p = "hello world";
//	//strcpy(arr, p);//Ŀ��ռ�Ƚ�Сʱ������ȥ�ˣ���������
//
//	//char* str = "######################";
//	//strcpy(str, p);//����
//
//	printf("%s\n", arr);
//	printf("%s\n", my_strcpy(arr, "abcd"));
//
//	return 0;
//}

////4 strcat
//#include <string.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.�ҵ�Ŀ���ַ�����\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.׷��Դ�ַ���
//	while (*dest++ = *src++);
//	//3.����Ŀ��ռ����ʼλ��
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char arr1[] = "world";
//
//	printf("%s\n", my_strcat(arr, arr1));
//
//	strcat(arr, arr1);//�ַ���׷�ӣ����ӣ�
//	printf("%s\n", arr);
//
//	return 0;
//}

////5 strcatע��
//#include <string.h>
//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);
//	printf("%s\n", arr);//����,��Ϊ\0�Ѿ���������
//
//	return 0;
//}

////6 strcmp
//#include <string.h>
//#include <assert.h>
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	//if (*s1 > *s2)
//	//	return 1;
//	//else
//	//	return -1;
//	return *s1 - *s2;
//}
//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";
//	/*if (p > q)
//		printf(">\n");
//	else
//		printf("<=\n");//������*/
//	/*if ("obc" > "abcdef")
//		printf(">\n");//������*/
//	int ret = strcmp(p, q);
//	printf("%d\n", ret);//1
//	//str1>str2 ����ֵ����0
//	//str1=str2 ����ֵ����0
//	//str1<str2 ����ֵС��0
//	if (ret > 0)
//		printf("p>q\n");
//	else if (ret == 0)
//		printf("p=q\n");
//	else
//		printf("p<q\n");
//
//	ret = my_strcmp(p, q);
//	printf("%d\n", ret);
//
//	return 0;
//}



//���������Ƶ��ַ�������

////7 strncpy
//#include <string.h>
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);//���������೤,�ȱ�������ʱ�����\0����
//	printf("%s\n", arr1);//qwcdef
//
//	return 0;
//}

////8 strncat
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 4);//���������ݺ�ֻ��һ��\0
//	printf("%s\n", arr1);//hello worl
//
//	return 0;
//}

////9 strncmp
//#include <string.h>
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwer";
//	int ret = strncmp(p, q, 3);
//	printf("%d\n", ret);//0
//
//	return 0;
//}



////10 strstr
//#include <string.h>
//#include <assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* cp = str1;
//	const char* s1 = NULL, * s2 = NULL;
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//			s1++, s2++;
//		if (*s2 == '\0')
//			return (char*)cp;
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbbcdefghijkl";
//	char arr2[] = "bbcd";
//	////��arr1�в����Ƿ����arr2
//	////�ҵ��ͷ��ص�ַ���Ҳ������ؿ�ָ��
//	//char* ret = strstr(arr1, arr2);
//	//if (ret == NULL)
//	//	printf("û�ҵ�\n");
//	//else
//	//	printf("�ҵ���: %s\n", ret);
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("û�ҵ�\n");
//	else
//		printf("�ҵ���: %s\n", ret);
//
//	return 0;
//}

////11 strtok �ָ�
////zpw@bitedu.tech
////zpw
////bitedu
////tech
//#include <string.h>
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	char tmp[50] = { '\0' };
//	strcpy(tmp, arr);
//
//	char* ret = NULL;
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

////12 strerror ���ÿ⺯��ʧ�ܷ��ش�����
////   perror ��Ӧ��ֱ�Ӵ�ӡ������Ϣ
//#include <string.h>
//#include <errno.h>
////int errno; ȫ�ִ��������
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//
//	FILE* pf = fopen("test.tex", "r");
//	//�򿪳ɹ����ض�Ӧָ��
//	//��ʧ�ܷ���NULL
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		//ֱ��ʹ��,��ֱ��ʹ��errno����˲��ô��κβ���,ͬʱ�Զ��Ѵ�����ת������Ϣ
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

////13 �ַ����ຯ��isdigit��islower
//#include <ctype.h>
//int main()
//{
//	char ch = 'a';
//	//���򷵻ط�0��ֵ�������򷵻�0
//	int ret = isdigit(ch);//�����ַ�
//	int ret1 = islower(ch);//Сд��ĸ�ַ�
//	printf("%d\n%d\n", ret, ret1);
//
//	return 0;
//}

////14 �ַ�ת������
//#include <ctype.h>
//int main()
//{
//	char arr[20] = { '\0' };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//		++i;
//	}
//
//	return 0;
//}

////15 �ڴ��������memcpy	�ڴ濽��	
//#include <string.h>
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	/*memcpy(arr2, arr1, 20);*/
//	//�Լ����ݸ��Լ�������⣬Ӧ�ÿ������ص����ڴ�
//	my_memcpy(arr2, arr1, 5);//20�Ƕ����ֽڣ�5����20�ֽ�
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

////16 �ڴ�������� memmove �����ڴ��ص�����
//#include <string.h>
//#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//ǰ->��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*memmove(arr1 + 2, arr1, 20);*/
//	my_memmove(arr1, arr1 + 2, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

////17 �ڴ�������� memcmp �ڴ�Ƚ�
//#include <string.h>
//int main()
//{
//	float arr1[] = {1.0,2.0,3.0,4.0};
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	//����ֵ��strcmp����ֵһ��
//	printf("%d\n", ret);
//
//	return 0;
//}

//18 �ڴ�������� memset
#include <string.h>
int main()
{
	int arr[10] = { 0 };//20���ֽ����ó�1
	memset(arr, 1, 20);
	for (int i = 0; i < 10; i++)
		printf("%p\n", arr[i]);

	return 0;
}