#include<stdlib.h>
#include"../Include/list.h"
void Reverse(List plist)
{
	if(plist==NULL || plist->next==NULL || plist->next->next==NULL)
	{
		return;
	}
	Node *p=plist->next;
	plist->next=NULL;
	Node* q;
	while(p!=NULL)
	{
		q=p->next;
		
		p->next=plist->next;
		plist->next=p;
		p=q;
	}
}
