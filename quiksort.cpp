/*
��С������׼Ԫ�أ����������������������ѡһ��Ԫ������׼����С�ڻ�׼��Ԫ�ط��ڻ�׼֮ǰ�����ڻ�׼��Ԫ�ط��ڻ�׼֮���ٷֱ��С�������������������
��������˼·��
1. ѡȡ��һ����Ϊ��׼
2. ���Ȼ�׼С����������ǰ�棬�Ȼ�׼���������������
3. �����������ظ��ڶ�����ֱ��������ֻ��һ����
*/

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
//��������
//����1:����������
//����2����ʼλ��
//����3����ֹλ��
void QuikSort(vector<int>&sortvector, int begin, int end)
{
	int low = begin;
	int high = end;
	//������־
	if (begin >= end)
		return;
	//���û�׼
	int temp = sortvector[begin];
	while (begin < end)
	{
		//�����������
		while (begin < end&&sortvector[end] >= temp)
			end--;
		//�������ұ���
		while (begin < end&&sortvector[begin] <= temp)
			begin++;
		//����
		if (begin < end)
		{
			swap(sortvector[end], sortvector[begin]);
		}
	}
	//������׼λ��
	sortvector[low] = sortvector[begin];
	sortvector[begin] = temp;
	//�ݹ�
	QuikSort(sortvector,low,begin-1);
	QuikSort(sortvector, begin + 1, high);
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
	//���ÿ�������
	QuikSort(a, 0, a.size() - 1);
	//�������������
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	//�������̨����
	system("pause");
}