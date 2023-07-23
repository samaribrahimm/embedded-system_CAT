#include "Global.h"
#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_ARRAY
 #include <stdio.h>
 #define QueueEntry char
 
#ifdef QUEUE_ARRAY
 //define Queue
typedef struct queue
{
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXQUEUE];
}Queue;
#else
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
#endif
void CreateQueue(Queue*);
int QueueEmpty(Queue*);
int QueueFull(Queue*);
int QueueSize(Queue*);
void Append(QueueEntry,Queue *);
void Serve(Queue*,QueueEntry *);
void Retrieve(Queue*,QueueEntry *);
void ClearQueue(Queue*pq);
void TraverseQueue(Queue*pq,void(*pf)(QueueEntry));
#endif