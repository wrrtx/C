#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 21;; i++)
	{
		if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 & i % 11 == 10)
		{
			printf("%d", i);
			break;
		}
	}

	return 0;
}