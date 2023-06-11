#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	int j = 0;
//	int ret = 0;
//	int flag = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				ret = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = ret;
//				flag++;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	printf("min = %d", arr[n - 1]);
//
//	return 0;
//}
#include <stdio.h>
int main()
{
    int n = 0, r2 = 0, r1 = 0;
    scanf("%d ", &n);
    scanf("%d ", &r2);
    r1 = r2;
    int i = 1;
    for (i = 1; i <= n - 1; i++)
    {
        scanf("%d ", &r2);
        if (r1 > r2)
        {
            r1 = r2;
        }
    }
    printf("min = %d", r1);
    return 0;
}