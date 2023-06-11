#define _CRT_SECURE_NO_WARNINGS 1

/* 此测试程序仅为示例，实际的测试程序可能不同 */
#include <stdio.h>
#define MAXSIZE 100
int indexOfMax(int* array, int size);
int main() {
    int num[MAXSIZE];
    int total;
    scanf("%d", &total);
    for (int i = 0; i < total; i++) 
        scanf("%d", &num[i]);
    printf("%d\n", num[indexOfMax(num, total)]);
    return 0;
}

int indexOfMax(int* array, int size)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < size - 1; i++)
    {
        if (array[k] < array[i + 1])
        {
            k = i + 1;
        }
    }
    return k;
}
