#include<iostream>
using namespace std;
int Max(int a, int b)
{
	int c = a < b ? a : b;
	for (int i = c;i >= 1;i--)
	{
		if ((a % i == 0) && (b % i == 0))
			return i;
	}
}
int main()
{
	int x, y;
	cout << "请输入两个整数" << endl;
	cin >> x >> y;
	int z = Max(x, y);
	int n = (x / z) * y;
	cout << "最大公约数为" << z << endl;
	cout << "最小公倍数为" << n << endl;
	return 0;
}