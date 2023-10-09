#include<bits/stdc++.h>
using namespace std;

ListNode* MiddleNode(ListNode* head)
{
    ListNode *slow=head,*fast=head->next;
    while(fast&&fast->next)
	{
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
    
ListNode* Reverse(ListNode* head){
    if(head==NULL || head->next==NULL)
        return head;
    ListNode *prev=NULL,*curr=head,*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
    
void reorderList(ListNode* head) {
        
    ListNode* mid=MiddleNode(head);
    ListNode* head2=Reverse(mid->next);
    mid->next=NULL;
    ListNode* head1=head;
    
    while(head2!=NULL){
        ListNode* temp1=head1->next;
        ListNode* temp2=head2->next;
        head1->next=head2;
        head2->next=temp1;
        head1=temp1;
        head2=temp2;
    }
}

int main(){
	reorderList(head);
}
