/*
（小数，基准元素，大数）。在区间中随机挑选一个元素作基准，将小于基准的元素放在基准之前，大于基准的元素放在基准之后，再分别对小数区与大数区进行排序。
快速排序思路：
1. 选取第一个数为基准
2. 将比基准小的数交换到前面，比基准大的数交换到后面
3. 对左右区间重复第二步，直到各区间只有一个数
*/

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
//快速排序
//参数1:需排序向量
//参数2：起始位置
//参数3：终止位置
void QuikSort(vector<int>&sortvector, int begin, int end)
{
	int low = begin;
	int high = end;
	//结束标志
	if (begin >= end)
		return;
	//设置基准
	int temp = sortvector[begin];
	while (begin < end)
	{
		//从右向左遍历
		while (begin < end&&sortvector[end] >= temp)
			end--;
		//从左向右遍历
		while (begin < end&&sortvector[begin] <= temp)
			begin++;
		//交换
		if (begin < end)
		{
			swap(sortvector[end], sortvector[begin]);
		}
	}
	//交换基准位置
	sortvector[low] = sortvector[begin];
	sortvector[begin] = temp;
	//递归
	QuikSort(sortvector,low,begin-1);
	QuikSort(sortvector, begin + 1, high);
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
	//调用快速排序
	QuikSort(a, 0, a.size() - 1);
	//输出排序后的向量
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	//避免控制台闪退
	system("pause");
}