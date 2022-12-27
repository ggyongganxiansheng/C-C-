#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h.>
#include <string.h>//计算数组长度要引用的头文件
#include <windows.h>//休息1000ms=1s要引用的头文件
#include <stdlib.h>//执行系统命令的一个函数-cls-清空屏幕要引用的头文件
int main()
{
	char arr1[] = "Welcome to China!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;//计算数组长度，-1是最后一位数组的下标
	while(left<=right)
	{
		arr2[right] = arr1[right];
		arr2[left] = arr1[left];
		printf("%s\n",arr2);
		Sleep(1000);//休息1000ms=1s
		system("cls");//执行系统命令的一个函数-cls-清空屏幕
		right--;
		left++;
	}
	printf("%s\n",arr2);
	return 0;
}