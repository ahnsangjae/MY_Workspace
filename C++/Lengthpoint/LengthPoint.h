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
	void OutMili() { printf("���� = %fmili\n", GetMili()); }
	void SetInch(double i) { mili = i * 25.4; }
	double GetInch() { return mili / 25.4; }
	void OutInch() { printf("���� = %finch\n", GetInch()); }
};

class LengthPoint : public Length
{
private:
	double p;

public:
	LengthPoint(int m)	// constructor
	{
		Length::SetMili(m);
		p = Length::GetInch() * 72;
	}

	double GetPoint() { return p; }
	void OutPoint() { printf("���� = %fpoint\n", GetPoint()); }
};

#endif