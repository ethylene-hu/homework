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
void work03(void) {
	int age = 0;
	cin >> age;
	if (1 <= age && age <= 10) {
		cout << "Children" << endl;
	}if (11 <= age && age <= 20) {
		cout << "Teenagers" << endl;
	}if (21 <= age && age <= 40) {
		cout << "Youth" << endl;
	}if (41 <= age && age <= 50) {
		cout << "middle-aged" << endl;
	}if (51 <= age && age <= 80) {
		cout << "Elderly" << endl;
	}if (81 <= age && age <= 100) {
		cout << "Old man" << endl;
	}
	system("pause");
}
void work04(void) {
	int grade = 0;
	cin >> grade;
	if (90 <= grade && grade <= 100) {
		cout << "A" << endl;
	}if (80 <= grade && grade < 90) {
		cout << "B" << endl;
	}if (70 <= grade && grade < 80) {
		cout << "C" << endl;
	}if (60 <= grade && grade < 70) {
		cout << "D" << endl;
	}if (0 <= grade && grade < 70) {
		cout << "E" << endl;
	}

	system("pause");
}
void work05(void);
int main() {
	//work01();\
	//work02();
	//work03();//穷举法
	//work04();//穷举法，输入输出，没有存储结构
	work05();

}