#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[])
{
	int n = 0;
	int arr[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char m[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	char a[100][20] = { '\0' };
	int i = 0, j = 0;
	int sum = 0, c = 0;
	int f = 0;
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0, sum = 0, f = 0; j < 17; j++)
		{
			if (a[i][j] >= '0' && a[i][j] <= '9')
				sum += (a[i][j] - 48) * arr[j];
			else
			{
				f = 1;
				break;
			}
		}
		if (m[sum % 11] != a[i][j] || f == 1)
			printf("%s\n", a[i]);
		else
			c++;
	}
	if (c == n)
		printf("All passed");

	return 0;
}