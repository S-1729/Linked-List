/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

TreeNode* solve(int i,int n,vector<int>&arr){
    if(i>=n)
        return NULL;
    TreeNode* root=new TreeNode(arr[i]);
    root->left=solve(2*i+1,n,arr);
    root->right=solve(2*i+2,n,arr);
    return root;
}
void convert(Node *head, TreeNode *&root) {
    vector<int>arr;
    Node* temp=head;
    while(temp){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    root=solve(0,arr.size(),arr);
    return ;
}

/*
    Given a Linked List Representation of Complete Binary Tree. The task is to construct the Binary tree and print the level order traversal of the Binary tree. 
    Note: The complete binary tree is represented as a linked list in a way where if the root node is stored at position i, its left, and right children are stored at position 2*i+1, and 2*i+2 respectively. H is the height of the tree and this space is used implicitly for the recursion stack.
    
    Examples:
    
    Input: n = 5, k = 1->2->3->4->5
    Output: 1 2 3 4 5
    Explanation: The tree would look like
          1
        /   \
       2     3
     /  \
    4   5
    Now, the level order traversal of
    the above tree is 1 2 3 4 5.
    
    Input: n = 5, k = 5->4->3->2->1
    Output: 5 4 3 2 1
    Explanation: The tree would look like
         5
       /  \
      4    3
     / \
    2   1
    Now, the level order traversal of
    the above tree is 5 4 3 2 1.

    T.C : O(n)
    S.C : O(n)
*/
