#include "Graph.h"
#include <stdlib.h>
#include <stdio.h>
//´´½¨Í¼
MGraph create_graph(int vexnum, int arcnum) {

	MGraph g;
	memset(g.Edge, 0, sizeof(g.Edge));
	int begin, end;
	for (int i = 0; i < arcnum; i++)
	{
		scanf("%d%d", &begin, &end);
		g.Edge[begin][end] = 1; 
		g.Edge[end][begin] = 1;
	}
	return g;
}
//BFS±éÀúÍ¼
void BFStraverse(MGraph g){




}