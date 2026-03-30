#pragma once

class Calculator {
private:
	// stores the result of the most recent computation
	int memory;
public:
	// initializes memory to 0
	Calculator();

	// performs the computation given by the first parameter on the operands,
	// updates memory to contain the result, returns the result
	int compute(char, int, int);

	// same as above, however uses memory as the first operand
	int compute(char, int);
};
