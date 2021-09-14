#include "bits/stdc++.h"
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int j=0;j<n;j++)
    cin>>arr[j];
  
    
    const int N = 1e6 + 2;
    int idx[N];
    for (int j=0;j<N;j++)
    idx[j]=-1;

    int min_Idx=INT_MAX;
    
    for (int j=0;j<N;j++){
        if (idx[arr[j]!=-1])
        min_Idx = min(min_Idx,idx[arr[j]]);
        else
        idx[arr[j]] = j;
    }

    (min_Idx==INT_MAX)?cout<<-1:cout<<min_Idx;

    return 0;
}