#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void begin(int i)
{
	if (i / 10 != 0)
		begin(i / 10);
	printf("%d ", i % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	begin(n);

	return 0;
}