#ifndef QUEUE_H
#define QUEUE_H

typedef struct
{
	int* base;
	int front, rear;
}SqQueue;
//初始化循环队列
void InitQueue(SqQueue* Q);
void Enqueue(SqQueue* Q, int e);
//出队
int Dequeue(SqQueue* Q);
//判断一个循环队列是否为空队列
int isQueueEmpty(SqQueue* Q);

#endif 
