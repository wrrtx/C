#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

////1 �ļ��Ĵ򿨺͹ر� fopen fclose
////�����ļ� �����ļ�
//int main()
//{
//	//��
//	//1
//	FILE* pf1 = fopen("test.txt", "w");
//	//2
//	FILE* pf = fopen("c:\\Users\\w2608\\Desktop\\shuju.txt", "r");//ע��Ҫת���ַ� '\'
//	//Ҫ����Ƿ�򿪳ɹ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//�����򷵻�1
//	}
//	//����
//	//���ļ�
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;//��ֹ����Ұָ��
//
//	return 0;
//}

//��
//FILE*
//
//printf
//scanf
//
//�κ�һ��C����ֻҪ���������ͻ�Ĭ�ϴ�3����:
//FILE* stdin - ��׼�����������̣�
//FILE* stdout - ��׼���������Ļ��
//FILE* stderr - ��׼����������Ļ��
//
//�ļ�˳���д
//
////2 �ַ������������ fputc fgetc
//int main()
//{
//	//д�ļ� fputc
//	extern void my_fputc();
//	my_fputc();
//
//	//���ļ� fgetc
//	extern void my_fgetc();
//	my_fgetc();
//
//	return 0;
//}

////3 �ı�������������� fputs fgets
//int main()
//{
//	//д�ļ� fputc
//	extern void my_fputs();
//	my_fputs();
//	
//	//���ļ� fgetc
//	extern void my_fgets();
//	my_fgets();
//	
//	return 0;
//}

////4 ��ʽ������������� fscanf  fprintf
//int main()
//{
//	//д fprintf
//	extern void my1_fprintf();
//	my1_fprintf();
//	
//	//�� fscanf
//	extern void my1_fscanf();
//	my1_fscanf();
//
//	return 0;
//}

////5 ����������������� fwrite fread ֻ���ļ�
//int main()
//{
//	//�Զ����Ʒ�ʽд fwrite
//	extern void my_fwrite();
//	my_fwrite();
//
//	//�Զ����Ʒ�ʽ�� fread
//	extern void my_fread();
//	my_fread();
//
//	return 0;
//}

////6 �Աȸ��麯��
////scanf		����Ա�׼����ĸ�ʽ���������
////printf	����Ա�׼����ĸ�ʽ��������
////
////fscanf	����������������ĸ�ʽ���������
////fprintf	���������������ĸ�ʽ��������
////
////�����ǲ������
////sscanf	�Ǵ�һ���ַ�����ת����һ����ʽ��������
////sprintf	��һ����ʽ��������д���ַ����У������ǰ�һ����ʽ��������ת�����ַ���
//struct S
//{
//	char arr[20];
//	int age;
//	float scorce;
//};
//int main()//���л��ͷ����л���Ӧ��
//{
//	struct S s = { "zhangsan",20,55.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//��s�и�ʽ������ת�����ַ����ŵ�buf��
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.scorce);
//	printf("�ַ���: %s\n", buf);//"zhangsan 20 55.500000"
//
//	//���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.scorce));
//	printf("��ʽ��: %s %d %f\n", tmp.arr, tmp.age, tmp.scorce);
//
//	return 0;
//}

////7 �ļ��������д fseek ftell rewind
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//int ch = fgetc(pf);//a
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);//b
//	//printf("%c\n", ch);
//
//	//fseek �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//	//ftell �����ļ�ָ���������ʼλ�õ�ƫ����(���㿪ʼ)
//	printf("%d\n", ftell(pf));//3
//
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//	printf("%d\n", ftell(pf));//6
//
//	//rewind ���ļ�ָ���λ�ûص��ļ�����ʼλ��
//	rewind(pf);
//	printf("%d\n", ftell(pf));//0
//
//	fclose(pf);
//	pf = NULL;
//}

////8 �ı��ļ��Ͷ������ļ�
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////9 ������ʹ�õ�feof
////Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β����
////���������ж��ļ��Ƿ����
////�жϽ����ı�־
////fgetc -- EOF
////fgets -- NULL
////fread -- ����ֵ�Ƿ�С��ʵ��Ҫ������
//enum { SIZE = 5 };
//int main(void)
//{
//	////1 �ı��ļ�������
//	//int c; // ע�⣺int����char��Ҫ����EOF
//	//FILE* fp = fopen("test.txt", "r");
//	//if (!fp) {
//	//	perror("File opening failed");
//	//	return EXIT_FAILURE;
//	//}
//	////fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	//while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	//{
//	//	putchar(c);
//	//}
//	////�ж���ʲôԭ�������
//	//if (ferror(fp))
//	//	puts("I/O error when reading");
//	//else if (feof(fp))
//	//	puts("End of file reached successfully");
//	//fclose(fp);
//
//	//2 �������ļ�������
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//	fwrite(a, sizeof * a, SIZE, fp); // д double ������
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//
//	return 0;
//}

//10 �ļ�������
#include <windows.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;

	return 0;
}