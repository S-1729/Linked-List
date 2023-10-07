#include<bits/stdc++.h>
using namespace std;

Node* Reverse(Node* head)
{
	if(head==NULL || head->next==NULL)
		return head;
	Node *prev=NULL,*curr=head,*next;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}

Node* AddTwoLists(Node* head1,Node* head2)
{
    head1=Reverse(head1);
    head2=Reverse(head2);
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    int carry=0;
    
    while(head1 || head2 || carry)
    {
        int x=0,y=0,sum;
        if(head1){
            x=head1->data;
            head1=head1->next;
        }
        if(head2){
            y=head2->data;
            head2=head2->next;
        }
        sum=x+y+carry;
        temp->next=new Node(sum%10);
        temp=temp->next;
        carry=sum/10;
    }
    Node* head=Reverse(dummy->next);
    return head;
}

int main()
{
	AddTwoLists(head1,head2);
}
