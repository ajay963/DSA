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

int counter(Node* head);

void isInterSect(Node* head1,Node* head2){
  int ctr1 =counter(head1);
  int ctr2 =counter(head2);


  if(ctr1>ctr2){
      for(int i=0;i<(ctr1-ctr2);i++)
       head1=head1->next;
  }
  else{
      for(int i=0;i<(ctr2-ctr1);i++)
       head2=head2->next; }
   
   //Finding Intersection
   while(head1!=NULL and head2!=NULL){
    if(head1==head2){
    cout<<head2->data;
    return;}
     head1 = head1->next;
    head2 = head2->next;
   }
   cout<<"No InterSection Point"<<endl;
}

 void insert(Node* &head,int val){
   Node *newNode = new Node(val);
   if(head == NULL){
   head = newNode;
   return; }
   
   Node *curr = head;
   while(curr->next != NULL)
   curr = curr->next;
   
   curr->next = newNode;
 }

 
void print(Node* head){
    if(head==NULL)
    return;

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int counter(Node* head){
    if(head==NULL)
    return -1;
    int ctr=0;
    while(head!=NULL){
    ctr++;
    head=head->next;}
    return ctr;
}
int main(){
    Node *head1 = NULL;
    Node *head2 = NULL;
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    insert(head2,10);
    insert(head2,12);
    insert(head2,13);
    Node* curr = head2;
    Node* head1End = head1;
    for(int i=0;i<2;i++)
    head1End = head1End->next;
    while(curr->next != NULL)
    curr = curr->next;
    
    curr->next = head1End;
     
    print(head1);
    cout<<endl;
    print(head2); 
    cout<<endl;
    isInterSect(head1,head2);
    return 0;
}