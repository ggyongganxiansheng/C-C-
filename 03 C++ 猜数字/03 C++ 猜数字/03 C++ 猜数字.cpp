#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <ctime>//timeϵͳʱ��ͷ�ļ�����
using namespace std;
int main()
{
	//������������ �������õ�ǰϵͳʱ���������������ֹÿһ���������һ��
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;//����һ��1~100�������
	int val = 0;
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ���²���ȷ" << endl;
			break;
		}
	}
	
	
	
	system("pause");
	return 0;
}