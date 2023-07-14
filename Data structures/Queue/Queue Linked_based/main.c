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
    QueueEntry element;
    int num;
    do{ 
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
				Append(element,&q);	
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
				Serve(&element,&q);
				printf("the served element: %d\n",element);				
			}
			else
				printf("The Queue is Empty\n");
       }
     
     else if(num ==5){
        printf("Queue Size = %d\n",QueueSize(&q));
     }
			
                printf("\nEnter E to continue \n");
			
    }while(getch()=='E');
}

void display(QueueEntry e)
{
    printf("QueueEntry = %d\n",e);
}