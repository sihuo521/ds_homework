#include<stdlib.h>
#include"../Include/list.h"
bool Insert_head(List plist,int val)
{
	Node* p=(Node*)malloc(sizeof(Node));
	p->data=val;

	p->next=plist->next;
	plist->next=p;
	
	return true;
}
