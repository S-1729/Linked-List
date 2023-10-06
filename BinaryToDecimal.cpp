#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(Node* head)
{
    int ans=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        ans=(ans*2)+temp->data;
        temp=temp->next;
    }
    return ans;
}

int main()
{
	BinaryToDecimal(head);
}
