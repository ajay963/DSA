#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void displayNode(Node* head);
// Node* reverseBtw(Node* node,int m,int n);

void displayNode(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void reverseBtw(Node* head,int m,int n){
    stack<int> st;
    Node* node = head;
    Node* ans = new Node(-1);
    Node* anshead = ans;

    for(int i=1;i<m;i++){
    Node* temp = new Node(node->data);
    node = node->next;
    ans->next = temp;
    ans= ans->next;
    }

    for(int i=m;i<=n;i++){
        st.push(node->data);
        node = node->next;
    }
    
    while(!st.empty()){
        Node* temp = new Node(st.top());
        st.pop();
        ans->next = temp;
        ans = ans->next;
    }

    while(node!=NULL){
        Node* temp = new Node(node->data);
        ans->next = temp;
        ans = ans->next;
        node = node->next;
    }

    displayNode(anshead->next);


}


int main(){
   Node * head = new Node(1);
   Node* node = head;
   for(int  i=2;i<=6;i++){
       Node* temp = new Node(i);
       node->next = temp;
       node = node->next;
   }

//    displayNode(head);

   reverseBtw(head,2,4);
   return 0;
}