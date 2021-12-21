#include <stdlib.h>
#include "queue.h"

//初始化循环队列
void InitQueue(SqQueue* Q)
{
	Q->base = (int*)malloc(100 * sizeof(int));
	Q->front = Q->rear = 0;
}

//入队
void Enqueue(SqQueue* Q,int e)
{
	Q->base[Q->rear] = e;
	Q->rear = (Q->rear + 1) % 100;
}
//出队
int Dequeue(SqQueue* Q)
{
	int e = Q->base[Q->front]; 
	Q->front = (Q->front + 1) % 100;
	return e;
}
//判断一个循环队列是否为空队列
int isQueueEmpty(SqQueue* Q)
{
	if (Q->front == Q->rear)
		return 1;
	else
		return 0;
}

