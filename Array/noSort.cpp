// Move all negative numbers to beginning 
// and positive to end with constant extra space
#include<bits/stdc++.h>
using namespace std;

void ntSort(int arr[],int n){
    int low =0;
    int it = 0;
    while(it<n){
        if(arr[it]<0)
        swap(arr[it],arr[low++]);
        it++;
    }

    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i =0; i<n ;i++)
    cin>>arr[i];

    ntSort(arr,n);

    return 0;
}