#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;//��Ϊ������ɸ����ͣ�1/�κ����ֶ����Ϊ0
	int n = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum+n*(1.0/i);//n���ǿ���������ָ�꣬����ż��
		n = -n;
	}
	printf("%lf\n",sum);
	return 0;
}