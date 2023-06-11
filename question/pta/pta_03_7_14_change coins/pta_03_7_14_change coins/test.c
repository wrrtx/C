#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int count = 0;
//	int r1 = 0, r2 = 0, r3 = 0;
//	int f1 = 1, f2 = 1, f3 = 1, t = 0, c = x - 8;
//	r1 = c / 5;
//	r2 = (c - r1 * 5) / 2;
//	r3 = c - r1 - r2;
//	if (c > 2)
//	{
//		for (f1 += r1; f1 > 0; f1--)
//		{
//			for (f2 += r2; f2 > 0; f2--)
//			{
//				for (f3 += r3; f3 > 0; f3--)
//				{
//
//				}
//			}
//		}
//	}
//
//	return 0;
//}

#include <stdio.h>
int main() {
	int x;
	int fen5, fen2, fen1, total, sum;
	int count = 0;
	scanf("%d", &x);
	if (x > 8 && x < 100) {
		for (fen5 = x / 5; fen5 > 0; fen5--) {
			for (fen2 = x / 2; fen2 > 0; fen2--) {
				for (fen1 = x; fen1 > 0; fen1--) {
					if (5 * fen5 + 2 * fen2 + fen1 == x) {
						count++;
						total = fen5 + fen2 + fen1;
						printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, total);
						total = 0;
					}
				}
			}
		}
	}
	printf("count = %d", count);
	return 0;
}
