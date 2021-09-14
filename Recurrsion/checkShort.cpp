#include<iostream>
using namespace std;

chkSort(int arr[],int n){
    if(n==1)
    return true;
    return (arr[0]<arr[1]&&chkSort(arr+1,n-1));
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int j=0;j<n;j++)
    cin>>arr[j];

    chkSort(arr,n)==true?cout<<"Array is sorted":cout<<"Array is not sorted";
    return 0;
}