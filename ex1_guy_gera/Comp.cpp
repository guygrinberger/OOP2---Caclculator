#include "Comp.h"

double Comp::eval(double x) const
{
	return (_arguments[0]->eval(_arguments[1]->eval(x)));
}

void Comp::print(std::string value) const
{
	_arguments[0]->print(_arguments[1]);
}

void Comp::print(std::shared_ptr<Function> func) const
{
	auto temp = std::make_shared<Comp>(_arguments[1], func);
	_arguments[0]->print(temp);
}
