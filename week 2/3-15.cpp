#include<iostream>
using namespace std;
int getPower(int x, int y)
{
	if (y < 0)
		return 0;
	if (y == 0)
		return 1;
	return x * getPower(x, y - 1);
}
double getPower(double x,int y)
{
	if (y == 0)
		return 1.0;
	return x * getPower(x, y - 1);
}
int main()
{
	int m, n;
	double t;
	cout << "请输入整数底数m，实数底数t,指数n" << endl;
	cin >> m >> t >> n;
	int result1 = getPower(m, n);
	double result2 = getPower(t, n);
	cout << m << "^" << n << "=" << result1 << endl;
	cout << t << "^" << n << "=" << result2 << endl;
	return 0;
}