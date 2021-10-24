#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    Node* left;
    Node* right;

    Node(int val){
        key = val;
        left = right = NULL;
    } 
};

int height(Node* root){
    if(root == NULL)
    return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}


bool isBalanced(Node* root){
    if(root == NULL)
    return true;

    if(isBalanced(root->left) == false)
    return false;

    if(isBalanced(root->right) == false)
    return false;
    
    int lheight = height(root->left);
    int rheight = height(root->right);

    return (abs(lheight-rheight) <= 1)? true: false;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(23);
    root->right->right->left->right = new Node(12);

    cout<<isBalanced(root);
    return 0;
}