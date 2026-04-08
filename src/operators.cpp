#include "operators.h"
#include "operatorvisitors.h"
#include <stdexcept>

int Adder::compute(int left, int right) {
	return left + right;
}

void Adder::accept(OperatorVisitor* v) {
	v->visit_adder(this);
}

int Subtractor::compute(int left, int right) {
	return left - right;
}

void Subtractor::accept(OperatorVisitor* v) {
	v->visit_subtractor(this);
}

int Multiplier::compute(int left, int right) {
	return left * right;
}

void Multiplier::accept(OperatorVisitor* v) {
	v->visit_multiplier(this);
}

int Dividor::compute(int left, int right) {
	if (right == 0) {
		throw std::invalid_argument("divide by zero");
	}
	return left / right;
}

void Dividor::accept(OperatorVisitor* v) {
	v->visit_dividor(this);
}

int Exponentiator::compute(int base, int exp) {
	int result = base;
	while (exp > 1) {
		result = result * base;
		exp--;
	}
	return result;
}

void Exponentiator::accept(OperatorVisitor* v) {
	v->visit_exponentiator(this);
}
