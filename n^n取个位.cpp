#include<iostream>
#include<math.h>
using namespace std;
int g(int a)
{
	int b = 0;
	int c = a % 10;
	int d = a % 4;
	if (c) b = (int)pow(c, d) % 10;
	else b = (int)pow(c, 4) % 10;
	return b;
}
int main()
{
	int a = 0;
	cin >> a;
	cout << g(a) << endl;
	return 0;
}