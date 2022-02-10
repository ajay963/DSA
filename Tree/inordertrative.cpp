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

void itrativePreorder(Node* root){
    stack<Node*> st;
    Node* curr = root;

    while(curr!=NULL or !st.empty()){
       while(curr!=NULL){
           cout<<curr->data<<" ";
           st.push(curr);
           curr = curr->left;
       }
    
       curr = st.top();
       st.pop();
     
       curr = curr->right;
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
   
//    itrativeInorder(root);
itrativePreorder(root);
   return 0;
}