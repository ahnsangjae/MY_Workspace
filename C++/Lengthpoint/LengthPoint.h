#ifndef LENGTHPOINT_HEADER
#define LENGTHPOINT_HEADER

#include "Turboc.h"

class Length
{
private:
	double mili;

public:
	void SetMili(double m) { mili = m; }
	double GetMili() { return mili; }
	void OutMili() { printf("길이 = %fmili\n", GetMili()); }
	void SetInch(double i) { mili = i * 25.4; }
	double GetInch() { return mili / 25.4; }
	void OutInch() { printf("길이 = %finch\n", GetInch()); }
};

class LengthPoint : public Length
{
private:
	int point;

public:
	LengthPoint(int p) : point(p) {}	// constructor

	double GetInch() { return (double)point * 1/72; }	// point -> Inch
	double GetMili() { return GetInch() * 25.4; }		// Inch -> Mili
	void OutInch() { printf("%fInch\n", GetInch()); }
	void OutMili() { printf("%fMili\n", GetMili()); }
};

#endif