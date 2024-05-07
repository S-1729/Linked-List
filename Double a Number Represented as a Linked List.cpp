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
        ListNode *curr=head,*prev=NULL,*Next;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    
    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);
        int carry=0;
        ListNode* temp=head;
        while(temp){
            int x=temp!=NULL ?temp->val:0;
            int sum=2*x+carry;
            carry=sum/10;
            temp->val=sum%10;
            if(carry && temp->next==NULL){
                temp->next=new ListNode(carry);
                break;
            }
            temp=temp->next;
        }
        return reverse(head);
            
    }
};

/*
    You are given the head of a non-empty linked list representing a non-negative integer without leading zeroes.
    Return the head of the linked list after doubling it.

    Example 1:
    Input: head = [1,8,9]
    Output: [3,7,8]
    Explanation: The figure above corresponds to the given linked list which represents the number 189. Hence, the returned linked list represents the number 189 * 2 = 378.

    Example 2:
    Input: head = [9,9,9]
    Output: [1,9,9,8]
    Explanation: The figure above corresponds to the given linked list which represents the number 999. Hence, the returned linked list reprersents the number 999 * 2 = 1998. 

    T.C : O(3*n)
*/
