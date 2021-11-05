#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int k){
        val = k;
        left = NULL;
        right  = NULL;
    }
};


Node* insertBST(Node *root,int val){
    if(root == NULL)
     return new Node(val);
    
    (val < root->val)?
    root->left = insertBST(root->left,val):   
    root->right = insertBST(root->right,val);

   return root;
}

void inOrder(Node* root){
    if( root == NULL)
    return;
    
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
int main(){
    int arr[] = { 1, 3, 4, 2, 7};
    Node* root = NULL;
    root = insertBST(root,5);
    for( int j=0;j<5;j++)
    insertBST(root,arr[j]);

    inOrder(root);
    return 0;
}