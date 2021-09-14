#include<iostream>
using namespace std;

int firstOccur(int arr[],int n,int idx,int key){
    if(arr[idx]==key)
    return idx+1;
    if(idx==n)
    return -1;
    return firstOccur(arr,n,idx+1,key);
}

int lastOccur(int arr[],int n,int idx,int key){
    if(arr[idx]==key)
    return idx+1;
    if(idx==0)
    return -1;
    return lastOccur(arr,n,idx-1,key);
}

int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];

    for(int j=0;j<n;j++)
    cin>>arr[j];

    cout<<"Element is present at:"<<lastOccur(arr,n,n-1,key);
    return 0;
}