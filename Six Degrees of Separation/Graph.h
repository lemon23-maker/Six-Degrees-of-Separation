
#ifndef GRAPH_H
#define GRAPH_H

#define MaxVertexNum 100                        //顶点数目的最大值
typedef int vertexType;                        //顶点的数据类型
typedef int edgeType;                           //带权图中边上权值的数据类型
typedef struct {
	vertexType Vex[MaxVertexNum];				//顶点表
	edgeType Edge[MaxVertexNum][MaxVertexNum];	//邻接矩阵，边表
	int vexnum，arcnum;							//图的当前顶点数边数
}MGraph;
//创建图
MGraph create_graph(int vexnum, int arcnum);
//BFS遍历图
MGraph BFStraverse(int vexnum, int arcnum);

#endif 
