#pragma once
#include "operators.h"
#include "operatorfactories.h"
#include<map>

class Calculator {
private:
	// stores the result of the most recent computation
	int memory;
	double fp_memory;
	AbstractOperatorFactory *my_factory;

	// object composition - calculator is composed of adder, subtractor, ...
	// dependencies: calculator depends on adder, subtractor, ...
	std::map<char, Operator*> operators;

	// make private as this function should not be used externally
	Operator* getOperator(char);

public:
	// initializes memory to 0
	Calculator(AbstractOperatorFactory*);
	~Calculator();

	// performs the computation given by the first parameter on the operands,
	// updates memory to contain the result, returns the result
	int compute(char, int, int);

	// same as above, however uses memory as the first operand
	int compute(char, int);

	double compute(char, double, double);
	double compute(char, double);

	// dependency injection!
	bool addOperator(char, Operator*);

	bool createOp(char);
};
