#include "lnFunc.h"
#include <iomanip> 


double lnFunc::eval(double x) const
{
	std::setprecision(2);
	return log(x);
}

void lnFunc::print(std::string value) const
{
	std::cout << "ln(" << value << ")";
}

void lnFunc::print(std::shared_ptr<Function> func) const
{
	std::cout << "ln(";
	func->print("x");
	std::cout << ")";
}
