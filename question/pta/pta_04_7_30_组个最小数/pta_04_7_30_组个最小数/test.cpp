#define _CRT_SECURE_NO_WARNINGS 1

#include <cstdio>
int main()
{
    int count[10];   //��¼����0~9�ĸ���
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &count[i]);
    }
    for (int i = 1; i < 10; i++)
    {
        //��1~9��ѡ��count��Ϊ0����С������
        if (count[i] > 0)
        {
            printf("%d", i);
            count[i]--;
            break;   //�ҵ�һ��֮����ж�
        }
    }
    for (int i = 0; i < 10; i++)
    {
        //��0~9�����Ӧ����������
        for (int j = 0; j < count[i]; j++)
        {
            printf("%d", i);
        }
    }
    return 0;
}