#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i;
//	int f[20] = { 1,1 };//对数组最前面的两个元素f[0]和f[1]赋初值1
//	for (i = 2; i < 20; i++)
//		f[i] = f[i - 2] + f[i - 1];//先求出f[2]~f[19]的值
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0) printf("\n");//控制每输出5个数后换行；//无else语句，顺序执行；即执行完此句，直接执行下一打印语句
//		printf("%12d", f[i]);//输出一个数；//‘12’为域宽；指定输出数据占12列；且数据向右对齐，若为负数，则输出的数据向左对齐
//	}
//	printf("\n");
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a[10];
	int i, j, t;
	printf("input 10 numbers :\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("\n");
	for (j = 0; j < 9; j++)
		for (i = 0; i < 9 - j; i++)
			if (a[i] > a[i + 1])
			{
				t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
			}
	printf("the sorted numbers :\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}