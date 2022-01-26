#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next =NULL;
    }
};



    Node* removeDuplicates(Node *head){
        Node* node = new Node(-1);
        Node* ansNode = node;
        node->next = head;
        node = node->next;
        
        int data = 0;
        while(node->next!=NULL){
            Node* item = node->next;
            while(item!=NULL and node->data == item->data){
                data = item->data;
                Node* temp = item; 
                node->next = item->next;
                delete temp;
                item = item->next;
            }
    
            if(node->data == data){
                if(node!= NULL){
                    node->data = node->next->data;
                    Node* temp = node->next;
                    node->next = node->next->next;
                    delete temp;

                    node = node->next;
                }
            }
            else
            node = node->next;
        }
            cout<<endl;
            if(data == node->data)
            delete node;
                
        return ansNode->next;
    }



Node* inPlace2(Node* head){ 
    if(head==NULL or head->next==NULL)
    return head;
    
    Node* node = head;

    vector<int> arr;
    while(node!=NULL){
        arr.push_back(node->data);
        node = node->next;
    }
   
  Node* ansNode = new Node(-1);
  Node* ansNodeHead = ansNode;
//   int n = arr.size();

  int st=0, end=arr.size()-1;
  while(st<end){
   Node* temp = new Node(arr[st]);
   ansNode->next = temp;
   ansNode = ansNode->next;
//    cout<<ansNode->data<<" ";   

   Node* temp2 = new Node(arr[end]);
   ansNode->next = temp2;
   ansNode = ansNode->next;
//    cout<<ansNode->data<<" ";

   st++; end--;
  }

  if(arr.size()%2==1){
      Node* temp = new Node(arr[st]);
      ansNode->next = temp;
      ansNode = ansNode->next;
  }
  ansNode->next = NULL;
  cout<<endl;
  
  return ansNodeHead->next;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main(){
    int n;
    cin>>n;
    
    Node* head = new Node(-1);
    Node* ans = head;

    int val;
    for(int i=0;i<n;i++){
     cin>>val;
     Node *temp = new Node(val);
     ans->next = temp;
     ans = ans->next;
    }
    
    Node* res = removeDuplicates(head->next);
    display(res);
    return 0;
}