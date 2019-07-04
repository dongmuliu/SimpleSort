/*
（无序区，有序区）。从无序区通过交换找出最大元素放到有序区前端。
选择排序思路：
1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
2. 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数。
3. 针对所有的元素重复以上的步骤，除了最后一个。
4. 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
//冒泡排序
//输入：需排序向量
void BubbleSort(vector<int>&sortvector)
{
	int size = sortvector.size();
	int temp;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j<size-i-1; j++)
		{
			//交换
			if (sortvector[j]>sortvector[j + 1])
			{
				temp = sortvector[j];
				sortvector[j] = sortvector[j + 1];
				sortvector[j + 1] = temp;
			}

		}
		
	}
	//输出排序后的向量
	for (int i = 0; i < size; i++)
	{
		cout << sortvector[i] <<" ";
	}
	
}

int main()
{
	vector<int>a;
	int b;
	
	//回车停止输入循环
	while (cin >> b)
	{
		a.push_back(b);
		char c = cin.get();
		if (c == '\n')
			break;
	}
	
	//调用冒泡排序
	BubbleSort(a);
	//避免控制台闪退
	system("pause");

}

