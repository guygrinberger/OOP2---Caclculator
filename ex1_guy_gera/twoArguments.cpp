#include "twoArguments.h"



twoArguments::twoArguments(std::shared_ptr<Function> func1, std::shared_ptr<Function> func2)
{
	_arguments.push_back(func1);
	_arguments.push_back(func2);
}

twoArguments::twoArguments()
{
}


twoArguments::~twoArguments()
{
}
