// Kth smallest element
// time complexity O(n)
#include<iostream>
using namespace std;

int kthSmallest(int arr[],int st,int end,int k){
    for(int i = st; i<end; i++)
    for(int j = i+1; j<end ; j++){
        if( arr[i]>arr[j])
        swap(arr[i],arr[j]);
    }
    
  return arr[k-1];
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    cin>>arr[i];
    cin>>k;

    cout<<kthSmallest(arr,0,n,k);
    return 0;
}