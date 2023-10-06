#include<bits/stdc++.h>
using namespace std;

bool Identical(Node* head1,Node* head2)
{
    Node *temp1=head1,*temp2=head2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
            return false;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1!=NULL || temp2!=NULL)
        return false;
        
    return true;
}

int main()
{
	Identical(head1,head2);
}
