/*
��������������������������������һ����С��Ԫ�ظ����������ĺ��档�����飺�Ƚϵö࣬�����١�
ѡ������˼·��
1. ��δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ��
2. ��ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ
3. �Դ����ƣ�ֱ������Ԫ�ؾ��������
*/
#include<string>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
//��������
//���룺����������
void SelectSort(vector<int>&selectsort)
{
	int length = selectsort.size();
	for (int i = 0; i < length-1; i++)
	{
		int temp = selectsort[i];
		for (int j = i+1; j < length; j++)
		{
			//��������������
			if (selectsort[i]>selectsort[j])
			{
				temp = selectsort[i];
				selectsort[i] = selectsort[j];
				selectsort[j] = temp;

			}
		}
	}
	//�������������
	for (int i = 0; i < length; i++)
	{
		cout << selectsort[i] << " ";
	}

}
int main()
{
	int b;
	vector<int>a;
	//�س�ֹͣ����ѭ��
	while (cin >> b)
	{
		a.push_back(b);
		char c = cin.get();
		if (c == '\n')
			break;
		
	}
	//����ѡ������
	SelectSort(a);
	//�������̨����
	system("pause");

}