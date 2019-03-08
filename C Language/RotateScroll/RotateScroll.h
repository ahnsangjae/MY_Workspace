#ifndef ROTATE_HEADER
#define ROTATE_HEADER

#include "Turboc.h"

void print_str(int start, int end, const char *str);
void R_move(int start, int end, char *str);
void L_move(int start, int end, char *str);
char *init_array(int start, int end, char *str, const char *astr);

void print_str(int start, int end, const char *str)
{
	gotoxy(start + 1, end);
	puts(str);
}

void R_move(int start, int end, char *str)
{
	char tmp;
	int i;

	tmp = str[end - start - 3];
	memmove(str + 1, str + 0, end - start - 3);
	str[0] = tmp;

	print_str(start, 10, str);
}

void L_move(int start, int end, char *str)
{
	char tmp;
	int i;

	tmp = str[0];
	memmove(str + 0, str + 1, end - start - 3);
	str[end - start - 3] = tmp;

	print_str(start, 20, str);
}

char *init_array(int start, int end, char *str, const char *astr)
{
	int i;

	str = (char *)malloc(sizeof(char) * (end - start - 1));	// 19°³ »ı¼º

	for (i = 0; i < end - start - 1; i++)
	{
		str[i] = ' ';
	}

	//strcpy_s(str, strlen(astr), astr);
	memcpy(str, astr, strlen(astr));
	str[end - start - 2] = '\0';

	return str;
}
#endif