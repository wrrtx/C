#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int bonus = 0;
	scanf("%d", &bonus);
	int hundred = bonus / 100;
	int fifty = (bonus % 100) / 50;
	int twenty= (bonus % 50) / 20;
	int ten = ((bonus % 50) % 20) / 10;
	int five= (bonus % 10) / 5;
	int tow = (bonus % 5) / 2;
	int one = (bonus % 5) % 2;
	if (hundred <= 9)
	{
		printf("100元:  %d张\n", hundred);
	}
	else
	{
		printf("100元: %d张\n", hundred);
	}
	printf(" 50元:  %d张\n", fifty);
	printf(" 20元:  %d张\n", twenty);
	printf(" 10元:  %d张\n", ten);
	printf("  5元:  %d张\n", five);
	printf("  2元:  %d张\n", tow);
	printf("  1元:  %d张\n", one);


	return 0;
}