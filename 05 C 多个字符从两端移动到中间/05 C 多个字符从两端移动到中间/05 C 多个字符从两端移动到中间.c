#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h.>
#include <string.h>//�������鳤��Ҫ���õ�ͷ�ļ�
#include <windows.h>//��Ϣ1000ms=1sҪ���õ�ͷ�ļ�
#include <stdlib.h>//ִ��ϵͳ�����һ������-cls-�����ĻҪ���õ�ͷ�ļ�
int main()
{
	char arr1[] = "Welcome to China!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;//�������鳤�ȣ�-1�����һλ������±�
	while(left<=right)
	{
		arr2[right] = arr1[right];
		arr2[left] = arr1[left];
		printf("%s\n",arr2);
		Sleep(1000);//��Ϣ1000ms=1s
		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
		right--;
		left++;
	}
	printf("%s\n",arr2);
	return 0;
}