#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int diameter(Node* root,int& maxmm){
    if(root==NULL)
    return 0;

    int lh = diameter(root->left,maxmm);
    int rh = diameter( root->right,maxmm);
    
    maxmm = max(maxmm,lh+rh);
    return 1+max(lh,rh);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);
    
    int dia = 0;
    // preOrder(root);
    cout<<diameter(root,dia);
    return 0;
}