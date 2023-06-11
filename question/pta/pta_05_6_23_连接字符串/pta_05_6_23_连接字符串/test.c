#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void fun(char p1[], char p2[]);

int main()
{
    char s1[80], s2[40];


    scanf("%s%s", s1, s2);

    fun(s1, s2);

    printf("%s", s1);

    return 0;

}

#include <string.h>
void fun(char p1[], char p2[])
{
    strcat(p1, p2);
}
