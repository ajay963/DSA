#include<iostream>
using namespace std;

#define n 20
class queue{
 int* arr;
 int front;
 int back;

public:
queue(){
    arr = new int[n];
    front  = -1;
    back = -1;
}

void push(int no){
    if(back==n-1){
    cout<<"Queue overflow";
    return;
    }

    back++;
    arr[back]=no;

    if(front=-1)
    front++;
}

void pop(){
    if(front==-1 || front>back){
        cout<<"No element present";
        return;
    }
    front++;
}
int peek(){
    if(front==-1 || front>back){
        cout<<"No Element present";
        return -1;
    }
    return arr[front];
}
bool empty(){
    if(front==-1 || front>back){
        return true;
    }
    return false;
}
};

int main(){
    queue q;
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty();
    q.pop();
    cout<<q.peek()<<endl;
    q.empty()?cout<<"True":cout<<"False";
    return 0;
}