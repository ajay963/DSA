// Longest SubArray with equal to 0s and 1s
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a,int sum){
    unordered_map<int,int> s;
    int res = 0;
    int pre_sum = 0;
    vector<int> temp;
    
    for(int i=0; i<a.size();i++)
    (a[i] == 1) ? temp.push_back(a[i]) : temp.push_back(-1);

    for(int i=0; i<a.size(); i++){
        pre_sum += temp[i];
        if(pre_sum== 0)
        res = i+1;

        if(s.find(temp[i])==s.end())
        s.insert({temp[i],i});
        
        if(s.find(pre_sum)!=s.end())
        res = max(res,i-s[pre_sum]);
        
    }
    return res;
}

int main(){
    vector<int> a = {0,0,1,1,1,1,1,0};
    int sum = 0;
    cout<<solve(a,sum);
   return 0;
}