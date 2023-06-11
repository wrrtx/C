#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define N 10
void createMatrix(int a[][N]);
int sumMatrix(int a[][N]);
int main()
{
    int a[N][N];
    createMatrix(a);
    printf("%d\n", sumMatrix(a));
    return 0;
}

void createMatrix(int a[][N])
{
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
int sumMatrix(int a[][N])
{
    int sum = 0;
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == j || i == N - 1 || j == N - 1)
                continue;
            else
                sum += a[i][j];
        }
    }
    return sum;
}
