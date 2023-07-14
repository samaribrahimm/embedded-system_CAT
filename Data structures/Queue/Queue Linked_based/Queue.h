#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QueueEntry 	int


typedef struct queuenode
{
	QueueEntry entry;
	struct queuenode *next;
}QueueNode;

typedef struct queue
{
	QueueNode *front;
	QueueNode *rear;
	int size;
}Queue;
void CreateQueue(Queue*);
int QueueEmpty(Queue*);
int QueueFull(Queue*);
int QueueSize(Queue*);
int Append(QueueEntry,Queue *);
void Serve(Queue*,QueueEntry *);
void Retrieve(Queue*,QueueEntry *);
void ClearQueue(Queue*pq);
void TraverseQueue(Queue*pq,void(*pf)(QueueEntry));
#endif