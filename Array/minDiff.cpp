#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int size,int key){
    int st = 0;
    int end = size-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if( arr[mid] == key)
        return arr[mid];

        if(key > arr[mid])
        st = mid +1;
        if(key < arr[mid])
        end = mid -1;
    }
    return (abs(key - st) >= abs(key - end))?
    arr[st] : arr[end]; 
}
int main(){
    int arr[] = {4,6,11,12,14};
    int key = 7;
    cout<<minDiff(arr,sizeof(arr)/sizeof(arr[0]),key);
    return 0;
}