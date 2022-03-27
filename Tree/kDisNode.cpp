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

void markParent(Node* root,unordered_map<Node*,Node*>& parent_track){
    queue<Node*> que;
    que.push(root);

    while(!que.empty()){
     Node* curr = que.front();
     que.pop();

     if(curr->left!=NULL){
         parent_track[curr->left] = curr;
         que.push(curr->left);
     }

     if(curr->right!=NULL){
         parent_track[curr->right] = curr;
         que.push(curr->right);
     }
}}

vector<int> distanceK(Node* root,Node* target,int k){
    unordered_map<Node*,Node*> parent_track;
    queue<Node*> que;
    unordered_map<Node*,bool> visited;

    markParent(root,parent_track);

    visited[target] = true;
    que.push(target);
    int curr_level = 0;

    while(!que.empty()){
        int size = que.size();
        if(curr_level==k) break;
        curr_level++;
        for(int i=0;i<size;i++){
            Node* curr = que.front();
            que.pop();

            if(curr->left!=NULL and !visited[curr->left]){
                que.push(curr->left);
                visited[curr->left]=true;
            } 

            if(curr->right!=NULL and !visited[curr->right]){
                que.push(curr->right);
                visited[curr->right]=true;
            }

            if(parent_track[curr] and !visited[parent_track[curr]]){
                que.push(parent_track[curr]);
                visited[parent_track[curr]]=true;
            }
        }
    }

    vector<int> ans;

    while(!que.empty()){
        Node* temp = que.front();
        que.pop();
        ans.push_back(temp->data);
    }

    return ans;
}

int main(){
    Node* root = new Node(3);

    root->left = new Node(5);
    root->right = new Node(1);
    
    root->left->left = new Node(6);
    root->left->right = new Node(2);

    root->right->left = new Node(0);
    root->right-> right = new Node(8);

    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

   

   vector<int> ans = distanceK(root,root->left,2);
   
   for(auto it:ans)
   cout<<it<<" ";
  
   return 0;
}