#include<bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
  stack<int> st;
  
  for(int i=0;i<k and !q.empty();i++){
      st.push(q.front());
      q.pop();
  }
  
  queue<int> ansq;
  
  for(int i=0;i<k;i++){
      ansq.push(st.top());
      st.pop();
  }
  
  while(!q.empty()){
      ansq.push(q.front());
      q.pop();
  }
  return ansq;
}

int main(){
    queue<int> q;
    
    for(int i=0;i<5;i++)
    q.push(i+1);

    queue<int> ans = modifyQueue(q,3);

    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }
}