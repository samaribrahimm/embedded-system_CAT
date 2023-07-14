#include"Stack.h"

//create stack (initalize stack)
void CreateStack(Stack *ps){
    ps->top=0;

}

//push element to stack (LIFO)
void Push (StackEntry e ,Stack *ps){
    ps->entry[ps->top]=e;
    ps->top++;
}

//pop element from stack
void Pop(StackEntry *pe ,Stack *ps){
ps->top--;
*pe=ps->entry[ps->top];
}

//check if stack empty or not
int StackEmpty(Stack *ps){
    return (!ps->top);
}

//check if stack full or not
int StackFull(Stack *ps){
    return (ps->top==MaxStack);
}

//clear stack (delete all element)
void ClearStack(Stack*ps){
    ps->top=0;
}

//fun to know size of stack
int StackSize(Stack* ps){
    return ps->top;
}

// fun to know first element
void StackTop(StackEntry *pe ,Stack *ps){
*pe=ps->entry[(ps->top)-1];}

void TraverseStack(Stack*ps,void(*pf)(StackEntry)){
    for(int i=ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }

}

