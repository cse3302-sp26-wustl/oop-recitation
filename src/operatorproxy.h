#pragma once

#include "operators.h"
#include<map>
#include<string>
#include<sstream>

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