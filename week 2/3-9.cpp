#include<iostream>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2;i * i <= n;i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int a;
	cout << "请输入一个数字" << endl;
	cin >> a;
	if (isPrime(a))
		cout << a << "是质数" << endl;
	else
		cout << a << "不是质数" << endl;
	return 0;
}