#include<bits/stdc++.h>
using namespace std;

Node* MiddleNode(Node* head)
{
	Node *slow=head,*fast=head->next;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}

Node* Merge(Node* head1,Node* head2)
{
	if(head1==NULL)	
		return head2;
	if(head2==NULL)
		return head1;
	
	Node* dummy=new Node(-1);
	Node* temp=dummy;
	
	while(head1!=NULL && head2!=NULL){
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

Node* MergeSort(Node* head)
{
	if(head==NULL || head->next==NULL)
		return head;
	
	//finding middle node
	Node* mid=MiddleNode(head);
	Node* left=head;
	Node* right=mid->next;
	mid->next=NULL;
	
	//divide into two linked lists
	left=MergeSort(left);
	right=MergeSort(right);
	
	//merge two sorted linked lists
	Node* ans=Merge(left,right);
	return ans;
}
int main(){
	MergeSort(head);
}
