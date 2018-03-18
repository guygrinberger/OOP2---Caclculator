#pragma once
#include "Arguments.h"

class twoArguments : public Commands
{
public:
	twoArguments(std::shared_ptr<Function> func1, std::shared_ptr<Function> func2);
	twoArguments();
	~twoArguments();
};

