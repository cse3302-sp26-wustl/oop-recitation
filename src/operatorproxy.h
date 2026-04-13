#pragma once

#include "operators.h"
#include <map>
#include<sstream>
#include<iostream>
#include<string>

class OperatorCache : public Operator {
private:
	Operator* realOperator;
	std::map<std::string, int> results;
public:
	OperatorCache(Operator*);
	~OperatorCache();
	int compute(int, int) override;
	void accept(OperatorVisitor*) override;
};