#include<bits/stdc++.h>
using namespace std;

ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy=new ListNode(-1);
    ListNode* temp=dummy;
    while(head!=NULL){
        if(head->val!=val){
            temp->next=head;
            temp=temp->next;
        }
        head=head->next;
    }
    temp->next=NULL;
    return dummy->next;
}

int main(){
	removeElements(head,val);
}
