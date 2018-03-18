#include "oneArgument.h"



oneArgument::oneArgument(std::shared_ptr<Function> func)
{
	_arguments.push_back(func);
}

oneArgument::oneArgument()
{
}


oneArgument::~oneArgument()
{
}
