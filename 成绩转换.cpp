#include<iostream> 
#include<stdio.h>
using namespace std;
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