#ifndef QUEUE_H
#define QUEUE_H

typedef struct
{
	int* base;
	int front, rear;
}SqQueue;
//��ʼ��ѭ������
void InitQueue(SqQueue* Q);
void Enqueue(SqQueue* Q, int e);
//����
int Dequeue(SqQueue* Q);
//�ж�һ��ѭ�������Ƿ�Ϊ�ն���
int isQueueEmpty(SqQueue* Q);

#endif 
