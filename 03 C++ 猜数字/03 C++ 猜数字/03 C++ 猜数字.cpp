#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <ctime>//time系统时间头文件包含
using namespace std;
int main()
{
	//添加随机数种子 作用利用当前系统时间生成随机数，防止每一次随机数都一样
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;//生成一个1~100的随机数
	int val = 0;
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜您猜测正确" << endl;
			break;
		}
	}
	
	
	
	system("pause");
	return 0;
}