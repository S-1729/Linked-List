#include<bits/stdc++.h>
using namespace std;

Node* MergeTwoSortedLists(Node* head1,Node* head2)
{
    if(head1==NULL)
    return head2;
    if(head2==NULL)
    return head1;
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    while(head1&&head2){
        if(head1->data<head2->data){
            temp->bottom=head1;
            head1=head1->bottom;
        }
        else{
            temp->bottom=head2;
            head2=head2->bottom;
        }
        temp=temp->bottom;
    }
    if(head1!=NULL)
    temp->bottom=head1;
    if(head2!=NULL)
    temp->bottom=head2;
    return dummy->bottom;
}

Node* flatten(Node *root)
{
   if(root==NULL || root->next==NULL)
   return root;
   return MergeTwoSortedLists(root,flatten(root->next));
}

int main(){
	flatten(root);
}
