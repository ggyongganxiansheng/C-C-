#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鳤�ȵķ���
	int i = 0;
	for (i = 1; i < sz ; i++)//Ϊʲô�����size����1������Ϊ���ﶨ������������֣��������ַ���ֻ���ַ������\0;
	{
		if (max < arr[i])//����д���ڵ��������Ϊ��maxһֱ�����ģ���ֱ�Ӵ�ӡ����
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}