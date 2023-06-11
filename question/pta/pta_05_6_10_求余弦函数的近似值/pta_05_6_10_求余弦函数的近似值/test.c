#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

#include <math.h>
double funcos(double e, double x)
{
    int i = 2;
    double j = 1;
    double r = 1.0;
    double a = cos(x);
    double b = x / (3.141592 / 2);
    int c = b;
    for (i = 2;; i += 2)
    {
        j *= (i - 1) * i;
        if (i % 4 == 0)
            r += pow(x, i) / j * 1.0;
        else
            r -= pow(x, i) / j * 1.0;
        if (pow(x, i) / j * 1.0 < e)
            break;
    }
    return r;
}
