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

void zigzag(Node* root){
    queue<Node*> que;
    que.push(root);
    bool isLtoR = true;

    while (!que.empty()){
       int size= que.size();
       
       for(int i=0;i<size;i++){
           Node* curr = que.front();
           que.pop();
           
           
           if(root->left!=NULL) que.push(root->left);
           if(root->right!=NULL) que.push(root->right);
           

           vector<int> ans;
        //    (isLtoR)?cout<<curr->data<<" ";
       }
       cout<<endl;
    }
    
}


int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);
   
//    itrativeInorder(root);
   zigzag(root);
   return 0;
}