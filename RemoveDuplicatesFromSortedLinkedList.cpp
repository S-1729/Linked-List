#include<bits/stdc++.h>
using namespace std;

Node* RemoveDuplicates(Node* head)
{
	if(head==NULL || head->next==NULL)
		return head;
		
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        	temp->next=temp->next->next;
        
        else
            temp=temp->next;
    }
    return head;
}

int main(])
{
	RemoveDuplicates(head);
}
