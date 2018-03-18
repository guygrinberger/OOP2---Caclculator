#include "Add.h"

double Add::eval(double x) const
{
	return (_arguments[0]->eval(x) + _arguments[1]->eval(x));
}

void Add::print(std::string value) const
{
	std::cout << "(";
	_arguments[0]->print(value);
	std::cout << " + ";
	_arguments[1]->print(value);
	std::cout << ")";
}

void Add::print(std::shared_ptr<Function> func) const
{
	std::cout << "(";
	_arguments[0]->print(func);
	std::cout << " + ";
	_arguments[1]->print(func);
	std::cout << ")";
}
