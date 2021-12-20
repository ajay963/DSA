// longest subarray sum
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a,int sum){
   unordered_map<int,int> s;
   int res = 0;
   int pre_sum = 0;

   for(int i=0;i<a.size();i++){
       pre_sum += 0;

       if(pre_sum - sum == 0) 
       res  = i+1;

       if(s.find(a[i])==s.end())
       s.insert({a[i],i});

       if(s.find(pre_sum-sum)!=s.end())
       res = max(res,i-s[pre_sum-sum]);
   }
   return res;
}

int main(){
    vector<int> a = {5,8,-4,-4,9,-2,2};
    cout<<solve(a,4);
    return 0;
}