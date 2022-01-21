// with extra spaces 
#include<bits/stdc++.h>
using namespace std;

struct minStack
{
    stack<int> main;
    stack<int> aux;

    void push(int x){
        main.push(x);
        if(x<aux.top())
        aux.push(x);
    }

    void pop(){
        if(main.top()==aux.top())
        aux.pop();
        main.pop();
    }

    int min(){
        return aux.top();
    }
};

int main(){
    minStack s;
    s.push(10);
    cout<<s.min()<<" ";
    s.push(20);
    cout<<s.min()<<" ";
    s.push(30);
    cout<<s.min()<<" ";
    s.push(8);
    cout<<s.min()<<" ";
    s.push(5);
    cout<<s.min()<<" ";
    s.push(2);
    cout<<endl<<s.min()<<" ";
    s.pop();
    cout<<s.min()<<" ";
    s.pop();
    cout<<s.min()<<" ";
    s.pop();
    cout<<s.min()<<" ";
    s.pop();
    cout<<s.min()<<" ";

}
