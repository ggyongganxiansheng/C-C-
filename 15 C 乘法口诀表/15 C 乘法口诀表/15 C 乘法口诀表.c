#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)//有几行
	{
		int j = 0;
		for (j = 1; j <= i; j++)//有几列
		{
			printf("%d*%d=%-2d ",i,j,i*j);//-2是左对齐
		}
		printf("\n");
	}
	return 0;
}