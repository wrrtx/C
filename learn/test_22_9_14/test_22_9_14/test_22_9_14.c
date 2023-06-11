#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////程序1 do while循环以及break和continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			//break;		//跳出循环
//			continue;	//也是死循环
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);	//先执行，再判断。特点就是至少会循环一次
//
//	return 0;
//}

////程序2 练习1:求n！的结果
//int main()
//{
//	////自己的程序
//	//int n = 0;
//	//int i = 0;
//	//int b = 1;
//	//scanf("%d", &n);
//	//for (i=n-(n-1); i <= n; i++)
//	//{
//	//	b = i * b;
//	//}
//	//printf("%d", b);
//
//	//视频的程序
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

////程序3 练习2：求1！+2！+……+n！的和
//int main()
//{
//	////自己的代码(嵌套的话效率会低很多)
//	//int i = 0;
//	//int n = 0;
//	//int a = 0;
//	//int b = 1;
//	//int ret = 0;
//	//scanf("%d", &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	for (a = 1,b = 1; a <= i; a++)
//	//	{
//	//		b *= a;
//	//	}
//	//	ret = ret + b;
//	//}
//	//printf("%d", ret);
//
//	//视频的代码
//	////1（效率低）：
//	//int i = 0;
//	//int n = 0;
//	//int ret = 1;
//	//int sum = 0;
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	ret = 1;
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret *= i;
//	//	}
//	//	sum += ret;
//	//}
//	//printf("%d", sum);
//	//2(效率高)：
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

////程序4 练习3：在一个有序数组中查找具体的某个数字n，用二分查找/折半查找（有序！！！）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了");
//
//	return 0;
//}

////程序5 练习4：演示多个字符从两端移动向中间汇聚
//#include <string.h>		//strlen的头文件
//#include <windows.h>	//Sleep的头文件
//int main()
//{
//	char arr1[] = "wecome to bit!!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//睡眠，单位毫秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

////程序6 练习5：模拟用户登录情景，并且只能登录三次，三次失败则退出程序
//#include <string.h>	//strcmp的头文件
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串"123456"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456")//err - 两个字符串比较不能用==，这种是比较地址，字符串要用strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功！\n");
//			break;
//		}
//		else if (i < 2)
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入错误，退出登录程序！\n");
//	}
//
//	return 0;
//}

//程序7 猜字游戏
//1.自动产生一个1-100之间的随机数
//2.猜对了，恭喜并结束游戏
//3.猜错了会告诉你大了还是小了，然后继续猜，直到猜对
//4.游戏可以一直玩，除非退出游戏
#include <stdlib.h>
#include <time.h>
void mune()
{
	printf("                           \n");
	printf("     欢迎打开猜字游戏      \n");
	printf("     数字的范围在1-100     \n");
	printf("                           \n");
	printf("        开始游戏：1        \n");
	printf("        退出游戏：0        \n");
	printf("                           \n");
}
void game()
{
	//1.产生随机数字
	//rand函数返回了一个0-32767之间的数字
	//利用时间一直在变的特点，使用时间戳，使ret的值保持随机

	int ret = rand() % 100 + 1;//%100的余数是0-99，加1就变成是1-100
	//printf("%d\n", ret);//验证是否是1-100

	//2.猜数字
	int guess = 0;

	printf("请输入想猜的数字:>");

	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("\n");
			printf("猜的数字小了\n");
			printf("请重新输入:>");
		}
		else if (guess > ret)
		{
			printf("\n");
			printf("猜的数字大了\n");
			printf("请重新输入:>");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		mune();//打印菜单
		printf("请选择是否进入游戏:>", input);
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("欢迎进入游戏！\n");
			game();
			break;
		case 0:
			printf("已退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新输入！\n");
			break;
		}
	} while (input);

	return 0;
}