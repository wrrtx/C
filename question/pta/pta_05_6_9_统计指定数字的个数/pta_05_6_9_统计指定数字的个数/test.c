#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int CountDigit(int number, int digit);

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit(int number, int digit)
{
    int a = number;
    if (a < 0)
        a = -a;
    int c = 0;
    int b = a;
    do
    {
        a = b % 10;
        if (a == digit)
            c++;
        b = b / 10;
    } while (b);
    return c;
}
