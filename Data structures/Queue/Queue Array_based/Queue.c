#include"Queue.h"



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
void Append(Queue*pq,QueueEntry e){
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