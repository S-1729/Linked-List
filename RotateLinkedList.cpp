#include<bits/stdc++.h>
using namespace std;

int countNodes(ListNode* head){
    ListNode* temp=head;
    int c=0;
    while(temp){
        c++;
        temp=temp->next;
    }
    return c;
}

ListNode* rotateLeft(ListNode* head, int k) {
    if(head==NULL || head->next==NULL || k==0)
        return head;
    int n=countNodes(head);
    k=k%n;
    if(k==0)
        return head;
    ListNode *temp=head,*newHead;
    while(temp!=NULL && temp->next!=NULL){
        --k;
        if(k==0)
            newHead=temp;
        temp=temp->next;
    }
    temp->next=head;
    head=newHead->next;
    newHead->next=NULL;
    return head;
}

ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || head->next==NULL || k==0)
        return head;
    int n=countNodes(head);
    k=k%n;
    if(k==0)
        return head;
    k=n-k;
    ListNode *temp=head,*newHead;
    while(temp!=NULL && temp->next!=NULL){
        --k;
        if(k==0)
            newHead=temp;
        temp=temp->next;
    }
    temp->next=head;
    head=newHead->next;
    newHead->next=NULL;
    return head;
}

int main(){
	rotateRight(head,k);
	rotateLeft(head,k);
}
