#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

double fact(int n);

int main(void)
{
    int i;
    double sum;

    sum = 0;
    for (i = 1; i <= 10; i++)
        sum = sum + fact(i);

    printf("1!+2!+...+10! = %f\n", sum);
    return 0;
}

double fact(int n)
{
    int i = 0;
    double j = 1.0;
    for (i = 1; i <= n; i++)
    {
        j = j * i * 1.0;
    }
    return j;
}
