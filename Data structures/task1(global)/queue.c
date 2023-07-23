#include "queue.h"
#include <stdlib.h>

#ifdef QUEUE_ARRAY
 
// creation queue(initalize queue)
void CreateQueue(Queue*pq)
{
   pq-> front=0;
   pq->rear=-1;
   pq-> size=0;
}


// if Queue is empty or not ;
int QueueEmpty(Queue*pq){
    return !(pq->size);
}


//if Queue is full or not 
int QueueFull(Queue*pq){
     return (pq->size==MAXQUEUE);  
}


// fun to calulate size of queue
int QueueSize(Queue*pq){
    return pq->size;
}


// push element to queue (FIFO)
void Append(QueueEntry e,Queue*pq){
pq->rear=((pq->rear)+1)%MAXQUEUE;
pq->entry[pq->rear]=e;
pq->size++;
}


// pop element from  queue (FIFO)
void Serve(Queue*pq,QueueEntry *pe){
*pe=pq->entry[pq->front];
pq->front=((pq->front)+1)%MAXQUEUE;
pq->size--;
}


// get  element from  queue without change (FIFO)
void Retrieve(Queue*pq,QueueEntry *pe){
*pe=pq->entry[pq->front];
}
 

// clear Queue (delete all element)
 void ClearQueue(Queue*pq){

   pq-> front=0;
   pq->rear=-1;
   pq-> size=0;

 }


//travere queue to do  specified fun by user
 void TraverseQueue(Queue*pq,void(*pf)(QueueEntry)){
    for(int pos=pq->front ,i=0 ;i<pq->size;i++){
     
     (*pf)(pq->entry[pos]);
     pos=((pos)+1)%MAXQUEUE;

    }
 }

#else

 
// creation queue(initalize queue)
void CreateQueue(Queue*pq)
{
   pq-> front=NULL;
   pq->rear=NULL;
   pq-> size=0;
}


// if Queue is empty or not ;
int QueueEmpty(Queue*pq){
    return !(pq->size);
}


//if Queue is full or not 
int QueueFull(Queue*pq){
     return 0;  
}


// fun to calulate size of queue
int QueueSize(Queue*pq){
    return pq->size;
}


// push element to queue (FIFO)
 Append(QueueEntry e,Queue*pq){
QueueNode *pn=(QueueNode *)malloc(sizeof(QueueNode));

pn->next=NULL;
pn->entry=e;
if(!pq->rear){
pq->rear=pn;
pq->front=pn;
}
else{
    pq->rear->next=pn;
    pq->rear=pn;
}
pq->size++;


}


// pop element from  queue (FIFO)
void Serve(Queue*pq,QueueEntry *pe){
 QueueNode *pn=pq->front;
*pe=pn->entry;
pq->front=pn->next;
free(pn);
if(!pq->front){
    pq->rear=NULL;
}
pq->size--;
}


// get  element from  queue without change (FIFO)
void Retrieve(Queue*pq,QueueEntry *pe){
QueueNode *pn=pq->front;
*pe=pn->entry;
}
 

// clear Queue (delete all element)
 void ClearQueue(Queue*pq){

   while(pq->front){
    pq->rear=pq->front->next;
    free(pq->front);
    pq->front=pq->rear;
   }
   pq-> size=0;

 }


//travere queue to do  specified fun by user
 void TraverseQueue(Queue*pq,void(*pf)(QueueEntry)){
    QueueNode *pn=pq->front ;
    while (pn)
     {
     
     (*pf)(pn->entry);
     pn=pn->next;
    }
   
 }
 #endif
