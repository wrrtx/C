#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//char c[] = "I\t\r\\\0will\n";
//	//printf("%d", strlen(c));
//	//char str[80] = "hello, world";
//	//int i = 0;
//	//for (i = 0; /*str[i] != '\0'*/i<80; i++)
//	//	putchar(str[i]);
//	//char s[5] = { 'A', 'B', 'C', 'D', 'E' }; puts(s);
//	//char s[5] = { "ABCDE" }; puts(s);
//	//char* s; scanf("%s", s); puts(s);
//	char* s; s = "ABCDE"; puts(s);
//	int a[100], b[1000];
//	scanf("%s%s", a, b);
//	return 0;
//}

#include<stdio.h>
void fun(char s[])
{
    int i, j = 0, k = 0;
    char t1[80], t2[80];
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= '0'
            &&
            s[i] <= '9')
        {
            t2[j] = s[i];

            j++;

        }
        else
            t1[k++] = s[i];
    t2[j] =
        0
        ;
    t1[k] = 0;
    for (i = 0; i < k; i++)

        s[i] = t1[i];

    for (i = 0; i <
        j
        ; i++)
        s[k + i] = t2[i];
}
int main()
{
    char s[80];
    scanf("%s", s);
    fun(
        s
    );
    printf("%s", s);
    return 0;
}