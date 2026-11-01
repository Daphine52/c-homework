#include<iostream>
using namespace std;
int main()
{
	int peach = 1;
		for (int i = 9;i >= 1;i--)
		{
			peach = (peach + 1) * 2;
		}
	cout << "摘桃子总数" << peach << endl;
	return 0;
}