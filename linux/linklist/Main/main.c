#include<stdio.h>
#include<stdlib.h>
#include"../Include/list.h"
void Initlist(List plist)
{
	if(plist==NULL)
	{
		return;
	}
	plist->next=NULL;
}

void Show(List plist)
{
	Node* p;
	for(p=plist->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}
	printf("\n");
}

int main()
{
	Node head;
	Initlist(&head);
	int i;
	for(i=0;i<10;i++)
	{
		Insert_tail(&head,i);
	}
	Show(&head);
	Insert_head(&head,10);

	Show(&head);
	Insert_pos(&head,2,11);
	Show(&head);
	Delete_head(&head);
	Show(&head);
	Delete_tail(&head);
	Show(&head);
	Delete_pos(&head,2);
	Show(&head);
	Node* p=Find_val(&head,4);
	printf("%d\n",p->data);
	Reverse(&head);
	Show(&head);
}
