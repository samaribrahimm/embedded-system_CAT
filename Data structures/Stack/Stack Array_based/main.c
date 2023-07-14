#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Stack.h"
#include "Stack.c"
void display(StackEntry e);
int main(){
   Stack s;
    CreateStack(&s);
   StackEntry element;
    int num;
    do{ 
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
			
                printf("\nEnter E to continue \n");
			
    }while(getch()=='E');
}

void display(StackEntry e)
{
    printf("StackEntry = %d\n",e);
}