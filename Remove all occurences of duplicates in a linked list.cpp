/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        Node* dummy=new Node(-1);
        Node *temp=dummy,*curr=head;
        while(curr){
            if(curr->next!=NULL && curr->data==curr->next->data){
                while(curr->next && curr->data==curr->next->data)
                    curr=curr->next;
            }
            else{
                temp->next=curr;
                temp=temp->next;
            }
            curr=curr->next;
        }
        temp->next=curr;
        return dummy->next;
    }
};


/*
    Given a sorted linked list, delete all nodes that have duplicate numbers (all occurrences), leaving only numbers that appear once in the original list, and return the head of the modified linked list. 
    
    Examples:
    
    Input: Linked List = 23->28->28->35->49->49->53->53
    Output: 23 35
    Explanation: 
    The duplicate numbers are 28, 49 and 53 which are removed from the list.
    
    Input: Linked List = 11->11->11->11->75->75
    Output: Empty list
    Explanation: 
    All the nodes in the linked list have duplicates. Hence the resultant list would be empty.

    T.C :O(n)
*/
