#pragma once
#include "Arguments.h"

class oneArgument : public Commands
{
public:
	oneArgument(std::shared_ptr<Function> func);
	oneArgument();
	~oneArgument();
};

