#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib(int n)
{
    int i = 0;
    int x = 1, y = 1, z = 0;
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    for (i = 0; i < n - 2; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return z;
}
void PrintFN(int m, int n)
{
    int x = 1, y = 1, z = 0, i = 0;
    if (n == m == 1)
        printf("1 1");
    else
    {
        for (i = 0; i < n; i++)
        {
            z = x + y;
            x = y;
            y = z;
            if (z >= m)
                break;
        }
        if (z <= n)
        {
            if (m == 1)
                printf("1 1 ");
            printf("%d", z);
            do
            {
                z = x + y;
                x = y;
                y = z;
                if (z <= n)
                    printf(" %d", z);
                else
                    break;
            } while (z);
        }
        else
            printf("No Fibonacci number");
    }
}
