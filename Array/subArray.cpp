#include "bits/stdc++.h"
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int loop1=0;loop1<size;loop1++)
    cin>>arr[loop1];

    int ans=0,j=2,curr=2;
    int pd = arr[1]-arr[0];

    while (j<size) {
       if (pd == arr[j]-arr[j-1])
       curr++;
       
       else {
        pd = arr[j] - arr[j-1];
        curr = 2;
       }
       if(ans<curr)
      ans = curr;
      j++;
    }
    
    cout<<endl<<ans;

    return 0;
}