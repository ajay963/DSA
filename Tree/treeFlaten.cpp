#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
    data = val;
    left = NULL;
    right = NULL;
    }
  
};

void flatten(Node* root){
    if(root == NULL)
    return;

    if( root->left == NULL && root->right == NULL)
    return;

    Node* temp = root->right;
    root->right = root->left;
    root->left = NULL;
    Node* tail = root;
    while( tail->right != NULL){
        tail = tail->right;
    }
    tail->right = temp;
    
    flatten(root->right);

}
void preOrder(Node* root){
    if( root == NULL)
    return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


        //       4
        //     /   \
        //    9     5
        //  /  \     \
        // 1    3     6
int main(){
    Node* root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
 
    flatten(root);
    preOrder(root);

    return 0;
}