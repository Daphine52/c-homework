#include<iostream>
using namespace std;
int f(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return f(n - 1) + f(n - 2);
}
int main()
{
	int x;
	cout << "请输入n" << endl;
	cin >> x;
	cout << "f(" << x << ")=" << f(x) << endl;
	return 0;
}