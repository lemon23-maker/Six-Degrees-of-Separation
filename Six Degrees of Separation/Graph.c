#include "Graph.h"
#include "queue.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//创建图
MGraph create_graph(int vexnum, int arcnum) {

	MGraph g;
	memset(g.Edge, 0, sizeof(g.Edge));
	int begin, end;
	printf("请输入边信息，边的序号从1开始\n");
	for (int i = 1; i <= arcnum; i++)
	{
		scanf("%d%d", &begin, &end);
		g.Edge[begin][end] = 1; 
		g.Edge[end][begin] = 1;
	}
	g.vexnum = vexnum;
	g.arcnum = arcnum;
	return g;
}
//BFS遍历图
int BFStraverse(MGraph *g, vertexType v) {

	int* visited = (int*)malloc((g->vexnum+1) * sizeof(int));
	memset(visited, 0, (g->vexnum + 1) * sizeof(int));

	SqQueue q;
	InitQueue(&q);
	int cnt = 1;
	int last = v;//每层最后一个顶点
	int tail = v;//队列中最后一个元素
	int level = 1;//初始为第一层
	visited[v] = 1;
	Enqueue(&q,v);
	
	while (!isQueueEmpty(&q))
	{
		int e = Dequeue(&q);
		for (int i = 1; i <= g->vexnum; i++)
		{
			if (!visited[i] && g->Edge[e][i]) {
				Enqueue(&q, i);
				visited[i] = 1;
				cnt++;
				tail = i;
			}
		}
		if (last == e) {//当每层最后一个顶点出队时就进入了下一层
			level++;
			last = tail;
		}
		if (level > 6)
			break;
	}

	free(visited);
	return cnt;
}