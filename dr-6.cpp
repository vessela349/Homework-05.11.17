// dr-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main(){
	int num, a, b, sum = 0;
	cout << "Enter 2-digit number: ";
	cin >> num;

	if (num < 10 || num >99) {
		cout << "Not a 2-digit number." << endl;
		system("PAUSE");
		return 0;
	}

	for (int i = 10; i <= num; i++) {
		a = i % 10;
		b = i / 10;
		sum = sum + a + b;
	}
	cout << "Sum of digits of all 2-digit numbers up to " << num << " = " << sum << endl;

	system("PAUSE");
    return 0;
}

