#include<bits/stdc++.h>
using namespace std;

bool isCircular(Node *head){
    Node* temp=head;
    while(temp){
        if(temp->next==head)
        return true;
        temp=temp->next;
    }
    return false;
}

int main(){
    isCircular(head);
}
