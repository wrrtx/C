#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define MAXN 20

void strmcpy(char* t, int m, char* s);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s\n", s);

    return 0;
}

#include <string.h>
void strmcpy(char* t, int m, char* s)
{
    int i = 0, j = 0;
    int sz = strlen(t);
    for (i = m; i <= sz; i++, j++)
    {
        *(s + j) = *(t + i - 1);
    }
    *(s + j) = '\0';
}
void ReadString(char s[])
{
    gets(s);
}
