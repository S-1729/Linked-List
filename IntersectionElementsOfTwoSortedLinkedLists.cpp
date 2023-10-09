#include<bits/stdc++.h>
using namespace std;

Node* findIntersection(Node* head1, Node* head2)
{
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    while(head1&&head2){
        if(head1->data==head2->data){
            temp->next=head1;
            temp=temp->next;
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->data<head2->data)
        head1=head1->next;
        else
        head2=head2->next;
    }
    temp->next=NULL;
    return dummy->next;
}

int main(){
	findIntersection(head1,head2);	
}
