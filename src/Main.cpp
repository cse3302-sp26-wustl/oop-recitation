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
	AllOperatorFactory f;
	Calculator c(&f);
	c.createOp('+');
	c.createOp('-');
	c.createOp('*');
	c.createOp('/');
	c.createOp('^');
	try {
		cout << c.compute('+', 10, 5) << endl;
		cout << c.compute('-', 7) << endl;
		cout << c.compute('+', 10.5, 5.5) << endl;
		cout << c.compute('*', 12345, 6789) << endl;
		cout << c.compute('^', 3, 15) << endl;
		cout << c.compute('*', 12345, 6789) << endl;
		cout << c.compute('^', 3, 15) << endl;
	}
	catch (invalid_argument& e) {
		cout << e.what() << endl;
	}
	return 0;
}
