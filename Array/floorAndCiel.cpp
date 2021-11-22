#include<bits/stdc++.h>
using namespace std;

int floor(int arr[],int size,int key){
    int st =0;
    int end =size-1;
    int res = -1;
    while(st<=end){
    int mid = st + (end-st)/2;
    if(key == arr[mid])
    return arr[mid];

    if(key<arr[mid])
     end = mid -1;

    if(key>arr[mid]){
     res = arr[mid];
     st = mid +1;
    }
    }
    return res;
}

int ciel(int arr[],int size,int key){
     int st =0;
    int end =size-1;
    int res = -1;
    while(st<=end){
    int mid = st + (end-st)/2;
    if(key == arr[mid])
    return arr[mid];

    if(key<arr[mid]){
     res = arr[mid];
     end = mid -1;

    if(key>arr[mid])
      st = mid +1;
    
    }
    return res;
}
int main(){
    int key;
    cin>>key;
    int arr[] = { 1, 2, 3, 4, 8, 10, 10, 10, 12, 19};
    cout<<floor(arr,10,key);
    return 0;
}