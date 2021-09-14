#include "bits\stdc++.h"
using namespace std;

int  main(){
    int n;
    cin>>n;
    int a[n];

    for(int j=0;j<n;j++)
    cin>>a[j];
    int sum=0,maxSum=INT_MIN;

    for(int j=0;j<n;j++){
    (a[j]<0)?
        sum=0:
        sum+=a[j];
    
        maxSum = max(maxSum , sum);
    }

    cout<<maxSum;

    return 0;
}