#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	int arr[] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < T; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	if (T >= 2)
//	{
//		printf("No\n");
//		printf("Yes\n");
//		for (i = 2; i < arr[i]; i++)
//		{
//			for (j = 2; j < i; j++)
//			{
//				if (arr[i] % j == 0)
//				{
//					printf("No\n");
//					break;
//				}
//				else if (j + 1 == i)
//					printf("Yes\n");
//			}
//		}
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}
//#include <stdio.h> 
//int main()
//{
//	int sp = 0;
//	int ban = 0;
//	scanf("%d%d", &sp, &ban);//sp是速度，ban是最高限速
//	double x = (sp - ban) * 100 / ban;//计算超速的百分比
//	if (x < 10)
//		printf("OK");
//	else
//	{
//		if (x < 50)
//		{
//			printf("Exceed %.0f%%.Ticket 200\n", x);
//		}
//		else
//		{
//			printf("Exceed %.0f%%.LicenseRevoked n", x);
//		}
//	}
//	return 0; 
//}
#include <stdio.h> 
int main()
{
	int sp = 0;
	int ban = 0;
	scanf("%d%d", &sp, &ban);//sp是速度，ban是最高限速
	double x = (sp - ban) * 1.0 / ban * 100.0;//计算超速的百分比
	if (x < 10)
		printf("OK");
	else
	{
		if (x < 50)
		{
			printf("Exceed %.0f%%. Ticket 200\n", x);
		}
		else
		{
			printf("Exceed %.0f%%. License Revoked\n", x);
		}
	}
	return 0;
}