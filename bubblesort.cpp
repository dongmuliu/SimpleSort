/*
����������������������������ͨ�������ҳ����Ԫ�طŵ�������ǰ�ˡ�
ѡ������˼·��
1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
2. ��ÿһ������Ԫ����ͬ���Ĺ������ӿ�ʼ��һ�Ե���β�����һ�ԡ��ⲽ���������Ԫ�ػ�����������
3. ������е�Ԫ���ظ����ϵĲ��裬�������һ����
4. ����ÿ�ζ�Խ��Խ�ٵ�Ԫ���ظ�����Ĳ��裬ֱ��û���κ�һ��������Ҫ�Ƚϡ�
*/

#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
//ð������
//���룺����������
void BubbleSort(vector<int>&sortvector)
{
	int size = sortvector.size();
	int temp;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j<size-i-1; j++)
		{
			//����
			if (sortvector[j]>sortvector[j + 1])
			{
				temp = sortvector[j];
				sortvector[j] = sortvector[j + 1];
				sortvector[j + 1] = temp;
			}

		}
		
	}
	//�������������
	for (int i = 0; i < size; i++)
	{
		cout << sortvector[i] <<" ";
	}
	
}

int main()
{
	vector<int>a;
	int b;
	
	//�س�ֹͣ����ѭ��
	while (cin >> b)
	{
		a.push_back(b);
		char c = cin.get();
		if (c == '\n')
			break;
	}
	
	//����ð������
	BubbleSort(a);
	//�������̨����
	system("pause");

}

