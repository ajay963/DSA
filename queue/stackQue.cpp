#include<queue>
#include<iostream>
using namespace std;


class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    
    public:
    Stack(){
        N=0;
    }
    void push(int val){
        N++;
        q2.push(val);
        if(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop(){
        if(N<0){
            cout<<"stack underflow";
            return;
        }
      q1.pop();
      N--;
    }
     int top(){
         return q1.front();
     }
     int size(){
         return N;
     }
};
int main(){
    Stack st;

    for(int j=1;j<=5;j++)
    st.push(j*10);

    for(int j=0;j<7;j++){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}