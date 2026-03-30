#include "operators.h"
#include <stdexcept>

int Adder::compute(int left, int right) {
	return left + right;
}

int Subtractor::compute(int left, int right) {
	return left - right;
}

int Multiplier::compute(int left, int right) {
	return left * right;
}

int Dividor::compute(int left, int right) {
	if (right == 0) {
		throw std::invalid_argument("divide by zero");
	}
	return left / right;
}
