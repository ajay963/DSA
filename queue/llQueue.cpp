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

class queue{
    node* front;
    node* back;
    public:
    queue(){
        front = NULL;
        back = NULL;
    }
void push(int val){
    node* newNode = new node(val);

    if(front==NULL){
        front = newNode;
        back  = newNode;
        return;
    }

    back->next = newNode;
    back = newNode;
}
void pop(){
    if(front==NULL){
        cout<<"Queue underflow";
        return;
    }
    node* toDelete;
    toDelete = front;
    front = front->next;
    delete toDelete;
}

int peek(){
    if(front==NULL){
        cout<<"Queue is Empty";
        return -1;
    }
    return front->data;
}
bool empty(){
    if(front==NULL){
        return true;
    }
    return false;
}
};

int main(){
    queue qu;
    qu.push(12);
    qu.push(123);
    qu.push(124);
    qu.push(125);
    qu.push(126);
    cout<<qu.peek()<<" ";
    qu.pop();
    cout<<qu.peek()<<" ";
    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();
   qu.empty()?cout<<"True": cout<<"False";
    return 0;
}