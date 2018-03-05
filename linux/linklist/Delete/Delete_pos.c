#include<stdlib.h>
#include"../Include/list.h"
static Node *SearchPri_pos(List plist,int pos)  //weizhi
{
		Node*p;
		int i;
		for( i=0,p=plist;i<pos && p->next!=NULL;p=p->next)
		{
			i++;			
		}
		if(i>=pos)
		{
			return p;
		}
		else
		{
			return NULL;
		}
}
bool Delete_pos(List plist,int pos)
{
		Node *p = SearchPri_pos(plist,pos);
		if(p == NULL)
		{
			return false;
		}

		Node *q = p->next;
		p->next = q->next;//p->next = p->next->next;
		free(q);

		return true;
}

