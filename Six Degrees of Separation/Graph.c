#include "Graph.h"
#include "queue.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//����ͼ
MGraph create_graph(int vexnum, int arcnum) {

	MGraph g;
	memset(g.Edge, 0, sizeof(g.Edge));
	int begin, end;
	printf("���������Ϣ���ߵ���Ŵ�1��ʼ\n");
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
//BFS����ͼ
int BFStraverse(MGraph *g, vertexType v) {

	int* visited = (int*)malloc((g->vexnum+1) * sizeof(int));
	memset(visited, 0, (g->vexnum + 1) * sizeof(int));

	SqQueue q;
	InitQueue(&q);
	int cnt = 1;
	int last = v;//ÿ�����һ������
	int tail = v;//���������һ��Ԫ��
	int level = 1;//��ʼΪ��һ��
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
		if (last == e) {//��ÿ�����һ���������ʱ�ͽ�������һ��
			level++;
			last = tail;
		}
		if (level > 6)
			break;
	}

	free(visited);
	return cnt;
}