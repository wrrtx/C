#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++) {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int p)
{
    int i = 0;
    if (p <= 1)
        return 0;
    else
    {
        for (i = 2; i <= sqrt(p); i++)
        {
            if (p % i == 0)
                return 0;
        }
        return 1;
    }
}               //判断i是否为素数
int PrimeSum(int m, int n)
{
    int a = 0;
    int sum = 0;
    for (a = m; a <= n; a++)    //前者是正确得方式，后者for (a = 2; a <= n; a++)通过不了，为什么初始值不可以直接从2开始？
    {
        if (prime(a) != 0)
            sum += a;
    }       //传到prime中判断是否是素数，是就加起来
    return sum;
}
