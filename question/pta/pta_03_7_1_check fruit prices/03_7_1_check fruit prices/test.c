#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int input = 0;
		scanf("%d", &input);
		if (1 == input)
		{
			printf("price = 3.00\n");
		}
		else if (2 == input)
			printf("price = 2.50\n");
		else if (3 == input)
			printf("price = 4.10\n");
		else if (4 == input)
			printf("price = 10.20\n");
		else if (0 == input)
			break;
		else
			printf("price = 0.00\n");
	}
	return 0;
}