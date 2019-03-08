#include "Turboc.h"
#include "RotateInsertCoin.h"

void main()
{
	SignalManager SM(MAX, 15);
	BlinkMessage M(10, 70, 10, "I N S E R T    C O I N", 20);

	for (clrscr(); !_kbhit(); delay(5))
	{
		SM.Generate();
		SM.Move();

		M.Blink();
		M.R_move();
	}
}