#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
     Node( int val){
    data = val;
    left = right = NULL;
     }
};



void leftView(Node* root){
   if( root == NULL)
   return;
   
   queue<Node*> que;
   que.push(root);
   while( !que.empty()){
       Node* curr = que.front();
       int n = que.size();
       for(int i=0; i<n; i++){
           que.pop();
           if( i==n-1)
           cout<<curr->data<<" ";
        
           if(curr->left != NULL)
           que.push(curr->left);

           if(curr->right !=NULL)
           que.push(curr->left);
       }
    cout<<endl;
   }
}

void rightView(Node* root){
    if(root == NULL)
    return;

    queue<Node*> que;
    que.push(root);
    while( !que.empty()){
        int n = que.size();
        Node* curr = que.front();
        for(int i = 0 ; i<n ; i++){
            que.pop();

            if( n == 0)
            cout<<curr->data<<" ";

            if(curr->left != NULL)
            que.push(curr->left);

            if(curr->right != NULL)
            que.push(curr->right);

        }
        cout<<endl;
    }
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right =  new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    leftView(root);
    return 0;
}