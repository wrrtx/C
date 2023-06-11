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
    int x = a[0];
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[k] > a[j])
            {
                k = j;
                c++;
            }
        }
        if (c != 0)
        {
            int t = a[k];
            a[k] = a[i];
            a[i] = t;
        }
        k = i;
        k++;
    }
}
