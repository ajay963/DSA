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

   bool getPath(Node* root,vector<int>& arr,int key){
       if(root==NULL) return false;
       
       arr.push_back(root->data);
       if(root->data==key)
       return true;

      if(
      getPath(root->left,arr,key) or  
      getPath(root->right,arr,key))
      return true;

       arr.pop_back();
       return false;
   }

void getPath(Node* root,int key){
    vector<int> arr;
    getPath(root,arr,key);

    for(auto it:arr)
    cout<<it<<" ";
}

int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->right->left = new Node(6);
    root->left->right-> right = new Node(7);
   

   int key = 7;
//    itrativeInorder(root);
   getPath(root,key);
   return 0;
}