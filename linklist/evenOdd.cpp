#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* evenOdd(Node* head){
    Node* eveSt = NULL;
    Node* eveCtr = NULL;
    Node* oddSt = NULL;
    Node* oddCtr = NULL;
    while(head != NULL and head->next != NULL){
        if(head->data%2==0){
            if(eveCtr==NULL and eveSt == NULL){
                eveCtr = head;
                eveSt = head;
            }else{
                eveCtr->next = head;
                eveCtr = eveCtr->next;
            }
         }else{
            if(oddCtr == NULL and oddSt == NULL){
                oddCtr = head;
                oddSt = head;
            }
            else{
                oddCtr->next = head;
                oddCtr = oddCtr->next;
            }
        }
        head = head->next;
    }
    oddCtr->next = eveSt;
    eveCtr->next = NULL;
    return oddSt;
}

void print(Node* head){
    if(head==NULL)
    return;

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    Node* head = new Node(1);
    Node* head2= head;
    // head = head->next;
    for(int i=2; i<12; i++){
    Node* temp = new Node(i);
    head->next = temp;
    head = head->next;
    }
    // print(head2);
    Node* newHead = evenOdd(head2);
    print(head2);
    return 0;
}