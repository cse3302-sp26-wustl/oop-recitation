#pragma once

class Operator {
public:
	virtual int compute(int, int) = 0;
	virtual ~Operator() = default;
};

class Adder : public Operator {
public:
	int compute(int, int) override;
};

class Subtractor : public Operator {
public:
	int compute(int, int);
};

class Multiplier : public Operator {
public:
	int compute(int, int);
};

class Dividor : public Operator {
public:
	int compute(int, int);
};

class Exponentiator : public Operator {
public:
	int compute(int, int) override;
};