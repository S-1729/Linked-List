#include<bits/stdc++.h>
using namespace std;

ListNode* mergeKLists(vector<ListNode*>& lists) {
    vector<int>v;
    for(auto temp:lists){
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
    }
    sort(v.begin(),v.end());
        
    ListNode* dummy=new ListNode(-1);
    ListNode* temp=dummy;
    for(auto i:v){
        temp->next=new ListNode(i);
        temp=temp->next;
    }
    return dummy->next;
}

int main(){
	mergeKLists(lists);
}
