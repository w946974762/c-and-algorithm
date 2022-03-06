#include<iostream>
using namespace std;
int s(int a[], int n)
{
	int b = 1;
	int* list = new int[n];
	list[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < b;j++)
		{
			if (list[j] != a[i])
			{
				if (j == b - 1) 
				{
					list[b] = a[i];
					b++;
				}
				else continue;
			}
			else if (list[j] == a[i])break;

		}
	}
	for (int i = 0; i < b; i++)
	{
		cout << list[i] << endl;
	}
	return 0;
}
int s2(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] != a[j])continue;
			else if (a[i] == a[j])
			{
				for (int z = j; z < n-1; z++)
				{
					a[z] = a[z + 1];
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}
int main()
{
	int a[] = { 1,2,3,4,1,2,6 };
	s(a, 7);
	s2(a, 7);
}