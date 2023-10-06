#include<bits/stdc++.h>
using namespace std;

Node* Intersection(Node* headA,Node* headB)
{
	if(headA==NULL || headB==NULL)
		return NULL;
    Node *a=headA,*b=headB;
    while(a!=b)
    {
        a= a==NULL?headB:a->next;
        b= b==NULL?headA:b->next;
    }
    return a;
}
    
int main()
{
	Intersection(head);
}
