#include<iostream>
using namespace std;
int main()
{
	int num = 0;
		cout << "请输入一个数字" << endl;
		cin >> num;
	cout << "您输入的数字为" << num << endl;
	int origin = num;
	int reverse = 0;
	int digit;
	do {
		digit = num % 10;
		reverse = reverse * 10 + digit;
		num /= 10;
	}while(num != 0);
	if (reverse == origin)
	{
		cout << "是回文数" << endl;
	}
	else
	{
		cout << "不是回文数" << endl;
	}
	return 0;

}
