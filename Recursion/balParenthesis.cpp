#include<bits/stdc++.h>
using namespace std;

void solve(string op,int openBr,int closeBr){
    if(openBr==0 and closeBr==0){
        cout<<op<<endl;
        return;
    }
    
    if(openBr!=0){
    string op1 = op;
    op1.push_back('(');
    solve(op1,openBr-1,closeBr);
    }
    if(closeBr>openBr and closeBr!=0){
    string op2 = op;
    op2.push_back(')');
    solve(op2,openBr,closeBr-1);
    }

    return;
}

int main(){
    solve("",3,3);
    return 0;
}