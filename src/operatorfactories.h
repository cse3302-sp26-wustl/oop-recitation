#pragma once
#include "operators.h"

class AbstractOperatorFactory {
public:
	virtual Operator* createOperator(char) = 0;
	virtual ~AbstractOperatorFactory() = default;
};

class AllOperatorFactory : public AbstractOperatorFactory {
	Operator* createOperator(char) override;
};

class AddOperatorFactory : public AbstractOperatorFactory {
	Operator* createOperator(char) override;
};