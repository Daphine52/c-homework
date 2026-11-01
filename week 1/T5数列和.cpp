#include<iostream>
using namespace std;
int main()
{
	cout << "输入两个正整数n和a" << endl;
	int a,n;
	cin >> n >> a;
	long long sum = 0;
	long long num = 0;
	for(int i=0;i<n;i++)
	{
			num = num*10 + a;
			sum = sum + num;
	}
	cout << "总和=" << sum << endl;
	return 0;
}