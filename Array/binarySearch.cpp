// binary search
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
   int st = 0;
   int end = n-1;
   while(st<=end){
       int mid = st + (end - st)/2;
       if (key == arr[mid])
       return mid ;
       if(key < arr[mid])
       end = mid -1;
       if(key > arr[mid])
       st = mid +1;
   }
   return -1;
}

int binarySearchRcc(int arr[],int st,int end,int key){
    if( st > end)
    return -1;
    int mid = st + (end - st )/ 2;
    if(key == arr[mid])
    return mid;

    if(key < arr[mid])
    return binarySearchRcc(arr,st,mid -1 ,key);

    if(key > arr[mid])
    return binarySearchRcc(arr,mid+1,end,key);
}

int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];

    for(int i=0 ;i<n ;i++)
    cin>>arr[i];

    cout<<binarySearch(arr,n,key);
    return 0;
}