#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic(int number)
{
    int a = 0;
    if (number >= 1000 && number <= 9999)
       a = number / 1000;
    int x = number % 10;
    int y = number % 100 / 10;
    int z = number % 1000 / 100;
    if (number < 1000 && number == x * x * x + y * y * y + z * z * z)
        return 1;
    if (number >= 1000 && number == x * x * x * x + y * y * y * y + z * z * z * z + a * a * a * a)
    {
        return 1;
    }
    return 0;
}
void PrintN(int m, int n)
{
    m++;
    while (m < n)
    {
        if (narcissistic(m))
            printf("%d\n", m);
        m++;
    }
}
