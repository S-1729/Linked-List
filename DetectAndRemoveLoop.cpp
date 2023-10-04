#include<bits/stdc++.h>
using namespace std;

Node* DetectCycleAndRemove(Node* head)
{
    //Detecting loop
    Node *slow=head,*fast=head;
    bool flag=true;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag=false;
            break;
        }
    }
    if(flag)
        return head;
       
    //finding starting node of loop     
    Node *start=head;
    while(start!=fast)
    {
        start=start->next;
        fast=fast->next;
    }
    
    //removing loop
    while(slow->next!=start)
        slow=slow->next;
    
    slow->next=NULL;
    return head;
}

int main( )
{
	DetectCycleAndRemove(head);
}
