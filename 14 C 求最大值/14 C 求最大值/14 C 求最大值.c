#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度的方法
	int i = 0;
	for (i = 1; i < sz ; i++)//为什么这里的size不减1，是因为这里定义的是整型数字，而不是字符，只有字符会带有\0;
	{
		if (max < arr[i])//不用写大于的情况是因为若max一直是最大的，就直接打印它了
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}