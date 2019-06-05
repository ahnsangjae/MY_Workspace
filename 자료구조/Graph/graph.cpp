#include "graph.h"

// 그래프 생성 및 초기화
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

// 그래프 초기화 (mode는 그대로)
void destroy(Graph *g)
{
	create(g, g->mode);
}

// 노드 삽입
void insertNode(Graph *g, int node)
{
	/* 채우기 */

	(g->nodeSize)++;
}

// 노드 삭제
void deleteNode(Graph *g, int node)
{
	/* 채우기 */

	if (node == (g->nodeSize) - 1)
		(g->nodeSize)--;
}

// 간선 삽입
void insertEdge(Graph *g, int from, int to)
{
	/* 채우기 */
}

// 간선 삭제
void deleteEdge(Graph *g, int from, int to)
{
	/* 채우기 */

}

// 그래프 상태 출력
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