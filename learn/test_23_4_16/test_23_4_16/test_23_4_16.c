#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////1 柔性数组 -- 结构中的最后一个元素允许是未知大小的数组，这就叫做柔性数组成员
////特点：
////1.结构中的柔性数组成员前面必须至少一个其他成员。
////2.sizeof 返回的这种结构大小不包括柔性数组的内存。
////3.包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大
////小，以适应柔性数组的预期大小。
//typedef struct S
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//4
//
//	return 0;
//}

//2 柔性数组使用 -- 方便内存释放，提高速度
#include <stdlib.h>
typedef struct S
{
	int n;
	int* arr;
	int a[0];//柔性数组成员
};

int main()
{
	////1
	//struct S* ps = (struct S*)malloc(sizeof(struct S));
	//if (ps == NULL)
	//{
	//	return 1;
	//}
	//ps->n = 100;
	//ps->arr = (int*)malloc(40);
	//if (ps->arr == NULL)
	//{
	//	return 1;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(ps->arr + i) = i;
	//	printf("%d ", *(ps->arr + i));
	//}
	//int* ptr = (int*)realloc(ps->arr, 80);
	//if (ptr == NULL)
	//{
	//	return 1;
	//}
	//free(ps->arr);
	//free(ps);
	//ps = NULL;

	//2 柔性数组
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->a[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->a[i]);
	}
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	free(ps);
	ps = NULL;

	return 0;
}