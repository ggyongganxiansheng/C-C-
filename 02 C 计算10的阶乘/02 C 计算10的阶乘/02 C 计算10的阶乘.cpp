#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)//��Ϊ10�Ľ׳��Ѿ�����int���ܴ������ֵ�ˣ����������ʾ��ȷ��
	{
		ret = ret * i;	
		sum = sum + ret;
	}
	printf("sum=%d\n",sum);

	return 0;
}