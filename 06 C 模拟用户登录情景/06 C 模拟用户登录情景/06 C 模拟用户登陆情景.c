#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>//字符串进行比较要用一个库函数-strcmp所引用的头文件
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s",password);
		if (strcmp(password, "123456") == 0)//字符串进行比较要用一个库函数-strcmp
		{
			printf("密码输入正确\n");
			break;
		}
		else {
			printf("密码输入错误\n");
		}
	}
	if (i ==3)
	{
		printf("三次密码均错误，请退出程序\n");
	}
	return 0;
}