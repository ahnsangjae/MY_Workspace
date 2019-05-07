#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int key;
	struct _node *next;
}node;

node *head, *tail;

void init_list(void)
{
	head = (node *)malloc(sizeof(node));
	tail = (node *)malloc(sizeof(node));
	head->next = tail;
	tail->next = tail;
}

int delete_next(node *t)
{
	node *s;

	if (t->next == tail)
		return 0;

	s = t->next;
	t->next = t->next->next;
	free(s);

	return 1;
}

node *insert_after(int k, node *t)
{
	node *s;
	s = (node *)malloc(sizeof(node));
	s->key = k;
	s->next = t->next;
	t->next = s;

	return s;
}

node *find_node(int k)
{
	node *s;
	s = head->next;

	while (s->key != k && s != tail)
		s = s->next;

	return s;
}

int delete_node(int k)
{
	node *s, *p;

	p = head;
	s = p->next;

	while (s->key != k && s != tail)
	{
		p = p->next;
		s = p->next;
	}

	if (s != tail)
	{
		p->next = s->next;
		free(s);
		return 1;
	}
	else
		return 0;
}

node *insert_node(int t, int k)	// insert t before k
{
	node *s, *p, *r;
	p = head;
	s = p->next;

	while (s->key != k && s != tail)
	{
		p = p->next;
		s = p->next;
	}

	if (s != tail)
	{
		r = (node *)malloc(sizeof(node));
		r->key = t;
		p->next = r;
		r->next = s;
	}

	return p->next;
}

node *ordered_insert(int k)
{
	node *s, *p, *r;
	p = head;
	s = p->next;

	while (s->key <= k && s != tail)
	{
		p = p->next;
		s = p->next;
	}

	r = (node *)malloc(sizeof(node));
	r->key = k;
	p->next = r;
	r->next = s;

	return r;
}

void print_list(node *t)
{
	printf("\n");
	while (t != tail)
	{
		printf("%-8d", t->key);
		t = t->next;
	}
}

node *delete_all(void)
{
	node *s, *t;
	t = head->next;

	while (t != tail)
	{
		s = t;
		t = t->next;
		free(s);
	}
	head->next = tail;
	return head;
}

#endif