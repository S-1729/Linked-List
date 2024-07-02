/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    bool compute(Node* head) {
        string str1="";
        Node* temp=head;
        while(temp){
            str1=str1+temp->data;
            temp=temp->next;
        }
        int n=str1.size();
        for(int i=0;i<n/2;i++){
            if(str1[i]!=str1[n-i-1])
                return false;
        }
        return true;
    }
};

/*
    Given a linked list with string data, check whether the combined string formed is palindrome. If the combined string is palindrome then return true otherwise return false.
    
    Example:
    
    Input:  a->bc->d->dcb->a
    Output : true
    Explanation: As string "abcddcba" is palindrome the function should return true.
    
    Input:  a->bc->d->ba
    Output : false
    Explanation: As string "abcdba" is not palindrome the function should return false.

    T.C : O(n)
    S.C : O(n)
*/
