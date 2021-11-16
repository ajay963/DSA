#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val){
   if(head == NULL)
   head =  new node(val);

   node* temp = head;
   head = new node(val);
   head->next = temp;
}

void insertAtTail(node* &head,int val){
    if(head == NULL){
        head = new node(val);
        return;
    }
   node* temp = head;
   while( temp->next != NULL){
    temp = temp->next;
   }
   temp->next = new node(val);
}

node* revLL(node* &head){

    node* revLiL = NULL;
    while(head != NULL){
        insertAtHead(revLiL,head->data);
        head = head->next;
    }
    return revLiL;
}
node* revlinkList(node* head){
    node* pre = NULL;
    node* curr = head;
    node* nxt ;

    while(pre!=NULL){
        nxt = curr->next;
        curr->next = pre;

        pre = curr;
        curr = nxt;
    }
    return pre;
}

void display(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    node* head = new node(1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    // insertAtHead(head,7);
    // insertAtHead(head,8);
    // insertAtHead(head,9);
    
   display(revlinkList(head));

    return 0;
}