#include<bits/stdc++.h>
using  namespace std;

int maxArea(vector<int> arr,int n);
int maxBinaryArea(vector<vector<int>> arr,int n);

int maxBinaryArea(vector<vector<int>> arr,int n){
    int ans = maxArea(arr[0],n);

    // cout<<ans<<" ";
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
                if(arr[i][j])
                arr[i][j] +=arr[i-1][j];
    }
    ans = max(ans,maxArea(arr[i],n));
    }
  return ans;
}

int maxArea(vector<int> arr,int n){
    stack<int> nSt;
    vector<int> ns;

    ns.push_back(n);
    nSt.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        while( !nSt.empty() and arr[i]<=arr[nSt.top()])
        nSt.pop();
        int ans = (nSt.empty())?n:nSt.top();
        ns.push_back(ans);
        nSt.push(i);
    }
    reverse(ns.begin(),ns.end());

    stack<int> prevSt;
    vector<int> ps;
    
    prevSt.push(0);
    ps.push_back(-1);
    for(int i=1;i<n;i++){
        while( !prevSt.empty() and arr[i]<=arr[prevSt.top()])
        prevSt.pop();
        int ans = (prevSt.empty())?-1:prevSt.top();
        ps.push_back(ans);
        prevSt.push(i);
    }
    
    int res = 0;
    for(int i=0;i<n;i++){
        res = max(res,(ns[i]-ps[i]-1)*arr[i]);
    }
    return res;
}


int main(){
    // vector<int> arr1 = {6,2,5,4,1,5,6};
    // vector<int> arr = {2,5,1};
    
    vector<vector<int>> arr = { 
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,0,0}
    };


    // for(int i=0;i<arr[i].size();i++){
    // for(int j=0;j<arr[i].size();j++)
    // cout<<arr[i][j]<<" ";
    // cout<<endl;




    // cout<<maxArea(arr1,arr1.size());   
    cout<<maxBinaryArea(arr,arr[0].size());
    return 0;
}