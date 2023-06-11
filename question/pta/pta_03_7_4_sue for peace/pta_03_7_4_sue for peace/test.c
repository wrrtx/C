#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	double eps = 0;
	scanf("%lf", &eps);
	double sum = 0, S = 1.0, b = 1.0;
	int a = 1;
	do {
		S = b * (1.0 / a);
		a = a + 3;
		b = -b;
		sum = sum + S;
	} while (fabs(S) > eps);

	printf("sum = %.6lf", sum);

	return 0;
}
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int fm = 1;    //fm:分母
//    double eps, item = 0.0, sum = 0.0, sign = 1.0;    //item：单个一项;sign：控制正负
//
//    scanf("%lf", &eps);
//
//    do {
//        item = sign * (1.0 / fm);
//        sign = -sign;    //每次对符号取负值
//        fm += 3;    //每次对分母加三
//        sum += item;
//    } while (fabs(item) > eps);
//
//    printf("sum = %lf", sum);
//
//    return 0;
//}