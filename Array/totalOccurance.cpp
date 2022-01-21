#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n,int key){
    int res = -1;
    int st =0;
    int end = n-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(key == arr[mid]){
        end = mid -1;
        res = mid;}

        if(key < arr[mid])
        end = mid -11;

        if(key > arr[mid])
        st = mid +1;
    }
    return res+1;
}

int lastOccurance(int arr[],int n,int key){
    int res = -1;
    int st =0;
    int end = n-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(key == arr[mid]){
        st = mid +1;
        res = mid; }

        if(key < arr[mid])
        end = mid -1;

        if(key > arr[mid])
        st = mid +1;
    }
    return res+1;
}

int totalOccurance(int arr[],int n,int key){
    return lastOccurance(arr,n,key) - firstOccurance(arr,n,key) +1;
}

int main(){
    int n,key;
    cin>>n>>key;
   
    int arr[n];

    for(int i =0 ;i<n; i++)
    cin>>arr[i];

    // cout<<lastOccurance(arr,n,key);
    cout<<totalOccurance(arr,n,key);
    return 0;
}