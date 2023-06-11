#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	int output = 0;
	while (i)
	{
		scanf("%d", &i);
		if (i % 2 == 1)
		{
			output += i;
		}
		else if (i <= 0)
		{
			break;
		}
	}
	printf("%d", output);

	return 0;
}