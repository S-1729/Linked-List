#include<bits/stdc++.h>
using namespace std;

Node* DeleteMiddleNode(Node* head)
{
    if(head==NULL || head->next==NULL)
        return NULL;
    
    Node *slow=head,fast=head->next,*prev;
    while(fast && fast->next)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=prev->next->next;
    return head;
}

int main()
{
	DeleteMiddleNode(head);
}
