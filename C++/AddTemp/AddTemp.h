#ifndef _ADDTEMP_H_
#define _ADDTEMP_H_

#include "Turboc.h"

template <typename T>
T Add(T a, T b)
{
	return a + b;
}

template <> const char *Add<const char *>(const char *a, const char *b)
{
	char *temp_a = new char[strlen(a) + strlen(b) + 1];
	char *temp_b = new char[strlen(b) + 1];

	strcpy_s(temp_a, strlen(a) + 1, a);
	strcpy_s(temp_b, strlen(b) + 1, b);

	strcat_s(temp_a, strlen(temp_a) + strlen(temp_b) + 1, temp_b);

	return temp_a;
}

#endif