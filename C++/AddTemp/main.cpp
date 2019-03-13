#include "AddTemp.h"

void main()
{
	int a = 3, b = 5;
	double d1 = 3.5, d2 = 3.5;
	const char *c = "josephahn";
	const char *d = "is genius";

	printf("a + b = %d\n", Add(a, b));	
	printf("d1 + d2 = %f\n", Add(d1, d2));
	printf("c + d = %s\n", Add(c, d));

	system("pause");
}