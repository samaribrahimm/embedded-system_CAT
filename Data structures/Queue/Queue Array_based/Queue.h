#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QueueEntry 	int
#define MAXQUEUE 	100

//define Queue
typedef struct queue
{
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXQUEUE];
}Queue;
void CreateQueue(Queue*);
int QueueEmpty(Queue*);
int QueueFull(Queue*);
int QueueSize(Queue*);
void Append(Queue*,QueueEntry );
void Serve(Queue*,QueueEntry *);
void Retrieve(Queue*,QueueEntry *);
void ClearQueue(Queue*pq);
void TraverseQueue(Queue*pq,void(*pf)(QueueEntry));

#endif