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
	AllOperatorFactory factory;
	Calculator c(&factory);
	c.createOp('+');
	c.createOp('-');

	try {
		cout << c.compute('+', 10, 5) << endl;
		cout << c.compute('-', 7) << endl;
		cout << c.compute('+', 10.5, 5.5) << endl;
	}
	catch (invalid_argument& e) {
		cout << e.what() << endl;
	}
	return 0;
}
