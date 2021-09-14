#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;

    for(int loop1=0;loop1<n;loop1++)
    cin>>arr[loop1];

    if(n==1){
      cout<<1<<endl;
      return 0;
    }

    int mx = -1,rday=0;

 for (int j=0; j<n;j++){
   if(arr[j]>mx && arr[j]>arr[j+1])
   rday++;

   mx = max(mx,arr[j]);
   
 }
  cout<<rday;
    return 0;
}

