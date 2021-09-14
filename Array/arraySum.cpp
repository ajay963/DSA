#include "bits/stdc++.h"
using namespace std;

int main(){
 int n,sm;
 cin>>n>>sm;
 int arr[n];

 for (int i=0;i<n;i++)
 cin>>arr[i];
 
 int st=0,ed=-1,i=0;
 int sum=0,ans=0,j=0;
 while(j<n && sum+arr[j]<=sm){
   sum+=arr[j];
   j++;

 }
 if(sum==sm){
 cout<<i+1<<" "<<j+1;
 return 0;
 }
 
 while (j<n)
 {
    sum+=arr[j];
    while (sum > sm)
    {
        sum-=arr[i];
        i++;
    }
    if(sum==sm){
        st=i+1;
        ed=j+1;
        break;
    }
    j++;
 }
 
cout<<st<<" "<<ed;

 return 0;
}