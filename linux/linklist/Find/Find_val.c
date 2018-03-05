#include<stdlib.h>
#include"../Include/list.h"
Node* Find_val(List plist,int val)
{
	Node *p;
	for(p=plist->next;p!=NULL;p=p->next)
	{
		if(p->data==val)
		{
			return p;
		}
	}
	return NULL;
}
