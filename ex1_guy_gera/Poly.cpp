#include "Poly.h"

Poly::Poly(std::vector<int> numbers)
{
	_coefficients = numbers;
}

double Poly::eval(double x) const
{
	double value = 0;
	for (int xPow = 0; xPow < int(_coefficients.size()); xPow++)
		value += _coefficients[xPow] * pow(x, xPow);

	return value;
}

void Poly::print(std::string value) const
{
	for (int xPow = _coefficients.size() - 1; xPow >= 0; xPow--)
	{
		if (_coefficients[xPow] != 0)
		{
			std::cout << _coefficients[xPow] << "*" << value << "^" << xPow;
			if (xPow != 0)
				std::cout << " + ";
		}
	}
}

void Poly::print(std::shared_ptr<Function> func) const
{
	for (int xPow = _coefficients.size() - 1; xPow >= 0; xPow--)
	{
		if (_coefficients[xPow] != 0)
		{
			std::cout << _coefficients[xPow] << "*";
			func->print("x");
			std::cout << "^" << xPow;
			if (xPow != 0)
				std::cout << " + ";
		}
	}
}


