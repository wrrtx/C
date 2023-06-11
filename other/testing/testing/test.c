#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 5, s = 0;
//	do 
//	{
//		if (i % 2) 
//			continue;
//		else 
//			s += i;
//	} while (--i);
//	printf("%d", s);
//
//	return 0;
//}
//int main()
//{
//	int i = 5, s = 0;
//	while (i--)
//		if (i % 2) continue;
//		else s += i;
//	printf("%d", s);
//
//	return 0;
//}
//int main(void)
//{
//    int  a = 2, b = -1, c = 2;
//
//    if (a < b)
//        if (b < 0)
//            c = 0;
//        else  c++;
//    printf("%d\n", c);
//
//    return 0;
//}
//int main(void)
//{
//    int x = 1, a = 0, b = 0;
//
//    switch (x)
//    {
//    case 0:   b++;
//    case 1:   a++;  //不使用break的话会继续执行下去
//    case 2:   a++; b++;
//    }
//    printf("a=%d,b=%d\n", a, b);
//
//    return 0;
//}
//int main()
//{
//	int x = 5, y = 6;
//	int z = x > y ? ++x : y++;
//	printf("%d", z);
//	return 0;
//}
//int main()
//{
//
//
//	return 0;
//}
int main() 
{
    int year, month, day;
    int sum;
    int leap;
    int T;
    scanf("%d", &T);
    while (T--) 
    {
        scanf("%d %d %d", &year, &month, &day);
   
        switch (month)
        {
        case 1:
            sum = 0;
            break;
        case 2:
            sum = 31;
            break;
        case 3:
            sum = 59;
            break;
        case 4:
            sum = 89;
            break;
        case 5:
            sum = 120;
            break;
        case 6:
            sum = 151;
            break;
        case 7:
            sum = 181;
            break;
        case 8:
            sum = 212;
            break;
        case 9:
            sum = 243;
            break;
        case 10:
            sum = 273;
            break;
        case 11:
            sum = 304;
            break;
        case 12:
            sum = 334;
            break;
        default:
            printf("data error");
            break;
        }
        sum += day;

        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            leap = 1;
        else
            leap = 0;
        if ((leap == 1) && (month > 2 && month <= 12))  sum++;
        printf("It is the %dth day.", sum);
    }
    return 0;
}
