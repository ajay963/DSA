#include<iostream>
using namespace std;

int search(int arr[],int n,int key){
    int ub=n,lb=0;
    int mid=(ub+lb)/2;
    while (ub>=lb) {
        if(arr[mid]==key)
        return mid+1;
        if(key>arr[mid]){
            ub=mid-1;
            mid=(lb+ub)/2;
        }
        else{
            lb=mid+1;
            mid=(lb+ub)/2;
        }
    }
        return -1;
    
}

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
 
  cout<<search(arr,9,9);
    return 0;
}