#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i;
//	int f[20] = { 1,1 };//��������ǰ�������Ԫ��f[0]��f[1]����ֵ1
//	for (i = 2; i < 20; i++)
//		f[i] = f[i - 2] + f[i - 1];//�����f[2]~f[19]��ֵ
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0) printf("\n");//����ÿ���5�������У�//��else��䣬˳��ִ�У���ִ����˾䣬ֱ��ִ����һ��ӡ���
//		printf("%12d", f[i]);//���һ������//��12��Ϊ���ָ���������ռ12�У����������Ҷ��룬��Ϊ������������������������
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