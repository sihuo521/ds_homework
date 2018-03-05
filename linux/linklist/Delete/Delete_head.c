#include<stdlib.h>
#include"../Include/list.h"
bool Delete_head(List plist)
{
	if(plist->next==NULL)
	{
		return false;
	}
	Node* q=plist->next;
	plist->next=q->next;
	free(q);
	return true;
}
