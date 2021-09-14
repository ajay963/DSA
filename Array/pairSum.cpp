#include "bits\stdc++.h"
using namespace std;

bool pairSum(int n,int sum,int arr[]){
    int lowPt=0,highPt=n-1;
    for(int j=0;j<n;j++){
        if(arr[lowPt]+arr[highPt]>sum)
        --highPt;
        else if(arr[lowPt]+arr[highPt]<sum)
        ++lowPt;
        else{
        cout<<arr[lowPt]<<" "<<arr[highPt]<<" ";
        return true;
        }
        
    }
    return false;

}

int main(){
    int n,sum;
    cin>>n>>sum;

    int arr[n];
    for(int j=0;j<n;j++)
    cin>>arr[j];
    
    cout<<pairSum(n,sum,arr);
    return 0;
}