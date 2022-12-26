#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)//因为10的阶乘已经大于int所能存放最大的值了，结果不能显示正确答案
	{
		ret = ret * i;	
		sum = sum + ret;
	}
	printf("sum=%d\n",sum);

	return 0;
}