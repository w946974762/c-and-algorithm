#include<iostream>
using namespace std;
int main()
{
	int N = 0;
	cout << "�������������";
	cin >> N;
	int* p = new int[N];
	cout << "����������";
	for (int i = 0; i < N; i++)
	{
		cin >> p[i];
	}
	int find = 0;
	cout << "���������Ŀ��";
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
			cout << "�ҵ�" << temp << endl;
			break;
		}
	}
	if (left > right)
		cout << "�Ҳ���" << endl;


	return 0;
}