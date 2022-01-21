#include<bits/stdc++.h>
using namespace std;

void solve(string op,int noZero,int noOne,int n){
    if(n==0){
        cout<<op<<endl;
        return;
    }

    if(noZero>noOne){
        string op1 =op;
        string op2 = op;
        op1.push_back('1');
        op2.push_back('0');
        solve(op1,noZero,noOne-1,n-1);
        solve(op2,noZero-1,noOne,n-1);
    }else if(noOne != 0){
        string op1=op;
        op1.push_back('1');
        solve(op1,noZero,noOne-1,n-1);
    }
    return;
}

int main(){
    solve("",2,2,4);
    return 0; 
}