#include "calculator.h"
#include<stdexcept>

Calculator::Calculator() : memory(0) {}

// performs the computation given by the first parameter on the operands,
// updates memory to contain the result, returns the result
int Calculator::compute(char op, int left, int right) {
	if (op == '+') {
		// request forwarding
		memory = a.compute(left, right);
	}
	else if (op == '-') {
		memory = s.compute(left, right);
	}
	else if (op == '*') {
		memory = m.compute(left, right);
	}
	else if (op == '/') {
		memory = d.compute(left, right);
	}
	else {
		throw std::invalid_argument("invalid operator");
	}
	return memory;
}

// same as above, however uses memory as the first operand
int Calculator::compute(char op, int right) {
	return compute(op, memory, right);
}


/*
Operator* Calculator::getOperator(char o) {
	if (o == '+') {
		return &a;
	}
	else if (o == '-') {
		return &s;
	}
	else if (o == '*') {
		return &m;
	}
	else if (o == '/') {
		return &d;
	}
	else {
		return nullptr;
	}
}
*/

