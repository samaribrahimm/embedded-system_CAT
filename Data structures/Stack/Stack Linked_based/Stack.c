 #include <stdlib.h>
 #include"Stack.h"

//create stack (initalize stack)
void CreateStack(Stack *ps){
    ps->top=NULL;
    ps->size=0;
}

//push element to stack (LIFO)
int Push (StackEntry e ,Stack *ps){
  StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
   if(!pn){
    return 0;
}
else{
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
    return 1;
}
}

//pop element from stack
void Pop(StackEntry *pe ,Stack *ps){
    
StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
 pn=ps->top;
*pe=pn->entry;
ps->top=pn->next;
free(pn);
ps->size--;
}

//check if stack empty or not
int StackEmpty(Stack *ps){
    return (ps->top==NULL);
}

//check if stack full or not
int StackFull(Stack *ps){
    return 0;
}

//clear stack (delete all element)
void ClearStack(Stack*ps){
   StackNode *pn =ps->top;
   while(pn){
    ps->top=pn->next;
    free(pn);
    pn=ps->top;
   }
   ps->size=0;
}

//fun to know size of stack
int StackSize(Stack* ps){
    return ps->size;
}

// fun to know first element
void StackTop(StackEntry *pe, Stack *ps)
{
	StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
    pn=ps->top;
  *pe=pn->entry;
}


void TraverseStack(Stack*ps,void(*pf)(StackEntry)){
    StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
     pn=ps->top;
   while (pn)
   {
    (*pf)(pn->entry);
    pn=pn->next;
   }
   //free(pn);
}
