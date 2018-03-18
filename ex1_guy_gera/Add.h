#pragma once
#include "twoArguments.h"

class Add : public twoArguments
{
public:
	Add(std::shared_ptr<Function> func1, std::shared_ptr<Function> func2) : twoArguments(func1, func2) {}
	double eval(double x) const;
	void print(std::string value) const;
	void print(std::shared_ptr<Function> func) const;
};

