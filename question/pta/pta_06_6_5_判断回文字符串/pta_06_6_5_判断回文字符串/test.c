#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum { false, true } bool;

bool palindrome(char* s);

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if (palindrome(s) == true)
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome(char* s)
{
    int sz = strlen(s);
    int i = 0, c = 0;
    for (i = 0; i < sz / 2; i++)
    {
        if (*(s + i) == *(s + sz - i - 1))
        {
            c++;
        }
    }
    if (c == sz / 2)
        return true;
    else
        return false;
}
