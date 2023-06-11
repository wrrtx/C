#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define MAXN 10

void sort(int a[], int n);

int main()
{
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

void sort(int a[], int n)
{
    int i = 0, j = 0, k = 0, c = 0;
    for (i = 0; i < n; i++)
    {
        k = i;
        for (j = i; j < n - 1; j++)
        {
            if (a[k] > a[j + 1])
            {
                k = j + 1;
                c = 1;
            }
        }
        if (c == 1)
        {
            int t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
}
