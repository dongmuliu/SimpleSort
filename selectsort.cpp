/*
（有序区，无序区）。在无序区里找一个最小的元素跟在有序区的后面。对数组：比较得多，换得少。
选择排序思路：
1. 在未排序序列中找到最小（大）元素，存放到排序序列的起始位置
2. 从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾
3. 以此类推，直到所有元素均排序完毕
*/
#include<string>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
//快速排序
//输入：待排序向量
void SelectSort(vector<int>&selectsort)
{
	int length = selectsort.size();
	for (int i = 0; i < length-1; i++)
	{
		int temp = selectsort[i];
		for (int j = i+1; j < length; j++)
		{
			//满足条件，交换
			if (selectsort[i]>selectsort[j])
			{
				temp = selectsort[i];
				selectsort[i] = selectsort[j];
				selectsort[j] = temp;

			}
		}
	}
	//输出排序后的向量
	for (int i = 0; i < length; i++)
	{
		cout << selectsort[i] << " ";
	}

}
int main()
{
	int b;
	vector<int>a;
	//回车停止输入循环
	while (cin >> b)
	{
		a.push_back(b);
		char c = cin.get();
		if (c == '\n')
			break;
		
	}
	//调用选择排序
	SelectSort(a);
	//避免控制台闪退
	system("pause");

}