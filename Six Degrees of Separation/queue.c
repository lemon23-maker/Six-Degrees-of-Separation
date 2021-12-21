#include <stdlib.h>
#include "queue.h"

//��ʼ��ѭ������
void InitQueue(SqQueue* Q)
{
	Q->base = (int*)malloc(100 * sizeof(int));
	Q->front = Q->rear = 0;
}

//���
void Enqueue(SqQueue* Q,int e)
{
	Q->base[Q->rear] = e;
	Q->rear = (Q->rear + 1) % 100;
}
//����
int Dequeue(SqQueue* Q)
{
	int e = Q->base[Q->front]; 
	Q->front = (Q->front + 1) % 100;
	return e;
}
//�ж�һ��ѭ�������Ƿ�Ϊ�ն���
int isQueueEmpty(SqQueue* Q)
{
	if (Q->front == Q->rear)
		return 1;
	else
		return 0;
}

