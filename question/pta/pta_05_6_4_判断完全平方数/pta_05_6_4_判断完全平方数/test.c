#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int IsSquare(int n);

int main()
{
    int n;

    scanf("%d", &n);
    if (IsSquare(n)) printf("YES\n");
    else printf("NO\n");

    return 0;
}

#include <math.h>
int IsSquare(int n)
{
    int a = sqrt(n);
    if (a * a == n)
        return 1;
    else
        return 0;
}
