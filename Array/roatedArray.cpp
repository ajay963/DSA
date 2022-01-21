#include<iostream>
using namespace std;

int rotatedArray(int arr[],int n){
    int st = 0;
    int end = n -1;
    int size = n-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        int pre = (mid+size -1)%size;
        int next = (mid+1)%size;
        if(arr[mid]<=arr[pre] and arr[mid]<=arr[next])
        return mid +1;
        (arr[mid]<=arr[end])?
        end = mid -1 :  st = mid +1 ;
        // if(arr[mid]>=arr[st])
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i =0; i<n; i++)
    cin>>arr[i];

    cout<<rotatedArray(arr,n);
    return 0;
}