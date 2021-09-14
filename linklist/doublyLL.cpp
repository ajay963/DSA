#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* pre;

    node(int val){
        data = val;
        next = NULL;
        pre = NULL;
    }
};

void deleteAtHead(node* &head){
    node* toDelete = head;
    head = head->next;
    head->pre = NULL;
    delete toDelete;


}

void deleteNode(node* &head,int index){
    node* temp = head;
    int ctr = 1;

    if(index==1)
    deleteAtHead(head);

    while(temp!=NULL && ctr!=index){
        temp = temp->next;
        ctr++;
    }

    temp->pre->next = temp->next; 
    if(temp->next!=NULL)
    temp->next->pre = temp->pre; 
    delete temp;
}

void display(node* head){
    node* temp = head;

    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
    
}

void insertAtHead(node* &head,int val){
    node* newNode = new node(val);
    newNode->next = head;
    if(head!=NULL)
    head->pre = newNode;
    
    head = newNode;
}

void insertAtTail(node* &head,int val){
    if(head==NULL){
    insertAtHead(head,val);
    return;}

 node* newNode = new node(val);
 node* temp = head;
 while(temp->next!=NULL)
   temp = temp->next;
 
  temp->next = newNode;
  newNode->pre = temp;
}

int main(){
    node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    insertAtTail(head,70);
    display(head);
    insertAtHead(head,77);
    display(head);
    deleteNode(head,4);
    display(head);

    return 0;
}