#pragma once
#include "operators.h"
#include<string>

class OperatorVisitor {
public:
	virtual void visit_adder(Adder*) = 0;
	virtual void visit_subtractor(Subtractor*) = 0;
	virtual void visit_multiplier(Multiplier*) = 0;
	virtual void visit_dividor(Dividor*) = 0;
	virtual void visit_exponentiator(Exponentiator*) = 0;
	virtual ~OperatorVisitor() = default;
};

class DoubleOperatorVisitor : public OperatorVisitor {
private:
	double operand1;
	double operand2;
	double result;
public:
	DoubleOperatorVisitor(double, double);

	void visit_adder(Adder*) override;
	void visit_subtractor(Subtractor*) override;
	void visit_multiplier(Multiplier*) override;
	void visit_dividor(Dividor*) override;
	void visit_exponentiator(Exponentiator*) override;

	double getResult();
};

class StringOperatorVisitor : public OperatorVisitor {
private:
	std::string operand1;
	std::string operand2;
	std::string result;
public:
	StringOperatorVisitor(std::string, std::string);

	void visit_adder(Adder*) override;
	void visit_subtractor(Subtractor*) override;
	void visit_multiplier(Multiplier*) override;
	void visit_dividor(Dividor*) override;
	void visit_exponentiator(Exponentiator*) override;

	std::string getResult();
};