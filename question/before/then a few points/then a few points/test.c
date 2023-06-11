#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int now = 0;
	int min = 0;
	scanf("%d%d", &now, &min);
	int hr1 = now / 100;
	int min1 = now % 100;
	min1 = min1 + min;
	int min2 = 0;
	int hr2 = 0;
	min2 = (min1 + hr1 * 60) % 60;
	hr2 = (min1 + hr1 * 60) / 60;
	int time = 0;
	if (hr2 > 0 && hr2 < 24)
	{
		time = hr2 * 100 + min2;
		printf("%d", time);
	}
	else if (hr2 == 0 || hr2 == 24)
	{
		if (min2 == 0)
		{
			printf("000");
		}
		else if (min2 <= 9 && min2 > 0)
		{
			time = min2;
			printf("00%d", time);
		}
		else
		{
			time = min2;
			printf("0%d", time);
		}
	}
	
	return 0;
}