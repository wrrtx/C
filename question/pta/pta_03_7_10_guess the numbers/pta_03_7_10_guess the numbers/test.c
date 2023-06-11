#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	int ture = 0;
	scanf("%d%d", &ture, &a);
	int guess = 0;
	while (b <= a)
	{
		b++;
		scanf("%d", &guess);
		if (guess < 0)
		{
			printf("Game Over\n");
			break;
		}
		else if (b == 1 && guess == ture)
		{
			printf("Bingo!\n");
			break;
		}
		else if (b <= 3 && guess == ture)
		{
			printf("Lucky You!\n");
			break;
		}
		else if (b <= a && guess == ture)
		{
			printf("Good Guess!\n");
			break;
		}
		else if (b > a)
		{
			printf("Game Over\n");
			break;
		}
		else if (guess < ture)
		{
			printf("Too small\n");
		}
		else if (guess > ture)
		{
			printf("Too big\n");
		}
	}
	return 0;
}