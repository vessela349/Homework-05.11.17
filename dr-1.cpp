// dr-1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;


int main(){
	int numOfNum, i, num, sum = 0;
	cout << "Enter number of numbers: ";
	cin >> numOfNum;

	for (i = 1; i <= numOfNum; i++) {
		cout << "Enter number between 10 and 5555: ";
		cin >> num;
		if (num >= 10 && num <= 5555) {
			sum = sum + num;
		}
		else {
			cout << "Not a number between 10 and 5555, try again: " <<endl;
			i--;
		}
	}
	cout << "Sum = " <<sum << endl;

	system("PAUSE");
    return 0;
}

