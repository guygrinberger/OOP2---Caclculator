#pragma once
#include "Commands.h"

class Poly : public Commands
{
public:
	Poly(std::vector <int> numbers);
	double eval(double x) const;
	void print(std::string value) const;
	void print(std::shared_ptr<Function> func) const;

private:
	std::vector <int> _coefficients;
};

