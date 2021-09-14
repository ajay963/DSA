#include<iostream>
using namespace std;


int partition(int* arr,int l,int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[r],arr[i+1]);
    return i+1;
}

void quickSort(int* arr,int l,int r){
    if(l<r){
        int pv = partition(arr,l,r);

        quickSort(arr,l,pv-1);
        quickSort(arr,pv+1,r);
    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    quickSort(arr,0,4);

    for(int j=0;j<5;j++)
    cout<<arr[j]<<" ";
    return 0;
}