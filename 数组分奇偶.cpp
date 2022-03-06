#include<iostream>
using namespace std;
int s(int a[], int n)
{
	int* p = new int[n];
	for (int i = 0, j = 0, z = 1; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			p[n - z] = a[i];
			z++;
		}
		else if (a[i] % 2 == 1)
		{
			p[j] = a[i];
			j++;
		}
	}
	for (int i = 0; i < n;i++)
	{
		cout << p[i] << endl;
	}
	return 0;
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	s(a, 5);
}