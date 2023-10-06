#include<bits/stdc++.h>
using namespace std;

ListNode* Reverse(ListNode* head)
{
    if(!head || !head->next)
        return head;
    ListNode *prev=NULL,*curr=head,*next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
    
ListNode* Middle(ListNode* head)
{
    ListNode *slow=head,*fast=head->next;   
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
    
bool isPalindrome(ListNode* head) {
    if(head==NULL || head->next==NULL)
        return true;
        
    ListNode* middle=Middle(head);
    ListNode* mid=middle->next;
    middle->next=Reverse(mid);

    ListNode* temp=head;
    middle=middle->next;
    while(middle!=NULL)
    {
        if(temp->val!=middle->val)
            return false;
        temp=temp->next;
        middle=middle->next;
    }
    return true;
}

int main()
{
	Palindrome(head);
}
