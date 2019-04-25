#if 0

#include "Turboc.h"

void main()
{
	int a[3][5], i, j;
	
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			a[i][j] = i*5 + j;
		}
	}

	printf("a[0] = %d\n", a[0]);
	printf("a[0]+5 = %d\n", a[0]+5);
	
	system("pause");
}

#endif