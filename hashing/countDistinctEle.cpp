// count distinct elementss in every window
#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> a,int k){
    unordered_map<int,int> s;
    for(int i=0;i<k;i++)
    s[a[i]]++;
    vector<int> res;
    res.push_back(s.size());
    for(int i=k ;i<a.size();i++){
     s[a[i]]++;
     s[a[i-k]]--;
     if(s[a[i-k]]==0)
     s.erase(a[i-k]);
     res.push_back(s.size());
    }
    return res;
}

int main(){
    vector<int> a = {10,20,20,10,30,40,10};
    vector<int> b = {10,20,30,40};
    vector<int> ans = solve(b,2);
    
    for(int no:ans)
    cout<<no<<" "; 
    return 0;
}