#include<iostream>
using namespace std;

class TreeNode{
 public:
 int key;
 TreeNode *left;
 TreeNode *right;

 TreeNode(int k){
     key =k;
     left=NULL;
     right=NULL;
 }
};

int main(){
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->right = new TreeNode(6);
    cout<<root->left->right->key;
    return 0;
}