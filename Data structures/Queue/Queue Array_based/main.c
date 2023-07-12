#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Queue.h"
#include "Queue.c"
void display(QueueEntry e);
char cho  ;
int main(){
    Queue q;
    CreateQueue(&q);
	cho=10;
       while(1){
        printf("\n....................................................\n");
		printf("1. Clear the queue.\n");
		printf("2. Add element (Append).\n");
		printf("3. pop an element(serve) then display it.\n");
		printf("4.Print all elements in the queue.\n");
		printf("5.size of Queue\n");
		printf("6. print first element of Queue");
		printf("7.exist\n");
		printf(".......................................................\n");
		int num; 
		QueueEntry element;
		printf("\nEnter Your Order: ");
		scanf("%d",&num);
		
		switch(num)
		{
			case 1:
			ClearQueue(&q);
			break;

			
			case 2:
			if(!QueueFull(&q))
			{
				printf("Enter the element: ");
				scanf("%d",&element);
				Append(element,&q);	
				printf("done\n");

			}
			else
				printf("The Queue is Full !!\n");
			break;
			
			case 3:
			if(!QueueEmpty(&q))
			{
				Serve(&element,&q);
				printf("the served element: %d\n",element);				
			}
			else
				printf("The Queue is Empty !!\n");
			break;
			case 4:
			TraverseQueue(&q,&display);
			break;
			case 5:
			printf("Queue Size = %d\n",QueueSize(&q));
			break;
			case 6:
			if(!QueueEmpty(&q))
			{
				Retrieve(&element,&q);
				printf("Queue Top: %d\n",element);	
			}
			else
				printf("The Queue is Empty !!\n");
			break;
			
			case 7:
			exit(1);
			break;
		}

	   }
		


}
void display(QueueEntry e)
{
    printf("QueueEntry = %d\n",e);
}