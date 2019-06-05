#ifndef _STACKLINKED_H_
#define _STACKLINKED_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int key;
	struct _node *next;
}node;

node *head, *tail;

void init_stack(void)
{
	head = (node *)malloc(sizeof(node));
	tail = (node *)malloc(sizeof(node));
	head->next = tail;
	tail->next = tail;
}

void clear_stack(void)
{
	node *t, *s;
	t = head->next;

	while (t != tail)
	{
		s = t;
		t = t->next;
		free(s);
	}

	head->next = tail;
}

int push(int k)
{
	node *t;

	if ((t = (node *)malloc(sizeof(node))) == NULL)
	{
		printf("\n out of memory...");
		return -1;
	}

	t->key = k;
	t->next = head->next;
	head->next = t;

	return k;
}

int pop(void)
{
	node *t;
	int i;

	if (head->next == tail)
	{
		printf("\n Stack underflow.");
		return -1;
	}

	t = head->next;
	i = t->key;
	head->next = t->next;
	free(t);

	return i;
}

void print_stack(void)
{
	node *t;
	t = head->next;
	printf("\n Stack contents : Top ----> Bottom\n");

	while (t != tail)
	{
		printf("%-6d", t->key);
		t = t->next;
	}
}

#endif