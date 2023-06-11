#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

double P(int n, double x);

int main()
{
    int n;
    double x;

    scanf("%d %lf", &n, &x);
    printf("%.2f\n", P(n, x));

    return 0;
}

double P(int n, double x)
{
    double y = 0;
    if (n == 0)
        y = 1.0;
    else if (n == 1)
        y = x * 1.0;
    else
        y = ((2 * n - 1) * P(n - 1, x) - (n - 1) * P(n - 2, x)) / n * 1.0;
    return y;
}
