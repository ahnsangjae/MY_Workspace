#ifndef _STACKARRAY_H_
#define _STACKARRAY_H_

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX];
int top;

void init_stack(void)
{
	top = -1;
}

int push(int t)
{
	if (top >= MAX - 1)
	{
		printf("\n stack overflow.");
		return -1;
	}

	stack[++top] = t;
	return t;
}

int pop(void)
{
	if (top < 0)
	{
		printf("\n stack underflow.");
		return -1;
	}

	return stack[top--];
}

void print_stack(void)
{
	int i;
	printf("\n stack contents : Top ----> Bottom\n");

	for (i = top; i >= 0; i--)
	{
		printf("%-6d", stack[i]);
	}
}

#endif