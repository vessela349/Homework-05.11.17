// dr-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main(){
	int number;
	int digits = 0;
	cout << "Enter positive whole number: ";
	cin >> number;

	while (number >= 1) {
		number = number / 10;
		digits++;
	}
	if (digits != 0) {
		cout << "Digits: " << digits << endl;
	}
	else {
		cout << "Not a positive whole number." << endl;
	}
	system("PAUSE");
    return 0;
}

