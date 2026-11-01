#include<iostream>
using namespace std;
short int divide(unsigned short int a,unsigned short int b)
{
	if (b == 0)
	{
		return -1;
	}
	return (short int)(a / b);
}
int main()
{
	unsigned short int x, y;
	cout << "请输入两个unsigned short int整数" << endl;
	cin >> x >> y;
	short int result = divide(x, y);
	if (result == -1)
		cout << "除数不能为0" << endl;
	else
		cout << "结果为" << result << endl;
	return 0;
}