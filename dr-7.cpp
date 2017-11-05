// dr-7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main(){
	int num, a;
	cout << "Enter number between 10 and 200: ";
	cin >> num;

	if (num < 10 || num >200) {
		cout << "Not a number between 10 and 200" << endl;
		system("PAUSE");
		return 0;
	}

	for (int i = num; i >= 10; i--) {
		a = i % 7;
		if (a == 0) {
			cout << i << " ";
		}
	}

	system("PAUSE");
    return 0;
}

