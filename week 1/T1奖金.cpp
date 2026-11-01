#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	double b = 0;
	cout << "请输入利润" << endl;
	cin >> a;
	cout << "您输入的利润为:" << a << endl;
	if (a > 1000000)
	{
		b = (a - 1000000) * 0.01 + 6000 + 6000 + 10000 + 7500 + 10000;
	}
	else if (a > 600000)
	{
		b = (a - 600000) * 0.015 + 6000 + 10000 + 7500 + 10000;
	}
	else if (a > 400000)
	{
		b = (a - 400000) * 0.03 + 10000 + 7500 + 10000;
	}
	else if (a > 200000)
	{
		b = (a - 200000) * 0.05 + 7500 + 10000;
	}
	else if (a > 100000)
	{
		b = (a - 100000) * 0.075 + 10000;
	}
	else
	{
		b = a * 0.1;
	}
	cout << "奖金为" << b << endl;
	system("pause");
		return 0;
}