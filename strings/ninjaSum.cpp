#include<bits/stdc++.h>
using namespace std;

long long appleAndCoupon(int n, int m, vector<int> arr){
    sort(arr.begin(),arr.end());
    long long sum = 0;
    for(int i=0; i<n; i++)
       sum = sum+arr[i];
     sum = sum - arr[n-m];
    return sum;
}

int main(){
    vector<int> arr = {10 ,34 ,12 ,14 ,54 ,12 ,15};
    cout<<appleAndCoupon(arr.size(),4,arr);
    return 0;
}