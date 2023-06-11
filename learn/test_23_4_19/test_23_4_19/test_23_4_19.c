#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

////1 文件的打卡和关闭 fopen fclose
////程序文件 数据文件
//int main()
//{
//	//打开
//	//1
//	FILE* pf1 = fopen("test.txt", "w");
//	//2
//	FILE* pf = fopen("c:\\Users\\w2608\\Desktop\\shuju.txt", "r");//注意要转义字符 '\'
//	//要清楚是否打开成功
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//错误则返回1
//	}
//	//……
//	//读文件
//
//	//关闭
//	fclose(pf);
//	pf = NULL;//防止出现野指针
//
//	return 0;
//}

//流
//FILE*
//
//printf
//scanf
//
//任何一个C程序，只要运行起来就会默认打开3个流:
//FILE* stdin - 标准输入流（键盘）
//FILE* stdout - 标准输出流（屏幕）
//FILE* stderr - 标准错误流（屏幕）
//
//文件顺序读写
//
////2 字符输入输出函数 fputc fgetc
//int main()
//{
//	//写文件 fputc
//	extern void my_fputc();
//	my_fputc();
//
//	//读文件 fgetc
//	extern void my_fgetc();
//	my_fgetc();
//
//	return 0;
//}

////3 文本行输入输出函数 fputs fgets
//int main()
//{
//	//写文件 fputc
//	extern void my_fputs();
//	my_fputs();
//	
//	//读文件 fgetc
//	extern void my_fgets();
//	my_fgets();
//	
//	return 0;
//}

////4 格式化输入输出函数 fscanf  fprintf
//int main()
//{
//	//写 fprintf
//	extern void my1_fprintf();
//	my1_fprintf();
//	
//	//读 fscanf
//	extern void my1_fscanf();
//	my1_fscanf();
//
//	return 0;
//}

////5 二进制输入输出函数 fwrite fread 只限文件
//int main()
//{
//	//以二进制方式写 fwrite
//	extern void my_fwrite();
//	my_fwrite();
//
//	//以二进制方式读 fread
//	extern void my_fread();
//	my_fread();
//
//	return 0;
//}

////6 对比各组函数
////scanf		是针对标准输入的格式化输入语句
////printf	是针对标准输出的格式化输出语句
////
////fscanf	是针对所有输入流的格式化输入语句
////fprintf	是针对所有输出流的格式化输出语句
////
////以下是不针对流
////sscanf	是从一个字符串中转化出一个格式化的数据
////sprintf	把一个格式化的数据写到字符串中，本质是把一个格式化的数据转换成字符串
//struct S
//{
//	char arr[20];
//	int age;
//	float scorce;
//};
//int main()//序列化和反序列化的应用
//{
//	struct S s = { "zhangsan",20,55.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//把s中格式化数据转化成字符串放到buf中
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.scorce);
//	printf("字符串: %s\n", buf);//"zhangsan 20 55.500000"
//
//	//从字符串buf中获取一个格式化的数据到tmp中
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.scorce));
//	printf("格式化: %s %d %f\n", tmp.arr, tmp.age, tmp.scorce);
//
//	return 0;
//}

////7 文件的随机读写 fseek ftell rewind
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
//	//fseek 根据文件指针的位置和偏移量来定位文件指针
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//	//ftell 返回文件指针相对于起始位置的偏移量(从零开始)
//	printf("%d\n", ftell(pf));//3
//
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//	printf("%d\n", ftell(pf));//6
//
//	//rewind 让文件指针的位置回到文件的起始位置
//	rewind(pf);
//	printf("%d\n", ftell(pf));//0
//
//	fclose(pf);
//	pf = NULL;
//}

////8 文本文件和二进制文件
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////9 被错误使用的feof
////应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束
////不能用于判断文件是否结束
////判断结束的标志
////fgetc -- EOF
////fgets -- NULL
////fread -- 返回值是否小于实际要读个数
//enum { SIZE = 5 };
//int main(void)
//{
//	////1 文本文件的例子
//	//int c; // 注意：int，非char，要求处理EOF
//	//FILE* fp = fopen("test.txt", "r");
//	//if (!fp) {
//	//	perror("File opening failed");
//	//	return EXIT_FAILURE;
//	//}
//	////fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	//while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	//{
//	//	putchar(c);
//	//}
//	////判断是什么原因结束的
//	//if (ferror(fp))
//	//	puts("I/O error when reading");
//	//else if (feof(fp))
//	//	puts("End of file reached successfully");
//	//fclose(fp);
//
//	//2 二进制文件的例子
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
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

//10 文件缓冲区
#include <windows.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;

	return 0;
}