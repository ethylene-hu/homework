#include<iostream> 
#include<stdio.h>
using namespace std;
void work02() {

	int in = 0;
	cin >> in;
	switch (in)
	{
	case 1:
		cout << "Spring" << endl;
		break;
	case 2:
		cout << "Summer" << endl;
		break;
	case 3:
		cout << "Fall" << endl;
		break;
	case 4:
		cout << "Winter" << endl;
		break;

	default:
		break;
	}
	system("pause");
}