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

Node* swapNodes(Node* head){
  if(head==NULL or head->next == NULL) return NULL;

  Node* curr = head->next->next;
  Node* prev = head;
  head = head->next;
  head->next = prev;

  while(curr!=NULL and curr->next!=NULL){
      prev->next = curr->next;
      prev = curr;
      Node* next = curr->next->next;
      curr->next->next = curr;
      curr = next;
  }
  prev->next = curr;
  return head;
}

void printList(Node* head){
    if(head==NULL)  
    return;

    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node *head = new Node(1);
    Node* headCopy = head;
    // head = head->next;
    head->next = new Node(2);
    head = head->next;
    head->next = new Node(3);
    head= head->next;
    head->next = new Node(4);
    head = head->next;
    head->next = new Node(5);
    head = head->next;
    head->next = new Node(6);
    head = head->next;
    head->next = new Node(7);
    head = head->next;

    // printList(headCopy);
    printList(swapNodes(headCopy));
    return 0;
}