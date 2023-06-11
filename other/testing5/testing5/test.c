#define _CRT_SECURE_NO_WARNINGS 1
////#include <stdio.h>
////int main()
////{
////    int a, i;
////    for (a = 1, i = -1; -1 <= i < 1; i++) {
////        a++;
////        printf("%2d", a);
////    }
////    printf("%2d", i);
////
////    return 0;
////}
//#include "stdio.h"
//int main() {
//    //long num = 1;
//    //while (num++ > 0) for (long i = num; i >= 0; i--)printf("i :=\n \t %ld \n", i);
//    //int i = 5, s = 0;
//    //do {
//    //    if (i % 2) continue;
//    //    else s += i;
//    //} while (--i);
//    //printf("%d", s);
//    //int a = 2, b = 9;
//    //do {
//    //    b -= a;
//    //    a++;
//    //} while (b-- < 0);
//    //printf("a=%d,b=%d\n", a, b);
//    //int i = 5, s = 0;
//    //while (i--)
//    //    if (i % 2) continue;
//    //    else s += i;
//    //printf("%d", s);
//    //int m;
//    //for (m = 0; m < 9; m++)   m++;
//    int i = 5, s = 0;
//    while (i--)
//        if (i % 2) continue;
//        else s += i;
//
//    printf("%d", s);
//    return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//    int a, b;
//    for (a = 1, b = 1; a <= 100; a++) {
//        if (b > 10)break;
//        if (b % 3 == 1) {
//            b += 3;
//            continue;
//        }
//        b -= 3;
//    }
//    printf("%d\n", a);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int a = 0, i;

    for (i = 1; i < 5; i++)
    {
        switch (i)
        {
        case 0:
        case 3:a += 2;
        case 1:
        case 2:a += 3;
        default:a += 5;
        }
    }
    printf("%d\n", a);

    return 0;
}
