#pragma once
#include "twoArguments.h"

class Mul : public twoArguments
{
public:
	Mul();
	~Mul();
	Mul(std::shared_ptr<Function> func1, std::shared_ptr<Function> func2) : twoArguments(func1, func2) {}
	double eval(double x) const;
	void print(std::string value) const;
	void print(std::shared_ptr<Function> func) const;
};

