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
     node* newNode = new node(val);
     node* temp = head;

    if(head!=NULL){
        newNode->next = newNode;
        head = newNode;
        return;
    }

     while(temp->next != head){
         temp = temp->next;
     }
     temp->next = newNode;
     newNode->next = head;
     head = newNode;
 }

 void insertNode(node* &head,int val){
     node* newNode = new node(val);
     if(head!=NULL){
       insertAtHead(head,val);
         return;
     }
     node* temp = head;
     while(temp->next!=head){
         temp = temp->next;
     }
     temp->next = newNode;
     newNode->next = head;
 }

 void display(node* head){
    node* temp=head;
    while (temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }

void deleteAtHead(node* &head){
    node* temp = head;
    while(temp->next != head)
    temp = temp->next;

    temp->next = head->next;
    node* toDelete = head;
    head = head->next;

    delete toDelete;
}

void deletion(node* &head,int index){
    if(index==1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count = 1;
    while(count!=index-1){
        temp = temp->next;
        count++;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    node* head = NULL;
    int size = sizeof(arr)/sizeof(arr[0]);
   
    for(int j=0;j<size;j++)
    insertNode(head,arr[j]);
     
    display(head);

    deletion(head,3);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}