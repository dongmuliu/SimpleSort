/*
�����������������������������ĵ�һ��Ԫ�ز��뵽�������ĺ��ʵ�λ�á������飺�Ƚϵ��٣����öࡣ
��������˼·��
1. �ӵ�һ��Ԫ�ؿ�ʼ����Ԫ�ؿ�����Ϊ�Ѿ�������
2. ȡ����һ��Ԫ�أ����Ѿ������Ԫ�������дӺ���ǰɨ��
3. �����Ԫ�أ������򣩴�����Ԫ�أ�����Ԫ���Ƶ���һλ��
4. �ظ�����3��ֱ���ҵ��������Ԫ��С�ڻ��ߵ�����Ԫ�ص�λ��
5. ����Ԫ�ز��뵽��λ�ú�
6. �ظ�����2~5
*/
#include<string>
#include<vector>
#include<iostream>
#include<stdio.h>
using namespace std;
//��������
//���룺����������
void InsertSort(vector<int>&insertvector)
{
	int temp;
	for (int i = 1; i < insertvector.size(); i++)
	{
		temp = insertvector[i];
		for (int j = i-1; j >=0; j--)
		{
			//�����������ƶ�Ԫ��λ��
			if (insertvector[j] >temp)
			{
				insertvector[j+1] = insertvector[j];
				insertvector[j] = temp;
				

			}
			else
			{
				break;
			}
			
		}

	}
}
int main()
{
	int b;
	vector<int>inputvector;
	//�س�ֹͣ����ѭ��
	while (cin >> b)
	{
		inputvector.push_back(b);
		char c = cin.get();
		if (c == '\n')
			break;
	}
	InsertSort(inputvector);
	//�������������
	for (int i = 0; i < inputvector.size(); i++)
	{
		printf("%d ", inputvector[i]);
	}
	//�������̨����
	system("pause");
}