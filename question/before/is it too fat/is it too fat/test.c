#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() 
{
    int H = 0;
    float W = 0;
    scanf("%d", &H);
    W = (H - 100) * 0.9 * 2;
    printf("%.1f\n", W);

    return 0;
}