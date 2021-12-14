// Letter Case Permutation
#include<bits/stdc++.h>
using namespace std;

void solve(string in,string op,vector<string> &ans){
    if(in.length()==0){
        ans.push_back(op);
        return;
        }
    if(isalpha(in[0])){
    string op1 = op;
    string op2 = op;
      op1.push_back(toupper(in[0]));
      op2.push_back(tolower(in[0]));
    in.erase(in.begin()+0);
    solve(in,op1,ans);
    solve(in,op2,ans);
    }else{
        string opT = op;
        opT.push_back(in[0]);
        in.erase(in.begin()+0);
        solve(in,opT,ans);
    }
    return;
}

int main(){
    vector<string> ans;
    string str = "a1B2";
    solve(str,"",ans);

    for(auto str:ans)
    cout<<str<<endl;
    return 0;
}