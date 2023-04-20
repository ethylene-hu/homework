#include<iostream> 
#include<stdio.h>
using namespace std;
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