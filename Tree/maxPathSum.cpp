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


int maxPathSum(Node* root,int& mx){
    if(root==NULL) return 0;
    
    if(root->data<0) return 0;
    int lh = max(0,maxPathSum(root->left,mx));
    int rh = max(0,maxPathSum(root->right,mx));

    mx = max(mx,lh+rh+root->data);

    return root->data+(lh,rh);
}

int maxPath(Node* root){
    int mx = 0;
    if(root==NULL) return 0;
    maxPathSum(root,mx);
    return mx;
}

int main(){
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    root->right->left = new Node(-30);
    root->right->right = new Node(-15);
   
//    itrativeInorder(root);
   cout<<maxPath(root);
   return 0;
}