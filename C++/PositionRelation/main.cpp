#include "Turboc.h"
#include "PositionRelation.h"

void main()
{
	Position A(5, 3, 'a');
	Position B(5, 3, 'b');
	
	if (A >= B)
		printf("A>=B");
}