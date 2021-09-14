#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    
    
    for(int j=0;j<n;j++)
    cin>>a[j];

    int arrSum[n+1];
    arrSum[0] = 0;
    for(int j=1;j<=n;j++)
    arrSum[j] = arrSum[j-1]+a[j];
    
    int maxSum = INT_MIN;
    for(int j=1;j<n;j++){
     int sum=0;
     for(int k=0;k<n;k++){
         sum=arrSum[j]-arrSum[k];
         maxSum = max(maxSum,sum);
     }
    }
  cout<<maxSum;
    return 0;
}