#include "OperatorProxy.h"
#include<iostream>
using namespace std;

OperatorCache::OperatorCache(Operator * real) : realOperator(real) {}

OperatorCache::~OperatorCache() {
	delete realOperator;
}

int OperatorCache::compute(int left, int right) {
	// TODO: Add caching functionality...
	// only forward if computation has not been done already.
	ostringstream oss;
	oss << left << " " << right;
	string expression = oss.str();
	auto it = results.find(expression);
	if (it == results.end()) {
		cout << "not computed yet, computing!" << endl;
		int result = realOperator->compute(left, right);
		results.insert({ expression, result });
		return result;
	}
	cout << "cached already, returning" << endl;
	return it->second;

}

void OperatorCache::accept(OperatorVisitor* vis) {
	realOperator->accept(vis);
}