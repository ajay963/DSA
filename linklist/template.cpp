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

    Node* segregate(int N, Node *head){
        Node* evSt = NULL;
        Node* evPtr = NULL;
        Node* oddSt = NULL;
        Node* oddPtr = NULL;
        
        Node* head1 = head;
        while(head!=NULL){
            if(head->data%2==0){
                if(evSt==NULL){
                    evSt = head;
                    evPtr = head;
                }else{
                    evPtr->next = head;
                    evPtr = evPtr->next;
                }
            }else{
                if(oddSt==NULL){
                    oddSt = head;
                    oddPtr = head; 
                }else{
                    oddPtr->next = head;
                    oddPtr = oddPtr->next;
                }
            }
        head = head->next;
        }
        oddPtr->next = NULL;
        if(evSt==NULL)
        return head1; 
        evPtr->next = oddSt;
        return evSt ;
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
    for(int i=0;i<n;i++){
     int val;
     cin>>val;
     Node *temp = new Node(val);
     ans->next = temp;
     ans = ans->next;
    }
    
    Node* res = segregate(n,head->next);
    display(res);
    return 0;
}