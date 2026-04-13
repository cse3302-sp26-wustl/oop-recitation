#include "OperatorProxy.h"
using namespace std;

OperatorCache::OperatorCache(Operator * real) : realOperator(real) {}

OperatorCache::~OperatorCache() {
	delete realOperator;
}

int OperatorCache::compute(int left, int right) {
	// check if I have computed the result already, if so return it.
	// otherwise, compute it
	ostringstream oss;
	oss << left << " " << right;
	string expression = oss.str();
	auto it = results.find(expression);
	if (it == results.end()) {
		cout << "not computed yet, forwarding to operator!" << endl;
		int result = realOperator->compute(left, right);
		results.insert({ expression, result });
		return result;
	}
	cout << "cached, return directly!" << endl;
	return it->second;
}

void OperatorCache::accept(OperatorVisitor* vis) {
	realOperator->accept(vis);
}