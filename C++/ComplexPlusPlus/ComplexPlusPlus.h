#ifndef COMPLEXPLUSPLUS_HEADER
#define COMPLEXPLUSPLUS_HEADER

#include "Turboc.h"

class Complex
{
private:
	double real;
	double image;

public:
	Complex() {}
	Complex(double r, double i) : real(r), image(i) {}
	void OutComplex() const { printf("%.2f + %.2fi\n", real, image); }

	Complex &operator ++()
	{
		++real;

		return *this;
	}

	const Complex operator++(int dummy)
	{
		Complex R = *this;
		++*this;

		return R;
	}
};

#endif