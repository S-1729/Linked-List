#include<bits/stdc++.h>
using namespace std;

Node* RemoveNthNode(Node* head,int n)
{
    Node *slow=head,*fast=head;
    while(n--)
        fast=fast->next;
        
    if(fast==NULL)
        return head->next;
        
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    return head;
}

int main()
{
	RemoveNthNode(head);
}
