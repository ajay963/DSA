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



int main(){
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->left = new Node(4);
    root->left->right = new Node(10);

    root->right->left = new Node(9);
    root->right-> right = new Node(10);

    root->left->left->right = new Node(5);
    root->left->left->left->right->right = new Node(6);

   

//    vector<int> ans = distanceK(root,root->left,2);
   
//    for(auto it:ans)
//    cout<<it<<" ";


   return 0;
}