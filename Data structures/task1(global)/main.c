
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "global.h"
#include "Queue.h"
#include "queue.c"
#include "stack.h"
#include"stack.c"
 void display_queue(QueueEntry e);
  void display_stack(StackEntry e);
int main(){
   int choice;
	printf("To stack choose..1\n");
	printf("To queue choose..2\n");

    printf("\n your choice: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		  Stack();
		  break;
	case 2 :
          Queue();
	      break	;	
    default:
		printf(" Wrong Choice\n");
		break;		  
	}		  
  }
void display(QueueEntry e)
{
    printf("QueueEntry = %d\n",e);
}
void Queue(){
     queue q;
    CreateQueue(&q);
    QueueEntry element;
    int num=1;
   while(num){
        printf(" 1.clear \n 2.add \n 3.print all element \n 4.pop (serve) \n 5.size of Queue\n ");
        printf("\nEnter Your Order: ");
		scanf("%d",&num);
		
		if(num==1){
        ClearQueue(&q);
        }	
		else if (num==2){

            if(!QueueFull(&q))
			{
				printf("Enter the element: ");
				scanf("%d",&element);
				Enqueue(element,&q);	
				printf("done\n");

			}
			else{
             printf("The Queue is Full \n");
            }
			
        }
       else if (num==3){
        TraverseQueue(&q,&display);
       }
       else if (num==4){
        if(!QueueEmpty(&q))
			{
				Dequeue(&element,&q);
				printf("the served element: %d\n",element);				
			}
			else
				printf("The Queue is Empty\n");
       }
     
     else if(num ==5){
        printf("Queue Size = %d\n",QueueSize(&q));
     }
			
    }
}
void Stack(){
    stack s;
    CreateStack(&s);
   StackEntry element;
    int num=1;
   while(num)
        printf(" 1.clear \n 2.add \n 3.print all element \n 4.pop  \n 5.size of Stack\n ");
        printf("\nEnter Your Order: ");
		scanf("%d",&num);
		
		if(num==1){
        ClearStack(&s);
        }	
		else if (num==2){

            if(!StackFull(&s))
			{
				printf("Enter the element: ");
				scanf("%d",&element);
				Push(element,&s);	
				printf("...done...\n");

			}
			else{
             printf("The Stack is Full \n");
            }
			
        }
       else if (num==3){
        TraverseStack(&s,&display);
       }
       else if (num==4){
        if(!StackEmpty(&s))
			{
				Pop(&element,&s);
				printf("the poped element: %d\n",element);				
			}
			else
				printf("The Stack is Empty\n");
       }
     
     else if(num ==5){
        printf("Stack Size = %d\n",StackSize(&s));
     }
			
            
			
   


}