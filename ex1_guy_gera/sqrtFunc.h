#pragma once
#include "Function.h"

class sqrtFunc : public Function
{
public:
	double eval(double x)const;
	void print(std::string value) const;
	void print(std::shared_ptr<Function> func) const;
};

