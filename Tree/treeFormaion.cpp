#include<iostream>
using namespace std;

class Node{
 public:
 int key;
 Node* left;
 Node* right;

 Node(int k){
     key = k;
     left = NULL;
     right = NULL;
 }
};

void inorder(Node* root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

int search(int inorder[],int st,int end,int curr){
  for(int i=st;i<=end;i++){
      if(inorder[i]==curr)
      return i;
  } 
  return -1;
}


Node* buildTree(int preorder[],int inorder[],int st,int end){
    
    static int idx = 0; 
    if(st>end)
    return NULL;
    
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);

    if(st==end)
    return node;

    int pos = search(inorder,st,end,curr);
   
    node->left = buildTree(preorder,inorder,st,pos-1);
    node->right = buildTree(preorder,inorder,pos+1,end); 
    return node; 
}

int main(){
    int preOrder[] = { 1 , 2 , 4 , 3 , 5 };
    int inOrder[] = { 4 , 2 , 1 , 5 , 3 };

    Node* root = buildTree(preOrder,inOrder,0,4);
    cout<<"InOrder: ";
    inorder(root);

    return 0;
}