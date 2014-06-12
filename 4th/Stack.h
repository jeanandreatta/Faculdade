#ifndef STACK_H
#define STACK_H 

#ifndef Stack__Info
typedef int Stack__Info;
#endif
typedef struct Stack__Info LinkedList_Info;
//---------------------------
#ifndef LINKEDLIST_H
#include "LinkedList.h"
#endif
//---------------------------
typedef LinkedList Stack;
typedef Stack__Node Stack_Node;
//---------------------------------------
void Stack__init(Stack__Node **stack)
{
	*stack=NULL;
}
//-------------------------------------
char Stack__isEmpty(Stack__Node *stack)
{
	return stack==NULL;
}
//----------------------------------------------------
void Stack__push(Stack__Node **stack,Stack__Info info)
{
	LinkedList__frontInsert(&*stack,info);
}
//---------------------------------
void Stack__pop(Stack__Node **stack)
{
	LinkedList__frontRemove(&*stack);
}
//---------------------------------------
Stack__Info Stack__top(Stack__Node *stack)
{
	return stack->info;
}
#endif