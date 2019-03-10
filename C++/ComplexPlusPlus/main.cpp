#include "Turboc.h"
#include "ComplexPlusPlus.h"

void main()
{
	Complex C1(1.1, 2.2);
	C1.OutComplex();

	C1++;
	C1.OutComplex();

	++C1;
	C1.OutComplex();
}