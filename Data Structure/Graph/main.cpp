#include "graph.h"

void main()
{
	Graph g;

	create(&g, DIRECTED);
	insertNode(&g, 0);
	insertNode(&g, 1);
	insertNode(&g, 2);
	insertNode(&g, 3);
	insertNode(&g, 4);
	insertNode(&g, 5);

	insertEdge(&g, 0, 1);
	insertEdge(&g, 0, 2);
	insertEdge(&g, 0, 3);
	insertEdge(&g, 0, 4);
	insertEdge(&g, 1, 3);
	insertEdge(&g, 2, 3);
	insertEdge(&g, 2, 4);
	insertEdge(&g, 3, 4);

	print(&g);

	deleteEdge(&g, 1, 3);
	deleteNode(&g, 2);

	print(&g);

	create(&g, UNDIRECTED);
	insertNode(&g, 0);
	insertNode(&g, 1);
	insertNode(&g, 2);
	insertNode(&g, 3);
	insertNode(&g, 4);
	insertNode(&g, 5);

	insertEdge(&g, 0, 1);
	insertEdge(&g, 0, 2);
	insertEdge(&g, 0, 3);
	insertEdge(&g, 0, 4);
	insertEdge(&g, 1, 3);
	insertEdge(&g, 2, 3);
	insertEdge(&g, 2, 4);
	insertEdge(&g, 3, 4);

	print(&g);

	deleteEdge(&g, 1, 3);
	deleteNode(&g, 2);

	print(&g);

	system("pause");
}