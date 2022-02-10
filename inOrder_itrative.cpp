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

void inOrder(Node* root){
    stack<Node*> st;
    Node* node = root;
    st.push(node);
    node = node->left;

    while(true){
        if(node!=NULL){
         st.push(node);
         node = node->left;
        }
        else{
          if(st.empty()) break;
          Node* curr = st.top();
          st.pop();
          cout<<curr->data<<" ";
          node = curr->right;
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
    inOrder(root);
    return 0;
}