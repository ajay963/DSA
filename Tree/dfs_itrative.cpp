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

void preOrder(Node* root){
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
         int size = st.size();
        for(int i=0;i<size;i++){
             Node* curr = st.top();
        st.pop();

        if(curr->right!=NULL) st.push(curr->right);
        if(curr->left!=NULL) st.push(curr->left);
        cout<<curr->data<<" ";
     }
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    // preOrder(root);
    preOrder(root);
    return 0;
}