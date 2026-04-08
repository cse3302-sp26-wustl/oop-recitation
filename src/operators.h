#pragma once
//#include "operatorvisitors.h"
class OperatorVisitor;  // forward declaration


class Operator {
public:
	virtual int compute(int, int) = 0;
	// visitor pattern
	virtual void accept(OperatorVisitor*) = 0;
	virtual ~Operator() = default;
};

class Adder : public Operator {
public:
	int compute(int, int) override;
	void accept(OperatorVisitor*) override;
};

class Subtractor : public Operator{
public:
	int compute(int, int) override;
	void accept(OperatorVisitor*) override;
};

class Multiplier : public Operator{
public:
	int compute(int, int) override;
	void accept(OperatorVisitor*) override;
};

class Dividor : public Operator {
public:
	int compute(int, int) override;
	void accept(OperatorVisitor*) override;
};

class Exponentiator : public Operator {
public :
	int compute(int, int) override;
	void accept(OperatorVisitor*) override;
};