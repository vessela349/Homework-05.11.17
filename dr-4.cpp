// dr-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main(){
	int number;
	cout << "Enter number: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		if (number%i == 0) {
			cout << "Divisor: " << i << endl;
		}
	}

	system("PAUSE");
    return 0;
}

