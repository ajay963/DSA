#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr,int index,int k,int &ans){
    if( arr.size()==1){
    ans = arr[0];
    return;
    }
    
    index = (index+k)%arr.size();
    arr.erase(arr.begin()+index);
    solve(arr,index,k,ans);
    return;
}

int main(){
    int n = 60;
    int k = 13;
    vector<int> arr;
    int ans = -1;
    for(int i=1;i<=n;i++)
    arr.push_back(i);
  solve(arr,0,k-1,ans);
  cout<<ans;
  return 0;
}