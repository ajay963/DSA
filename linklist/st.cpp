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

void insertAtTail(node* &head,int val){
    node* n = new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void disp(node* head){
    node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }

void insertAtHead(node* &head,int val){
   node* n = new node(val);
   n->next=head;
   head=n;
}

bool search(node* head,int val){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==val)
        return true;
        temp=temp->next;
    }
    return false;
}
void deleteAtHead(node* &head){
    node* toDelete=head;
    head=head->next;
    delete toDelete;
}

void deleteData(node* &head,int key){
    if(head==NULL)
    return;

    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp= head;


   while (temp->next->data!=key)
   {   
    temp=temp->next;
   }
   node* toDelete = temp->next;
   temp->next=temp->next->next;
   delete toDelete;
}

node* revese(node* &head){
    node* pre=NULL;
    node* curr=head;
    node* nxt;
    
    while(curr!=NULL){
       nxt =  curr->next;
       curr->next = pre;
       
       pre = curr;
       curr  = nxt;
    }
   return pre;
}

node* reverseRecc(node* &head){
    if(head->next==NULL || head==NULL)
    return head;
    node* newHead = reverseRecc(head->next);
    head->next->next=head;
    head->next=NULL;

    return newHead;
}

node* reverseKNode(node* &head,int k){
    node* prePtr=NULL;
    node* currPtr=head;
    node* nxtPtr;
    int ctr=0;

    while(ctr<k && currPtr!=NULL){
        nxtPtr = currPtr->next;
        currPtr->next = prePtr;

        prePtr = currPtr;
        currPtr = nxtPtr;
        ctr++;
    }

    if(currPtr!=NULL)
    head->next = reverseKNode(nxtPtr,k);

    return prePtr;
    
}

int lenghtLL(node* head){
    node* temp = head;
    int ctr = 0;
    while (temp!=NULL){
        temp=temp->next;
        ctr++;
    }
    return ctr;
}
node* appendK(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail = head;
    
    int len = lenghtLL(head);
    int ctr = 1;
    k=k%len;
    while(tail->next!=NULL){
        if(ctr==len-k)
        newTail = tail;

        if(ctr==len-k+1)
        newHead = tail;

        tail=tail->next;
        ctr++;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

void intersectNodes(node* &head1,node* &head2,int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next = temp1;
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


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,30);
    insertAtTail(head,10);
    insertAtTail(head,40);
    insertAtHead(head,53);
    

    cout<<"Display Data"<<endl;
    disp(head);

    node* head2 = revese(head);
    intersectNodes(head,head2,3);
    disp(head2);
    cout<<intersectPoint(head,head2)<<endl;
    disp(head2);

    cout<<"Display Data";
    disp(head2);
    cout<<"Display Data";
    disp(reverseKNode(head2,3));
    disp(appendK(head2,3));
    return 0;
}