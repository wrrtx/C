#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int child1 = 8;
	int child2 = 9;
	int child3 = 10;
	int cone = child1 / 3;
	int ctwo = (child2 + cone) / 3;
	int cthree = (child3 + cone + ctwo) / 3;
	printf("%d %d %d", cone + ctwo + cthree, ctwo + cthree, cthree);

	return 0;
}