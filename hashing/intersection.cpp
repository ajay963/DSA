#include<bits/stdc++.h>
using namespace std;

int intersection(vector<int> a,vector<int> b){
    unordered_set<int> s;
    for(int i=0; i<a.size(); i++)
    s.insert(a[i]);
    
    int res = 0;
    for(int i=0;i<b.size();i++){
    if(s.find(b[i])!=s.end()){
        res++;
        s.erase(b[i]);
    } }
    return res;
}

int main(){
    vector<int> a = {10,20};
    vector<int> b = {20,30};
    cout<<intersection(a,b);
     
    return 0;
}