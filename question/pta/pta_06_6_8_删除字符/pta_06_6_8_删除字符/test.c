#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define MAXN 20

void delchar(char* str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

#include <string.h>
void delchar(char* str, char c)
{
    int sz = strlen(str);
    int i = 0, j = 0;
    char arr[100] = { '\0' };
    for (i = 0; i < sz; i++)
    {
        arr[i] = str[i];
    }
    for (i = 0; i < sz; i++)
    {
        if (*(arr + i) != c)
        {
            *(str + j) = *(arr + i);
            j++;
        }
        if (i == sz - 1)
            *(str + j) = '\0';
    }
}
void ReadString(char s[])
{
    gets(s);
}
