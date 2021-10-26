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
        right  =NULL;
    }
};

Node* lca(Node* root,int n1,int n2){
  if( root == NULL)
  return NULL;

   if( root->data == n1 || root->data == n2)
   return root;
   
   Node* left = lca(root->left,n1,n2);
   Node* right  = lca(root->right,n1,n2);

   if( left != NULL && right != NULL)
   return root;

//    if( left == NULL && right == NULL)
//    return NULL;

   if( left != NULL)
   return left;
   
   return right;
}

int treeDist(Node *root,int k,int level){
    if(root == NULL)
    return -1;

    if(root->data == k)
    return level;

    int left = treeDist(root->left,k,level+1);

    if( left != -1)
    return left;

    return treeDist(root->right,k,level+1);
}

int disBtwNode(Node* root,int n1,int n2){
    Node* node = lca(root,n1,n2);

    int d1 = treeDist(node,n1,0);
    int d2 = treeDist(node,n2,0);
    
    return d1+d2;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right =  new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(10);
    root->left->right->right = new Node(12);

    cout<<disBtwNode(root,10,12);
    return 0;
}