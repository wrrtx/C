#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int IsAutomorphic(int x);

int main()
{
    int n;
    scanf("%d", &n);
    if (IsAutomorphic(n))
    {
        puts("Yes");
    }
    else
    {
        puts("No");
    }
    return 0;
}

#include <math.h>
int IsAutomorphic(int x)
{
    if (x == 0 || x == 1)
        return 1;
    int y = x * x;
    int z = x, c = 0;
    while (z)
    {
        z /= 10;
        c++;
    }
    z = pow(10, c);
    if (y % z == x)
        return 1;
    return 0;
}
