
#ifndef _STACK_H_
#define _STACK_H_

#define StackEntry 	int


typedef struct stacknode
{
	StackEntry entry;
	struct stacknode *next;
}StackNode;

//Stack definition
typedef struct stack
{
    StackNode * top;
	int size;
}Stack;

//functions prototypes
void CreateStack(Stack *);
int Push(StackEntry, Stack *);
void Pop(StackEntry *, Stack *);
int	StackEmpty(Stack *);
int	StackFull(Stack *);
void ClearStack(Stack *);
void StackTop(StackEntry *, Stack *);
int	StackSize(Stack *);
void TraverseStack(Stack *, void (*)(StackEntry));

#endif