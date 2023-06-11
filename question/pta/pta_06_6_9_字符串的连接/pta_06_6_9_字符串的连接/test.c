#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#define MAXS 10

char* str_cat(char* s, char* t);

int main()
{
    char* p;
    char str1[MAXS + MAXS] = { '\0' }, str2[MAXS] = { '\0' };

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

#include <string.h>
char* str_cat(char* s, char* t)
{
    int sz1 = strlen(s);
    int sz2 = strlen(t);
    int i = 0, j = 0;
    for (i = sz1; i < sz1 + sz2; i++, j++)
    {
        *(s + i) = *(t + j);
    }
    *(s + i) = '\0';
    return s;
}
