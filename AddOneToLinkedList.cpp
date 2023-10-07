#include<bits/stdc++.h>
using namespace std;
Node* Reverse(Node* head)
{
	if(head==NULL || head->next==NULL)
		return head;
	Node *prev=NULL,*curr=head,*next;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}
Node* AddOne(Node* head)
{
    head=Reverse(head);
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==9 && temp->next==NULL)
        {
            temp->data=0;
            temp->next=new Node(1);
            break;
        }
        else if(temp->data==9)
            temp->data=0;
        else{
            temp->data+=1;
            break;
        }
        temp=temp->next;
    }
    head=Reverse(head);
    return head;
}

int main()
{
	AddOne(head);
}
