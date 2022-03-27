#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

Node* lca(Node* root,Node* p,Node* q){
    if(root==NULL or root==p or root==q)
    return root;
    
    Node* left = lca(root->left,p,q);
    Node* right = lca(root->right,p,q);

    if(right==NULL) return left;
    else if(left==NULL) return right;
    else return root;
}

int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->right->left = new Node(6);
    root->left->right-> right = new Node(7);
   

   cout<<lca(root,root->left->right-> right, root->left->right)->data;
//    itrativeInorder(root);
  
   return 0;
}