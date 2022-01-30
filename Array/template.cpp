#include<bits/stdc++.h>
using namespace std;

int maxFXVI(int n, vector<int> &arr){
    unordered_map<int,int> ans;
    
    for(int i=0;i<n;i++)
    ans[arr[i]]++;
    
    int res =0;
    for(int i=0;i<n;i++){
        res = max(res,n-ans[arr[i]]);
        // cout<<res<<" ";
    }
    // cout<<endl;
    return res;
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int temp =0;
        cin>>temp;
        arr.push_back(temp);
    }
  cout<<maxFXVI(n,arr);
  return 0;
}