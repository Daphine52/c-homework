#include<iostream>
using namespace std;
int main()
{
	int mon1 = 1, mon2 = 1;
	int mon;
	cout << "第1个月" << mon1 << "对" << endl;
	cout << "第2个月" << mon2 << "对" << endl;
	for (int i = 3;i <= 20; i++)
	{
		mon = mon1 + mon2;
		cout<<"第"<<i<<"个月"<<mon<<"对"<<endl;
		mon1 = mon2;
		mon2 = mon;
	}
	return 0;
}