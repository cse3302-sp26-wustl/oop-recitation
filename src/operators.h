#pragma once
class Operator {
public:
	virtual int compute(int, int) = 0;
	virtual ~Operator() = default;
};

class Adder {
public:
	int compute(int, int);
};

class Subtractor {
public:
	int compute(int, int);
};

class Multiplier {
public:
	int compute(int, int);
};

class Dividor {
public:
	int compute(int, int);
};