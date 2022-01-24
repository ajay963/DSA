#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a,vector<int> b){
    if(a.size()!=b.size()) return -1;
    unordered_map<int,int> s;
    int res = 0;
    int pre_sum = 0;
    vector<int> temp;

    for(int i=0; i<a.size();i++)
    temp.push_back(a[i]-b[i]);

    for(int i =0;i<a.size(); i++){
        pre_sum += temp[i];

        if(pre_sum==0) res = i+1;

        if(s.find(temp[i])==s.end())
        s.insert({temp[i],i});
        
        if(s.find(pre_sum)!=s.end())
        res = max(res,i-s[pre_sum]);
    }
    return res;
}

int main(){
    vector<int> a = {0,1,0,0,0,0};
    vector<int> b = {1,0,1,0,0,1};
    cout<<solve(a,b);
    return 0;
}