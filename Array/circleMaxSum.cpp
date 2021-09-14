#include "bits/stdc++.h"
using namespace std;

int kadenSum(int a[],int n){
    int sum=0,maxSum=INT_MIN;

    for(int j=0;j<n;j++){
    (a[j]<0)?
        sum=0:
        sum+=a[j];
        maxSum = max(maxSum , sum);
    }
return maxSum;
}

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int j=0;j<n;j++)
    cin>>a[j];
    
    int wrapSum=0;
    int nonWrapSum=0,totalSum=0;

    nonWrapSum = kadenSum(a,n);
    for(int j=0;j<n;j++){
        totalSum+=a[j];
    a[j]=-a[j];
    }
   
   wrapSum = totalSum + kadenSum(a,n);

    cout<<max(wrapSum,nonWrapSum);
    return 0;
}