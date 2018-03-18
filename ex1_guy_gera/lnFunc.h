#pragma once
#include "Function.h"

class lnFunc : public Function
{
public:
	double eval(double x)const;
	void print(std::string value) const;
	void print(std::shared_ptr<Function> func) const;
};

