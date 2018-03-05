typedef struct Node
{
	int data; 
	struct Node* next;
}Node,*List;

#define bool int
#define true 1
#define false 0

void Initlist(List plist);

bool Insert_head(List plist,int val);

bool Insert_tail(List plist,int val);

bool Insert_pos(List plist,int pos,int val);
	
bool Delete_head(List plist);

bool Delete_tail(List plist);

bool Delete_pos(List plist,int pos);

Node* Find_val(List plist,int val);

void Reverse(List plist);





