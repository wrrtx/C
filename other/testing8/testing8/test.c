#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	//int c[] = { 1, 3, 5 };
//	//int* k = c + 1;
//	//printf("%d", *++k);
//	
//	////int c, * s, a[] = { 1, 3, 5 };
//	//////c = *s;
//	//////s[0] = a[0];
//	////s = &a[1];
//	//////c = a;
//
//	//int a[2] = { 1,3 }, * p = &a[0] + 1;
//	//int c = *p;
//
//	////char s[5] = { "ABCDE" }; puts(s);
//	////char s[5] = { 'A', 'B', 'C', 'D', 'E' }; puts(s);
//	////char* s; scanf("%s", s); puts(s);
//	//char* s; s = "ABCDE"; puts(s);
//
//	//int* p; scanf("%d", &p);
//	//int* p; scanf("%d", p);
//	//int k, * p = &k; scanf("%d", p);
//	int k, * p; *p = &k; scanf("%d", p);
//
//	return 0;
//}



//#include <stdio.h>
//
//void RealSwap(double* x, double* y);
//
//
//int main()
//{
//    double a, b;
//    scanf("%lg%lg", &a, &b);
//    printf("%g %g\n", a, b);
//
//    RealSwap(&a, &b);
//
//        printf("%g %g\n", a, b);
//    return 0;
//}
//
//void RealSwap(double* x, double* y)
//{
//    double t = *x;
//
//    *x = *y;
//
//
//    *y = t;
//
//}



//#include <stdio.h>
//
//void RealOutput(const double* x);
//
//int main()
//{
//    double a;
//    scanf("%lg", &a);
//    RealOutput(&a);
//    putchar('\n');
//    return 0;
//}
//
//void RealOutput(const double* x)
//{
//    printf("%g",*x);
//}



//#include<stdio.h>
//
//int main(void)
//{
//    char *str;
//    str = "abcdefghijk";
//
//    while (*str != '\0')
//    {
//        putchar(*str);
//        str += 2;
//        if ('\0' == *(str - 1))
//        {
//            break;
//        }
//    }
//
//    return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int a[10], max, * p;
//	for (p = a; p < a + 10; p++)
//		scanf("%d", p);
//	max = a[0];
//	for (p = a + 1; p < a + 10; p++)
//	{
//		if (*p > max)
//			max = *p;
//	}
//	printf("max=%d\n", max);
//	return 0;
//}



#include <stdio.h>
#include <string.h>
int main()
{
    int a = 0;
    char arr[100] = { '\0' };
    scanf("%d", &a);
    scanf("%s", arr);
    int i = 0;
    int sz = strlen(arr);
    for (i = 0; i < sz; i++)
    {
        arr[i] = arr[i] + 1;
    }
    printf("%s", arr);
    return 0;
}