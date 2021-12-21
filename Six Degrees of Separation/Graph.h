
#ifndef GRAPH_H
#define GRAPH_H

#define MaxVertexNum 20							//������Ŀ�����ֵ
typedef int vertexType;							//�������������
typedef int edgeType;                           //��Ȩͼ�б���Ȩֵ����������
typedef struct {
	vertexType Vex[MaxVertexNum];				//�����
	edgeType Edge[MaxVertexNum][MaxVertexNum];	//�ڽӾ��󣬱߱�
	int vexnum,arcnum;							//ͼ�ĵ�ǰ����������
}MGraph;
//����ͼ
MGraph create_graph(int vexnum, int arcnum);
//BFS����ͼ
int BFStraverse(MGraph *g, vertexType v);

#endif 
