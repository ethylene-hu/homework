#include<iostream> 
#include<stdio.h>
using namespace std;
void work01(void) {
	int num;
	int i = 0, j = 0, k = 0;
	int re = 0, tem = 0;

	cin >> num;
	for (i = 0; i < 3; i++) {
		tem = num % 10;
		re = re + tem;
		num = num / 10;
	}
	cout << re << endl;

	system("pause");
}