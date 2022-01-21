#include<bits/stdc++.h>
using namespace std;

void solve(string in,string op){
    if(in.length() == 0){
        cout<<op<<endl;
        return;
    }
    string output1 = op;
    string output2 = op;
    output1.push_back(in[0]);
    output2.push_back(toupper(in[0]));
    in.erase(in.begin()+0);
    solve(in,output1);
    solve(in,output2);
    return;
}

int main(){
    string str ="abe";
    solve(str,"");
    return 0;
    }