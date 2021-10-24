
#include<iostream>
#include<stdlib.h>
#include<queue>
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


void printLevelOrder(Node* root){
    if(root == NULL)
    return;

    queue<Node*> q;
     q.push(root);
     q.push(NULL);

     while(!q.empty()){
        Node* node = q.front();
        q.pop();

      if(node != NULL){
       
          cout<<node->data<<" ";
            if(node->left !=NULL)
            q.push(node->left);
        

          if(node->right !=NULL)
            q.push(node->right);
      }

    else if(!q.empty())
    q.push(NULL);
        
     }

}

        //      1
        //     / \
        //    /   \
        //   2     3
        //  / \   / \
        // 4   5 6   7 

int levelOrderSum(Node* root,int key){
    if(root == NULL)
    return -1;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    int lvl = 0;
    int sum = 0;
    while( !q.empty()){
        
        Node* node = q.front();
        q.pop();
     
        
       if(node!=NULL){
           if(lvl == key)
           sum += node->data;

           if(node->left!=NULL)
           q.push(node->left);

           if(node->right!=NULL)
           q.push(node->right);
       }
       else if( !q.empty()){
           lvl++;
           q.push(NULL);
       }
    }
    return sum;
}



int nodeLenght(Node* root){
    if(root == NULL)
    return 0;
 
    return nodeLenght(root->left)+nodeLenght(root->right)+1;
}

int treeSum(Node* root){
    if(root == NULL)
    return 0;
    return treeSum(root->left)+treeSum(root->right)+root->data;
}

int treeHeight(Node* root){
    if(root==NULL)
    return 0;
    return max(treeHeight(root->left),treeHeight(root->right))+1;
}



int treeDiameter(Node* root){

   if(root == NULL)
   return 0;

   int lLength = treeHeight(root->left);
   int rlength = treeHeight(root->right);
   int daimeter = lLength + rlength + 1;

   int ldiameter = treeDiameter(root->left);
   int rdiameter = treeDiameter(root->right);

  return max(daimeter,max(ldiameter,rdiameter));
    // return max({daimeter,ldiameter,rdiameter});
}

int optDaimeter(Node* root,int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0,rh = 0;

   int ldiameter = optDaimeter(root->left, &lh);
   int rdiameter = optDaimeter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh,rh)+1;

    return max(currDiameter,max(ldiameter,rdiameter));
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(9);
    root->right->right->right->right = new Node(10);
    
    // printLevelOrder(root);
    int height = 0;
   cout << optDaimeter(root,&height);
    return 0;
}