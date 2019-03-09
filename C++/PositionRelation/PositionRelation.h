#ifndef POSITION_RELATION_HEADER
#define POSITION_RELATION_HEADER

#include "Turboc.h"

class Position
{
private:
	int x;
	int y;
	char ch;

public:
	Position(int ax, int ay, char ach) : x(ax), y(ay), ch(ach) {}
	~Position() {}

	void OutPosition()
	{
		gotoxy(x, y);
		_putch(ch);
	}

	bool operator == (const Position &P) const
	{
		return (y == P.y || x == P.x);
	}

	bool operator > (const Position &P) const
	{
		if (y > P.y)
			return 1;
		else if (y < P.y)
			return 0;
		else if (x > P.x)
			return 1;
		else if (x < P.x)
			return 0;
	}

	bool operator >= (const Position &P) const
	{
		return (*this == P || *this > P);
	}

	bool operator < (const Position &P) const
	{
		return !(*this >= P);
	}

	bool operator <= (const Position &P) const
	{
		return !(*this > P);
	}
};

#endif