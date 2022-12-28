#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;//因为不定义成浮点型，1/任何数字都会变为0
	int n = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum+n*(1.0/i);//n就是控制正负的指标，单正偶负
		n = -n;
	}
	printf("%lf\n",sum);
	return 0;
}