/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode *curr=head,*prev=NULL,*Next=NULL;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) {
        head= reverse(head);
        ListNode* temp=head;
        while(temp->next){
            if(temp->val>temp->next->val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return reverse(head);
    }
};

//Code-2 Recursion T.C : O(n)
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* newNode=removeNodes(head->next);
        if(head->val<newNode->val){
            delete head;
            return newNode;
        }
        head->next=newNode;
        return head;
    }
};

/*
    You are given the head of a linked list.
    Remove every node which has a node with a greater value anywhere to the right side of it.
    Return the head of the modified linked list.

    Example 1:
    Input: head = [5,2,13,3,8]
    Output: [13,8]
    Explanation: The nodes that should be removed are 5, 2 and 3.
     - Node 13 is to the right of node 5.
     - Node 13 is to the right of node 2.
     - Node 8 is to the right of node 3.
     
    Example 2:
    Input: head = [1,1,1,1]
    Output: [1,1,1,1]
    Explanation: Every node has value 1, so no nodes are removed.

    T.C : O(3*n)
*/
