/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};
*/

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x==1)
            return head->next;
        Node* temp=head;
        x--;
        while(--x)
            temp=temp->next;
        temp->next=temp->next->next;
        if(temp->next!=NULL)
            temp->next->prev=temp;
        return head;
    }
};

/*
    Given a doubly Linked list and a position. The task is to delete a node from a given position (position starts from 1) in a doubly linked list and return the head of the doubly Linked list.
    
    Examples:
    
    Input: LinkedList = 1 <--> 3 <--> 4, x = 3
    Output: 1 3  
    Explanation: After deleting the node at position 3 (position starts from 1),the linked list will be now as 1 <--> 3.
     
    Input: LinkedList = 1 <--> 5 <--> 2 <--> 9, x = 1
    Output: 5 2 9

    T.C : O(n)
*/
