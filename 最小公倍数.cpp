#include<iostream>
using namespace std;
int zz(int a, int b)//շת??????
{
	int temp = 0;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a >> b;
	if (a > b) cout << a*(b/zz(a, b)) << endl;
	else cout << a*(b/zz(b, a)) << endl;
	return 0;
}