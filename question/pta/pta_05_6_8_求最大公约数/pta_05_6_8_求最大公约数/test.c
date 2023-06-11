#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int gcd(int x, int y);

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd(int x, int y)
{
    if (x > y)
    {
        int t = x;
        x = y;
        y = t;
    }
    int t = 0;
    while (y != 0) 
    {
        t = x % y;
        x = y;
        y = t;
    }
    return x;
}
