// dr-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main(){
	for (int i = 100; i < 1000; i++) {
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = (i / 100) % 10;
		if (a != b && b != c && a != c) {
			cout << i <<" ";
		}
	}
	
	system("PAUSE");
    return 0;
}

