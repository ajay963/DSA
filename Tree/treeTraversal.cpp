#include<iostream>
using namespace std;

struct Node{
    public:
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};


    //      1
    //    /   \
    //   2     3
    //  / \   / \
    // 4   5 6   7

void preOrder(struct Node* root){
    if(root==NULL)
    return;
    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void inOrder(struct Node* root){
    if(root==NULL)
    return;
    inOrder(root->left);
    cout<<root->key<<" ";
    inOrder(root->right);
}

void postOrder(struct Node* root){
    if(root==NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->key<<" ";
}


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left =new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
   
   cout<<"PreOrder: ";
   preOrder(root);
   cout<<endl;
   cout<<"InOrder: ";
   inOrder(root);
   cout<<endl;
   cout<<"PostOrder: ";
   postOrder(root);
   cout<<endl;
    return 0;

}