#include<stdlib.h>
#include"../Include/list.h"
bool Insert_pos(List plist,int pos,int val)
{
	Node* p;
	int i=0;
	for(p=plist;p!=NULL && i<pos;i++,p=p->next)
	{
		;
	}
	if(i>pos || p==NULL)
	{
		return false;
	}
	Node* q=(Node*)malloc(sizeof(Node));
	q->data=val;

	q->next=p->next;
	p->next=q;
}
