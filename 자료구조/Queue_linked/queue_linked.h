#ifndef _QUEUELINKED_H_
#define _QUEUELINKED_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _dnode{
	int key;
	struct _dnode *prev;
	struct _dnode *next;
}dnode;

dnode *front, *rear;

void init_queue(void)
{
	front = (dnode *)malloc(sizeof(dnode));
	rear = (dnode *)malloc(sizeof(dnode));
	front->prev = front;
	front->next = rear;
	rear->prev = front;
	rear->next = rear;
}

void clear_queue(void)
{
	dnode *t, *s;

	t = front->next;

	while (t != rear)
	{
		s = t;
		t = t->next;
		free(s);
	}

	front->next = rear;
	rear->prev = front;
}

int put(int k)
{
	dnode *t;

	if ((t = (dnode *)malloc(sizeof(dnode))) == NULL)
	{
		printf("\nOut of memory.");
		return -1;
	}

	t->key = k;
	rear->prev->next = t;
	t->prev = rear->prev;
	rear->prev = t;
	t->next = rear;
	
	return k;
}

int get(void)
{
	dnode *t;
	int i;

	t = front->next;

	if (t == rear)
	{
		printf("\nQueue underflow.");
		return -1;
	}

	i = t->key;
	front->next = t->next;
	t->next->prev = front;
	free(t);

	return i;
}

void print_queue(void)
{
	dnode *t;
	t = front->next;

	printf("\n Queue contents : Front ----> Rear\n");

	while (t != rear)
	{
		printf("%-6d", t->key);
		t = t->next;
	}
}


#endif