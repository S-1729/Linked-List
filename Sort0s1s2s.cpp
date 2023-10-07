#include<bits/stdc+.h>
using namespace std;

Node* Sort0s1s2s(Node *head)
{
    Node* dummyZero=new Node(-1);
    Node* dummyOne=new Node(-1);
    Node* dummyTwo=new Node(-1);
    Node *zero=dummyZero,*one=dummyOne,*two=dummyTwo;
    while(head){
        if(head->data==0){
            zero->next=head;
            zero=zero->next;
        }
        else if(head->data==1){
            one->next=head;
            one=one->next;
        }
        else{
            two->next=head;
            two=two->next;
        }
        head=head->next;
    }
    two->next=NULL;
    one->next=dummyTwo->next;
    zero->next=dummyOne->next;
    head=dummyZero->next;
    return head;
}

int main(){
	Sort0s1s2s(head);)
}
