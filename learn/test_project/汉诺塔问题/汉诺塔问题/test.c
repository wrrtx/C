#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

void hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		printf("%c->%c\n", pos1, pos3);
	}
	else
	{
		hanoi(n - 1, pos1, pos3, pos2);
		printf("%c->%c\n", pos1, pos3);
		hanoi(n - 1, pos2, pos1, pos3);
	}
}

int main()
{
	int n = 0;
	printf("请输入汉诺塔层数:>");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("一共移动了%d次\n", (int)pow(2, n) - 1);

	return 0;
}
