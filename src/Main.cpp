/**
* Main.cpp
* CSE 332S
* Studio Num:
* Author:
*/

#include "calculator.h"
#include <iostream>
#include<stdexcept>

using namespace std;

int main() {
	Calculator c;
	cout << c.compute('+', 10, 5) << endl;
	cout << c.compute('-', 7) << endl;
	cout << c.compute('*', 5, 5) << endl;
	cout << c.compute('/', 5) << endl;
	try {
		//cout << c.compute('/', 20, 0) << endl;
		 cout << c.compute('^', 2, 4) << endl;
	}
	catch (invalid_argument& e) {
		cout << e.what() << endl;
	}
	return 0;
}
