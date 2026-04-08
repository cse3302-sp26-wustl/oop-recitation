#include "calculator.h"
#include<stdexcept>

Calculator::Calculator(AbstractOperatorFactory *factory) : memory(0), my_factory(factory) {
}

Calculator::~Calculator() {
	for (auto p : operators) {
		delete p.second;
	}
}

// performs the computation given by the first parameter on the operands,
// updates memory to contain the result, returns the result
int Calculator::compute(char op, int left, int right) {
	Operator* o = getOperator(op);
	if (o != nullptr) {
		// request forwarding
		memory = o->compute(left, right);
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

Operator* Calculator::getOperator(char o) {
	auto it = operators.find(o);
	if (it != operators.end()) {
		return it->second;
	}
	return nullptr;

}

bool Calculator::addOperator(char op, Operator* o) {
	auto ret = operators.insert({ op,o });
	return ret.second;
}

bool Calculator::createOp(char op_symbol) {
	Operator* op = my_factory->createOperator(op_symbol);
	if (op != nullptr) {
		return addOperator(op_symbol, op);
	}
	return false;
}


