#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<stdio.h>
#include<time.h>


int main()
{
	//double time1, time2, time3;
	//clock_t start, stop;
	//start = clock();
	clock_t start, stop;

	double s = 0;
	start = clock();
	int D = 0;
	scanf("%d", &D);
	if (D <= 5)
	{
		D += 2;
		printf("%d\n", D);
	}
	else if (6 == D)
	{
		D = 1;
		printf("%d\n", D);
	}
	else if (7 == D)
	{
		D = 2;
		printf("%d\n", D);
	}
	stop = clock();
	s = (stop - start) / CLK_TCK;
	printf("%lf", s);
	//stop = clock();
	//time3 = stop - start;
	//printf("%f\n", time3);

	return 0;
}
