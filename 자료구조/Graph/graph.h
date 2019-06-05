#ifndef _GRAPH_H
#define _GRAPH_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_NODE 100

typedef enum {DIRECTED=0, UNDIRECTED=1} GraphType;

typedef struct {
	GraphType mode;
	bool nodeList[MAX_NODE];
	bool adjMatrix[MAX_NODE][MAX_NODE];
	int nodeSize;
}Graph;

void create(Graph *g, GraphType mode);
void destroy(Graph *g);

void insertNode(Graph *g, int node);
void deleteNode(Graph *g, int node);

void insertEdge(Graph *g, int from, int to);
void deleteEdge(Graph *g, int from, int to);

void print(const Graph *g);

void test();

#endif