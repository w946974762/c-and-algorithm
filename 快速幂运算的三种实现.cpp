#include<iostream>
using namespace std;
//快速幂运算的递归实现
int power1(int a ,int b)
{
	int ans = 0;
	if (b == 0) ans = 1;
	else
	{
		ans = power1(a * a, b / 2);
		if (b % 2 == 1) ans *= a;
	}
	return ans;
}
//快速幂运算的循环实现
int power2(int a, int b)
{
	int ans = 1;
	while (b)
	{
		if (b % 2) ans*=a;
		a *= a, b = b / 2;
	}
	return ans;
}
//非递归快速幂(位运算)
int power3(int a, int b) 
{
	int ans = 1;
	while (b) 
	{
		if (b & 1)        //如果n的当前末位为1(按位与)
			ans *= a;  //ans乘上当前的a
		a *= a;        //a自乘
		b >>= 1;       //n往右移一位,去掉最后一位
	}
	return ans;
}
int main()
{
	int a = 5, b = 5;
	cout << power1(a, b) << power2(a, b) <<power3(a,b)<< endl;
	return 0;
}