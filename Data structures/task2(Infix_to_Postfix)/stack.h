
#ifndef _STACK_H_
#define _STACK_H_

#define StackEntry 	int
#define MaxStack 	100

//Stack definition
typedef struct stack
{
	int top;
	StackEntry entry[MaxStack];
}Stack;

//functions prototypes
void CreateStack(Stack *);
void Push(StackEntry, Stack *);
void pop(StackEntry *, Stack *);
int	StackEmpty(Stack *);
int	StackFull(Stack *);
void ClearStack(Stack *);
void StackTop(StackEntry *, Stack *);
int	StackSize(Stack *);
void TraverseStack(Stack *, void (*)(StackEntry));

#endif