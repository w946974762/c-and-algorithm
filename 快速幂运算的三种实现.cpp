#include<iostream>
using namespace std;
//����������ĵݹ�ʵ��
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
//�����������ѭ��ʵ��
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
//�ǵݹ������(λ����)
int power3(int a, int b) 
{
	int ans = 1;
	while (b) 
	{
		if (b & 1)        //���n�ĵ�ǰĩλΪ1(��λ��)
			ans *= a;  //ans���ϵ�ǰ��a
		a *= a;        //a�Գ�
		b >>= 1;       //n������һλ,ȥ�����һλ
	}
	return ans;
}
int main()
{
	int a = 5, b = 5;
	cout << power1(a, b) << power2(a, b) <<power3(a,b)<< endl;
	return 0;
}