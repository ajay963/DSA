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

int lenghtLL(node* head){
    node* temp = head;
    int ctr = 0;
    while (temp!=NULL){
        temp=temp->next;
        ctr++;
    }
    return ctr;
}

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void insertAtHead(node* &head,int val){
    node* newNode = new node(val);
    newNode->next=head;
    head = newNode;
}

void insertAtTail(node* &head,int val){
   node* newNode = new node(val);
   node* temp = head;
   if(head==NULL){
   head = newNode;
   return;
   }

   while(temp->next!=NULL){
       temp = temp->next;
   }
   temp->next = newNode;
}
node* intersectNodes(node* head1,node* head2,int pos){
   node* ptr = head2;
   while(pos--){
       head1 = head1->next;
   }
   while(head2->next!=NULL){
       head2 = head2->next;
   }
   head2->next = head1;
   return ptr;
}


int intersectPoint(node* head1,node* head2){
    int len1 = lenghtLL(head1);
    int len2 = lenghtLL(head2);
    
    int d=0;
    node* ptr1;
    node* ptr2;

    if(len1>len2){
        d = len1-len2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = len2-len1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL)
        return -1;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2)
        return ptr1->data;

        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

node* mergeNodes(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* mergedNode = NULL;
    insertAtTail(mergedNode,-1);
    while(ptr1!=NULL && ptr2!=NULL){
          if(ptr1->data < ptr2->data){

              insertAtTail(mergedNode,ptr1->data);
              ptr1 = ptr1->next;
          }
          else{
              insertAtTail(mergedNode,ptr2->data);
              ptr2 = ptr2->next;
          }
    }
    while(ptr1!=NULL){
        insertAtTail(mergedNode,ptr1->data);
        ptr1 = ptr1->next;
    }
     while(ptr2!=NULL){
        insertAtTail(mergedNode,ptr2->data);
        ptr2 = ptr2->next;
    }
    display(mergedNode);
    return mergedNode->next;
}

node* mergeRecursion(node* head1,node* head2){
    
   if(head1==NULL)
   return head2;

   if(head2==NULL)
   return head1;
                
    node* mergedNode;
    if(head1->data<head2->data){
        mergedNode = head1;
        mergedNode->next = mergeRecursion(head1->next,head2);
    } else{
        mergedNode = head2;
        mergedNode->next = mergeRecursion(head1,head2->next);
    }
 
    return mergedNode;

}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;
   
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10,11,12,13};
    for(int j=0;j<(sizeof(arr1)/sizeof(arr1[j]));j++)
    insertAtTail(head1,arr1[j]);
   
    for(int j=0;j<(sizeof(arr2)/sizeof(arr2[0]));j++)
    insertAtTail(head2,arr2[j]);
    display(head1);
    display(head2);
    // display(intersectNodes(head1,head2,2));
    // node* head3 = intersectNodes(head1,head2,3);
    // cout<<lenghtLL(head3)<<endl;
    // display(head3);
    // cout<<intersectPoint(head1,head3);

    display(mergeNodes(head1,head2));
    display(mergeRecursion(head1,head2));
    return 0;
}