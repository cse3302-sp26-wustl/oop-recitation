#pragma once
#include "operators.h"
#include "operatorfactories.h"
#include<map>

class Calculator {
private:
	// stores the result of the most recent computation
	int memory;

	std::map<char, Operator*> operators;

	AbstractOperatorFactory *my_factory;

	Operator* getOperator(char);
public:
	// initializes memory to 0
	Calculator(AbstractOperatorFactory *);

	// performs the computation given by the first parameter on the operands,
	// updates memory to contain the result, returns the result
	int compute(char, int, int);

	// same as above, however uses memory as the first operand
	int compute(char, int);

	// dependency injection!
	bool addOperator(char, Operator*);

	bool createOp(char);
};
