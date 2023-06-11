#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <string.h>
int main(int argc, char* argv[])
{
	char a[60] = { '\0' };
	double c = 1, b = 1;
	double x = 0, y = 0;
	double z = 0;
	int i = 0;
	gets(a);
	int sz = strlen(a);
	if (a[0] == '-')
	{
		c += 0.5;
		y -= 1;
	}
	if (a[sz - 1] == '0' || a[sz - 1] == '2' || a[sz - 1] == '4' || a[sz - 1] == '6' || a[sz - 1] == '8')
		b += 1;
	while (a[i] != '\0')
	{
		if (a[i] == '2')
			x += 1;
		i++;
	}
	z = x * 1.0 / (sz + y) * c * b * 100;
	printf("%.2f%%", z);

	return 0;
}