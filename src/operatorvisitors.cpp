#include "operatorvisitors.h"
using namespace std;

DoubleOperatorVisitor::DoubleOperatorVisitor(double op1, double op2) :
	operand1(op1), operand2(op2), result(0)
{}

void DoubleOperatorVisitor::visit_adder(Adder*) {
	result = operand1 + operand2;
}
void DoubleOperatorVisitor::visit_subtractor(Subtractor*) {
	result = operand1 - operand2;
}
void DoubleOperatorVisitor::visit_multiplier(Multiplier*) {
	result = operand1 * operand2;
}
void DoubleOperatorVisitor::visit_dividor(Dividor*) {
	result = operand1 / operand2; // ignore error checking for now...
}
void DoubleOperatorVisitor::visit_exponentiator(Exponentiator*) {
	result = -1.0;
}

double DoubleOperatorVisitor::getResult() {
	return result;
}




StringOperatorVisitor::StringOperatorVisitor(string op1, string op2) :
	operand1(op1), operand2(op2), result("")
{}

void StringOperatorVisitor::visit_adder(Adder*) {
	result = operand1 + operand2;
}

void StringOperatorVisitor::visit_subtractor(Subtractor*) {
}
void StringOperatorVisitor::visit_multiplier(Multiplier*) {
}
void StringOperatorVisitor::visit_dividor(Dividor*) {
}
void StringOperatorVisitor::visit_exponentiator(Exponentiator*) {
}

string StringOperatorVisitor::getResult() {
	return result;
}