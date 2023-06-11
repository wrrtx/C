#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int judgment(int arr1[50], int n1, int z)
{
    int flag = 0;
    int arr2[50] = { 0 };
    int m1 = 0;
    int m2 = 0;
    int m3 = 0;
    for (m1 = 0; m1 < n1; m1++)
    {
        //if (m2 >= 2)
        //{
        //    flag = 1;
        //    break;
        //}
        if (arr1[m1] == 0)
        {
            flag = 0;
            break;
        }
        else if (z % arr1[m1] == 0)
        {
            arr2[m3] = arr1[m1];
            m3 = m3 + 1;
            //m2++;
        }
    }
    int a = m3 - 1;
    int b = arr2[a];
    if (z / b > b || flag == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int n, x;
    int arr[50] = { 0 };
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int y = judgment(arr, n, x);
    if (y)
    {
        printf("Possible");
    }
    else
    {
        printf("Impossible");
    }

    return 0;
}