#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int math = 87;
	int eng = 72;
	int comp = 93;
	int average = (math + eng + comp) / 3;
	printf("math = 87, eng = 72, comp = 93, average = %d", average);
	
	return 0;
}