#include<bits/stdc++.h>
using namespace std;

//Iterative
Node* sortedMerge(Node* head1, Node* head2)
{
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    
    while(head1 && head2)
    {
        if(head1->data < head2->data){
            temp->next=head1;
            head1=head1->next;
        }
        else{
            temp->next=head2;
            head2=head2->next;
        }
        temp=temp->next;
    }
    
    if(head1!=NULL)
    temp->next=head1;
    else
    temp->next=head2;
    
    return dummy->next;
}


//Recursive
Node* sortedMerge(Node* head1, Node* head2)  
{  
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    if(head1->data < head2->data){
        head1->next=sortedMerge(head1->next,head2);
        return head1;
    }
    else{
        head2->next=sortedMerge(head1,head2->next);
        return head2;
    }
}

int main()
{
	sortedMerge(head1,head2);
}
