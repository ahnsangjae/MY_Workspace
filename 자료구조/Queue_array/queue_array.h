#ifndef _QUEUEARRAY_H_
#define _QUEUEARRAY_H_

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int queue[MAX];
int front, rear;

void init_queue(void)
{
	front = rear = 0;
}

void clear_queue(void)
{
	front = rear;
}

int put(int k)
{
	if ((rear + 1) % MAX == front)
	{
		printf("\n Queue overflow.");
		return -1;
	}

	queue[rear] = k;
	rear = ++rear % MAX;
	return k;
}

int get(void)
{
	int i;

	if (front == rear)
	{
		printf("\n Queue underflow.");
		return -1;
	}

	i = queue[front];
	front = ++front % MAX;
	return i;
}

void print_queue(void)
{
	int i;
	printf("\n Queue contentx : Front ----> Rear\n");

	for (i=front; i != rear; i = ++i % MAX)
	{
		printf("%-6d", queue[i]);
	}
}

#endif