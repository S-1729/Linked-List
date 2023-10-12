#include<bits/stdc++.h>
using namespace std;

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* dummy=new ListNode(-1);
    dummy->next=head;
    ListNode *temp=dummy,*curr=head;
    
    while(curr!=NULL){
        if(curr->next!=NULL && curr->val==curr->next->val){
            while(curr->next!=NULL && curr->val==curr->next->val)
                curr=curr->next;

            temp->next=curr->next;
        }
        else
            temp=temp->next;
            
        curr=curr->next;
    }
    return dummy->next;
}

int main(){
	deleteDuplicates(head);
	//input:  1->2->3->3->4->4->5 
	//output: 1->2->5
}
