#include<bits/stdc++.h>
using namespace std;

//Iterative
Node* Reverse(Node* head)
{
	if(head==NULL || head->next==NULL)
		return head;
		
    Node *prev=NULL,*curr=head,*next;
    while(curr != NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

//Recursive-1
Node* Reverse(Node* head)
{
	if(head==NULL || head->next==NULL)
            return head;
        
    Node* newHead=Reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
		
}

//Recursive-2
void Reverse(Node* &head,Node* &curr,Node* &prev)
{
	if(curr==NULL){
		head=prev;
		return ;
	}
	
	Reverse(head,curr->next,curr);
	curr->next=prev;
}

int main()
{
	Reverse(head);
	
	//Recursive-2
	Node *curr=head,*prev=NULL;
	Reverse(head,curr,prev);
	return head;
}
