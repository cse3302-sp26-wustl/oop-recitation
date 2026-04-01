#pragma once
#include "operators.h"

class Calculator {
private:
	// stores the result of the most recent computation
	int memory;
	// object composition - calculator is composed of adder, subtractor, ...
	// dependencies: calculator depends on adder, subtractor, ...
	Adder a;
	Subtractor s;
	Multiplier m;
	Dividor d;
public:
	// initializes memory to 0
	Calculator();

	// performs the computation given by the first parameter on the operands,
	// updates memory to contain the result, returns the result
	int compute(char, int, int);

	// same as above, however uses memory as the first operand
	int compute(char, int);

	//Operator* getOperator(char);
};
