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

void itrativeInorder(Node* root){
   stack<Node*> st;
   Node* curr = root;

   while(curr!=NULL or !st.empty()){
       while(curr!=NULL){
           st.push(curr);
           curr = curr->left;
       }
       curr = st.top();
       st.pop();

       cout<<curr->data<<" ";
       curr = curr->right;
   }
}

void kDis(Node* root,int k){
    if(root==NULL) return;

    if(k==0) 
    cout<<root->data<<" ";

    kDis(root->left,k-1);
    kDis(root->right,k-1);
}


int main(){
    Node* root = new Node(3);
    root->left = new Node(2);
    root->left->right = new Node(1);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(3);
   
//    itrativeInorder(root);
   kDis(root,3);
   return 0;
}