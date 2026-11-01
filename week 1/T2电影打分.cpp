#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;
	cout << "您给出的评分是：" << score << endl;
	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
	case 7:
		cout << "非常好" << endl;
		break;
	case 6:
	case 5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}
	system("pause");
		return 0;
}