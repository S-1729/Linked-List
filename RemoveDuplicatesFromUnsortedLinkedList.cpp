#include<bits/stdc++.h>
using namespace std;

Node* RemoveDuplicates(Node* head)
{
    Node* temp=head;
    unordered_set<int>s;
    s.insert(temp->data);
    
    while(temp!=NULL && temp->next!=NULL)
    {
        if(s.find(temp->next->data)==s.end())
        {
            s.insert(temp->next->data);
            temp=temp->next;
        }
        else
            temp->next=temp->next->next;     
	}
    return head;
}
int main()
{
	RemoveDuplicates(head);
}
