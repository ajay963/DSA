// #include "bits/stdc++.h"
#include<iostream>
#include<stack>
using namespace std;

class que{
  stack<int> s1;
  stack<int> s2;
  public:
  void push(int val){
      s1.push(val);
  }

  int pop(){
      if(s1.empty() and s2.empty()){
          cout<<"Queue is empty"<<endl;
          return -1;
      }
      if(s2.empty()){
          while(!s1.empty()){
              s2.push(s1.top());
              s1.pop();
          }
      }
      int topVal = s2.top();
      s2.pop();
      return topVal;
  }

  bool empty(){
      if(s1.empty() and s2.empty())
      return true;
      return false;
  }
};

int main(){
    que que;
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