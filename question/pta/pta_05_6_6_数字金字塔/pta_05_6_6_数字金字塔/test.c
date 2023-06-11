#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void pyramid(int n);

int main()
{
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

void pyramid(int n)
{
    int i = 1, j = 0;
    int m = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}