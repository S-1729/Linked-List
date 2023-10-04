#include<bits/stdc++.h>
using namespace std;

void RemoveNthNode(Node* node)
{
    node->data=node->next->data;
    node->next=node->next->next;
}

int main()
{
	DeleteANode(node);
}
