#include<bits/stdc++.h>
using namespace std;

Node* CloneLinkedList(Node* head)
{
	unordered_map<Node*,Node*>mp;
    Node* temp=head;
    while(temp!=NULL){
        mp[temp]=new Node(temp->data);
        temp=temp->next;
    } 
        
    temp=head;
    while(temp!=NULL)
    {
         mp[temp]->next=mp[temp->next];
         mp[temp]->random=mp[temp->random];
         temp=temp->next;
    }
    return mp[head];
}

Node* CloneLinkedList(Node* head)
{
	if(head==NULL)
        return NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        Node* copy=new Node(curr->val);
        curr->next=copy;
        copy->next=temp;
        curr=temp;
    }

    curr=head;
    while(curr!=NULL){
        curr->next->random=(curr->random!=NULL)?curr->random->next:NULL;
        curr=curr->next->next;;
    }

    curr=head;
    Node* dummy=new Node(-1);
    dummy->next=head->next;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=temp->next;
        temp->next=(temp->next!=NULL)?temp->next->next:NULL;
        curr=curr->next;
    }
    return dummy->next;
}

    
int main()
{
	CloneLinkedList(head);
}
