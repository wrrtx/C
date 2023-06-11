#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse(int number)
{
    if (number == 0)
        return 0;
    int a = number;
    if (a < 0)
    {
        a = -a;
        printf("-");
    }
    int b = a;
    a = b % 10;
    while (a == 0)
    {
        b = b / 10;
        a = b % 10;
    }
    int n = 0;
    do
    {
        n = n * 10 + a;
        b = b / 10;
        a = b % 10;
    } while (b);
    return n;
}
