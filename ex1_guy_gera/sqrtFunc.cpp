#include "sqrtFunc.h"
#include <iomanip>

double sqrtFunc::eval(double x) const
{
	std::setprecision(2);
	return sqrt(x);
}

void sqrtFunc::print(std::string value) const
{
	std::cout << "sqrt(" << value << ")";
}

void sqrtFunc::print(std::shared_ptr<Function> func) const
{
	std::cout << "sqrt(";
	func->print("x");
	std::cout << ")";
}
