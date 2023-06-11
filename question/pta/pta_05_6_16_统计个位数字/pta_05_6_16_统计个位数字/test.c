#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

int Count_Digit(const int N, const int D)
{
    int a = N;
    if (a < 0)
        a = -a;
    int x, y = 0;
    do
    {
        x = a % 10;
        if (x == D)
            y++;
        a = a / 10;
    } while (a);
    return y;
}
