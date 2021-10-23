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


int search(int inorder[],int st,int end,int key){
    for(int i=st;i<=end;i++){
        if(inorder[i]==key)
        return i;
    }
    return -1;
}

Node* buildTree(int postOrder[],int inOrder[],int st,int end){
    static int idx = 4;

    if(st>end)
    return NULL;

     int val = inOrder[idx];
     idx--;


     Node* node = new Node(val);

     if(st==end)
     return node;

     int pos = search(inOrder,st,end,val);
     node->right = buildTree(postOrder,inOrder,pos+1,end);
     node->left = buildTree(postOrder,inOrder,st,pos-1);

     return node;
}

void inorder(Node* root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

int main(){
     int postOrder[] = { 4 , 2 , 5 , 3 , 1 };
    int inOrder[] = { 4 , 2 , 1 , 5 , 3 };
    Node* root = buildTree(postOrder,inOrder,0,4);
    inorder(root);
    return 0;
}