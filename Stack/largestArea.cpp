// largest Histograoh Area
#include<bits/stdc++.h>
using namespace std;

int largeArea(int n,vector<int> arr){
    stack<int> prevSm;
    vector<int> prevIdx;
    prevSm.push(0);
    prevIdx.push_back(-1);
    for(int i=1;i<n;i++){
        while(prevSm.empty()!=true and arr[prevSm.top()]>arr[i])
        prevSm.pop();

        int ans = (prevSm.empty())?-1:prevSm.top();
        prevIdx.push_back(ans);
        prevSm.push(i);
    }

       stack<int> nextSm;
       vector<int> nextIdx;
       nextSm.push(n-1);
       nextIdx.push_back(n);
       for(int i=n-2;i>=0;i--){
        while(nextSm.empty()!=true and arr[nextSm.top()]>arr[i])
        nextSm.pop();

        int ans = (nextSm.empty())?n:nextSm.top();
        nextIdx.push_back(ans);
        nextSm.push(i);
    }
    
    reverse(nextIdx.begin(),nextIdx.end());
    int curr =0,res =0;
    for(int i=0;i<n;i++){
        curr = arr[i];
        curr += (i-prevIdx[i]-1)*arr[i];
        curr += (nextIdx[i]-i-1)*arr[i];
        res = max(res,curr);
        cout<<nextIdx[i]<<" ";
    }
    cout<<endl;
    return res;
}

int main(){
    vector<int> arr = {6,2,5,4,1,5,6};
    cout<<largeArea(arr.size(),arr);
    return 0;
}