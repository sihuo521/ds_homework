#include<stdlib.h>
#include"../Include/list.h"
bool Delete_tail(List plist)
{
	if(plist->next==NULL)
	{
		return false;
	}
	Node* p;
	for(p=plist;p->next->next!=NULL;p=p->next);
	Node* q=p->next;
	p->next=q->next;
	return true;
}
