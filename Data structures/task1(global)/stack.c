#include"Stack.h"

#include <stdlib.h>

#ifdef STACK_ARRAY
//create stack (initalize stack)
void CreateStack(stack *ps){
    ps->top=0;

}

//push element to stack (LIFO)
void Push (StackEntry e ,stack *ps){
    ps->entry[ps->top]=e;
    ps->top++;
}

//pop element from stack
void Pop(StackEntry *pe ,stack *ps){
ps->top--;
*pe=ps->entry[ps->top];
}

//check if stack empty or not
int StackEmpty(stack *ps){
    return (!ps->top);
}

//check if stack full or not
int StackFull(stack *ps){
    return (ps->top==MAXSTACK);
}

//clear stack (delete all element)
void ClearStack(stack*ps){
    ps->top=0;
}

//fun to know size of stack
int StackSize(stack* ps){
    return ps->top;
}

// fun to know first element
void StackTop(StackEntry *pe ,stack *ps){
*pe=ps->entry[(ps->top)-1];}

void TraverseStack(stack*ps,void(*pf)(StackEntry)){
    for(int i=ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }

}
#else

//create stack (initalize stack)
void CreateStack(stack *ps){
    ps->top=NULL;
    ps->size=0;
}

//push element to stack (LIFO)
void Push (StackEntry e ,stack *ps){
  StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
 

    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
   

}

//pop element from stack
void Pop(StackEntry *pe ,stack *ps){
    
StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
 pn=ps->top;
*pe=pn->entry;
ps->top=pn->next;
free(pn);
ps->size--;
}

//check if stack empty or not
int StackEmpty(stack *ps){
    return (ps->top==NULL);
}

//check if stack full or not
int StackFull(stack *ps){
    return 0;
}

//clear stack (delete all element)
void ClearStack(stack*ps){
   StackNode *pn =ps->top;
   while(pn){
    ps->top=pn->next;
    free(pn);
    pn=ps->top;
   }
   ps->size=0;
}

//fun to know size of stack
int StackSize(stack* ps){
    return ps->size;
}

// fun to know first element
void StackTop(StackEntry *pe, stack *ps)
{
	StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
    pn=ps->top;
  *pe=pn->entry;
}


void TraverseStack(stack*ps,void(*pf)(StackEntry)){
    StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
     pn=ps->top;
   while (pn)
   {
    (*pf)(pn->entry);
    pn=pn->next;
   }
   //free(pn);
}
#endif