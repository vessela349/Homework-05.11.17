// dr-2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;


int main() {
	int number, count = 0, sum = 0;
	double average;

	while (true) {
		cout << "Enter number: ";
		cin >> number;
		if (number > 200) {
			cout << "Number is over 200, try again: ";
			cin >> number;
		}
		if (number < 1) {
			cout << "Numbers entered: " << count << endl;
			cout << "Sum: " << sum << endl;
			cout << "Average: " << average << endl;
			break;
		}
		count++;
		sum = sum + number;
		average = sum / count;

	}

	system("PAUSE");
    return 0;
}

