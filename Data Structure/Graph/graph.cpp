#include "graph.h"

// �׷��� ���� �� �ʱ�ȭ
void create(Graph *g, GraphType mode) 
{
	int r, c;
	g->nodeSize = 0;
	g->mode = mode;

	for (r = 0; r < MAX_NODE; r++)
	{
		g->nodeList[r] = false;

		for (c = 0; c < MAX_NODE; c++)
		{
			g->adjMatrix[r][c] = false;
		}
	}
}

// �׷��� �ʱ�ȭ (mode�� �״��)
void destroy(Graph *g)
{
	create(g, g->mode);
}

// ��� ����
void insertNode(Graph *g, int node)
{
	/* ä��� */

	(g->nodeSize)++;
}

// ��� ����
void deleteNode(Graph *g, int node)
{
	/* ä��� */

	if (node == (g->nodeSize) - 1)
		(g->nodeSize)--;
}

// ���� ����
void insertEdge(Graph *g, int from, int to)
{
	/* ä��� */
}

// ���� ����
void deleteEdge(Graph *g, int from, int to)
{
	/* ä��� */

}

// �׷��� ���� ���
void print(const Graph *g)
{
	printf("Graph Print\n");

	for (int r = 0; r < g->nodeSize; r++)
	{
		for (int c = 0; c < g->nodeSize; c++)
		{
			printf("%3d ", g->adjMatrix[r][c]);
		}
		printf("\n");
	}
}