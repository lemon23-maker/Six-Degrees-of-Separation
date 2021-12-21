#include <stdio.h>
#include "Graph.h"

int main() {

	int vexnum, arcnum;
	printf("请输入图的顶点数和边数\n");
	scanf("%d%d", &vexnum, &arcnum);

	MGraph graph = create_graph(vexnum,arcnum);
	for (int i = 1; i <= vexnum; i++)
	{
		int cnt = BFStraverse(&graph, i);
		double res =  1.0 * cnt / vexnum ;
		printf("%d    %15.2f%%\n", i, res*100);
	}

	return 0;
}

