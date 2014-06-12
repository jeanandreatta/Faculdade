#ifndef DoublyLINKEDLIST_H
#define DoublyLINKEDLIST_H 
//------------------------
#ifndef DoublyLinkedList__Info
typedef int DoublyLinkedList__Info;
#endif
//--------------
#ifndef STDLIB_H
#include <stdlib.h>
#endif
//---------------
struct DoublyLinkdeListNodeType
{
	DoublyLinkedList__Info info;
	struct DoublyLinkedListNodeType *right,*left;
};
typedef struct DoublyLinkedListNodeType DoublyLinkedList__Node;
//---------------------------
struct DoublyLinkedListType
{
	DoublyLinkedList__Node *front,*rear;
}; 
typedef struct DoublyLinkedListType DoublyLinkedList;
//---------------------------------------------------
void DoublyLinkedList__init(DoublyLinkedList **List)
{
	(*List)->front=(*List)->rear=NULL;
}
//-------------------------------------
char DoublyLinkedList__isEmpty(DoublyLinkedList *List)
{
	return List->front==NULL;
}
//------------------------------
DoublyLinkedList__Node* DoublyLinkedList__getNode()
{
	return (DoublyLinkedList__Node*)malloc(sizeof(DoublyLinkedList__Node));
}
//-----------------------------------------------------------------------
void DoublyLinkedList__rearInsert(DoublyLinkedList **List,DoublyLinkedList__Info info)
{
	DoublyLinkedList__Node p=DoublyLinkedList__getNode();
	p->info=info;
	p->rith=NULL;
	if(DoublyLinkedList__isEmpty(*List))
		(*List)->front=p;
	else
		(*List)->rear->right=p;			
	p->left=(*List)->rear;
	(*List)->rear=p;
}
//---------------------------------------
void DoublyLinkedList__frontInsert(DoublyLinkeedList **List,DoublyLinkedList__Info info)
{
	DoublyLinkedList__Node p=DoublyLinkedList__getNode();
	p->info=info;
	p->left=NULL;
	if(DoublyLinkedList__isEmpty(*List))
		(*List)->rear=p;
	else
		(*List)->font->left=p;
	p->right=NULL;
	(*List)->front=p;
}
//--------------------------------------
DoublyLinkedList__Info DoublyLinkeedList__rearRemove(DoubeLinkedList **List)
{
	DoublyLinkedList__Info info;
	DoublyLinkedList__Node p=(*List)->rear;
	(*List)->rear=p->left;
	(*List)->rear->right=NULL;
	info=p->info;
	free(p);
	return info;
}
//----------------------------
DoublyLinkedList__Info DoublyLinkeedList__frontRemove(DoublyLinkedList **List)
{
	DoublyLinkedList__Info info;
	DoublyLinkedList__Node p=(*List)->front;
	(*List)->front=p->right;
	(*List)->front->left=NULL;
	info=p->info;
	free(p);
	return info;
}
//---------------------------
#endif