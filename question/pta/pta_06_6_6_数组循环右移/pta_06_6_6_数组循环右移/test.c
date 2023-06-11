#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define MAXN 10

void ArrayShift(int a[], int n, int m);

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for (i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

void ArrayShift(int a[], int n, int m)
{
    int c = m % n;
    int i = 0, j = 0;
    int arr[100] = { 0 };
    for (i = 0; i < n; i++)
    {
        arr[i] = a[i];   //��������0-��i�����������
        if (i < c)       //���ƶ��ļ������ַŵ���ͷ
            a[i] = a[n - c + i];
    }
    for (i = c; i < n; i++, j++)
    {
        *(a + i) = *(arr + j);//�Ѹ��ƵķŻذ�˳��ԭ������
    }
}
