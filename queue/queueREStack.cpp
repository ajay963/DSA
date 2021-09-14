#include<stack>
#include<iostream>
using namespace std;

class queue{
    stack<int> s1;
    public:

    void push(int val){
        s1.push(val);
    }

    int pop(){
        if(s1.empty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
       int topVal = s1.top();
       s1.pop();
        if(s1.empty()){
             return topVal;
        }
        int item = pop();
        s1.push(topVal);
        return item;
    }

    bool empty(){
        if(s1.empty())
        return true;
        return false;
    }
};


int main(){
    queue que;
    que.push(100);
    que.push(200);
    que.push(300);
    que.push(400);
    cout<<que.pop()<<endl;
    cout<<que.pop()<<endl;
    cout<<que.pop()<<endl;
    cout<<que.pop()<<endl;
    cout<<que.pop()<<endl;
    cout<<que.pop()<<endl;
    que.push(450);
    que.push(500);
    cout<<que.pop()<<endl;
    cout<<que.pop()<<endl;

    return 0;
}