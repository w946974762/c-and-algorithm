#include<iostream>
using namespace std;
int main()
{
	int N = 0;
	cout << "请输入数组个数";
	cin >> N;
	int* p = new int[N];
	cout << "请输入数组";
	for (int i = 0; i < N; i++)
	{
		cin >> p[i];
	}
	int find = 0;
	cout << "请输入查找目标";
	cin >> find;
	int left = 0, right = N - 1;
	while (left <= right)
	{
		int temp = (right + left) / 2;
		if (find > p[temp])
		{
			left = temp+1;
		}
		else if (find < p[temp])
		{
			right = temp-1;
		}
		else
		{
			cout << "找到" << temp << endl;
			break;
		}
	}
	if (left > right)
		cout << "找不到" << endl;


	return 0;
}