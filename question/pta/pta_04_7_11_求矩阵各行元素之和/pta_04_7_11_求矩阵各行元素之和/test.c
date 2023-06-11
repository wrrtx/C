#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int m = 0, n = 0;
	int arr[100][6] = { 0 };
	//int a=0;
	int i = 0, j = 0;
	scanf("%d%d", &m, &n);
	int sum = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0, sum = 0; j < n; j++)
		{
			//scanf("%d",&a);
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}

	return 0;
}