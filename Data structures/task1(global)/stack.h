 #include "Global.h"
 
//#define STACK_ARRAY
#ifndef STACK_H
#define STACK_H
#ifdef STACK_ARRAY
 typedef struct stack{
	int top;
    StackEntry entry [MAXSTACK];	
 }stack;
 
 #else
 typedef struct StackNode{
	StackEntry entry;
    struct stackNode* next;	
 }StackNode;
 
 typedef struct stack{
	 StackNode* top;
	 int size;
 }stack;
 
 #endif
//functions prototypes
void CreateStack(stack *);
void Push(StackEntry, stack *);
void Pop(StackEntry *, stack *);
int	StackEmpty(stack *);
int	StackFull(stack *);
void ClearStack(stack *);
void StackTop(StackEntry *, stack *);
int	StackSize(stack *);
void TraverseStack(stack *, void (*)(StackEntry));


 #endif