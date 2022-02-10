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

int isBalanceInt(Node* root){
   if(root==NULL) return 0;

   int lh = isBalanceInt(root->left);
   int rh = isBalanceInt(root->right);
   
   if(lh==-1 or rh==-1) return -1;
   
   if(abs(lh-rh)>1) return -1;

   return lh+rh+1;
}

bool isBalance(Node* root){
    if(isBalanceInt(root)!=-1) return true;
    return false; 
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->left->left = new Node(6);
    root->left->left->right = new Node(7);
    
    // preOrder(root);
    string tmp = (isBalance(root))?"True":"False";
    cout<<tmp;
    return 0;
}