#include "operatorfactories.h"
#include "operatorproxy.h"

Operator* AllOperatorFactory::createOperator(char op) {
	if (op == '+') {
		return new Adder();
	}
	if (op == '-') {
		return new Subtractor();
	}
	if (op == '*') {
		return new OperatorCache(new Multiplier());
	}
	if (op == '/') {
		return new Dividor();
	}
	if (op == '^') {
		return new OperatorCache(new Exponentiator());
	}
	return nullptr;
}




Operator* AddOperatorFactory::createOperator(char op) {
	if (op == '+') {
		return new Adder();
	}
	return nullptr;
}
