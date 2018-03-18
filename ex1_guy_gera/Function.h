#pragma once
#include <vector>
#include <memory>
#include <iostream>
#include <string>
#include <math.h>

class Function
{
public:
	Function();
	~Function();
	virtual double eval(double x) const = 0;
	virtual void print(std::string value) const = 0;
	virtual void print(std::shared_ptr<Function> func) const = 0;

protected:
	std::vector<std::shared_ptr<Function>> _arguments;
};

