#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#ifndef LinkedList__Info
typedef int LinkedList__Info;
#endif
//--------------
#ifndef STDLIB_H
#include <stdlib.h>
#endif
//---------------
struct LinkdeListNodeType
{
	LinkedList__Info info;
	struct LinkedListNodeType *next;
};
typedef struct LinkedListNodeType LinkedList__Node;
//------------------------------------------------
void LinkedList__init(LinkedList__Node **head)
{
	*head=NULL;
}
//-------------------------------------
char LinkedList__isEmpty(LinkedList__Node *head)
{
	return head==NULL;
}
//------------------------------
LinkedList__Node* LinkedList__getNode()
{
	return (LinkedList__Node*)malloc(sizeof(LinkedList__Node));
}
//-----------------------------------------------------------------------
void LinkedList__rearInsert(LinkedList__Node **head,LinkedList__Info info)
{
	LinkedList__Node p=LinkedList__getNode();
	p->info=info;
	p->next=NULL;
	if(LinkedList__isEmpty(*head))
		*head=p;
	else
	{
		LinkedList__Node* ptr;
		for(ptr=*head;ptr->next;ptr=ptr->next);
		ptr->next=p;		
	}
}
//---------------------------------------
void LinkedList__frontInsert(LinkedList **head,LinkedList__Info info)
{
	LinkedList__Node p=LinkedList__getNode();
	p->info=info;
	if(LinkedList__isEmpty(*head))
	{
		p->next=NULL;
		*head=p;
	}
	else
	{
		p->next=*head;
		*head=p;
	}
}
//--------------------------------------
LinkedList__Info LinkedList__rearRemove(LinkedList__Node **head)
{
	if(!LinkedList__isEmpty(*head)){
		LinkedList__Info info;
		LinkedList__Node *p,*ptr=NULL;
		for(p=*head;p->next!=NULL;ptr=p,p=p->next);
		info=p->info;
		if(ptr!=NULL)
			ptr->next=NULL;
		else
			LinkedList__init(&*head);
		free(p);
		return info;
	}
	return NULL;
}
//----------------------------
LinkedList__Info LinkedList__frontRemove(LinkedList__Node **head)
{
	if(!LinkedList__isEmpty(*head)){
		LinkedList__Info info;
		LinkedList__Node *p,*ptr;
		p=*head;
		*head=(*head)->next;
		info=p->info;
		free(p);
		return info;
	}
	return NULL;
}
//---------------------------
#endif

#endif