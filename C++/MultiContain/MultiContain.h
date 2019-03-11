#ifndef _MULTICONTAIN_H_
#define _MULTICONTAIN_H_

#include "Turboc.h"

class Date
{
protected:
	int year, month, day;

public:
	Date(int y, int m, int d) : year(y), month(m), day(d) { }
	void OutDate() { printf("%d/%d/%d", year, month, day); }
};

class Time
{
protected:
	int hour, min, sec;

public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() { printf("%d:%d:%d", hour, min, sec); }
};

class Now
{
private:
	bool bEngMessage;
	int milisec;
	Date D;
	Time T;

public:
	Now(int y, int m, int d, int h, int min, int s, int ms, bool b = FALSE)
		: D(y, m, d), T(h, min, s) {
		milisec = ms; bEngMessage = b;
	}

	void OutNow()
	{
		printf(bEngMessage ? "Now is " : "지금은 ");
		D.OutDate();
		_putch(' ');
		T.OutTime();
		printf(".%d", milisec);
		puts(bEngMessage ? "." : " 입니다.");
	}
};

#endif