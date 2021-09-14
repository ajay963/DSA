#include<iostream>
#include<vector>
using namespace std;
  int missingNumber(int* array, int n) {
       int total = (n+2)*(n+1)/2;
       for(int j=0;j<n;j++){
           total-= array[j];
       }
       return total;
    }

void merge(int arr[],int l,int mid,int r){
    
    int n1=mid-l+1;
    int n2=r-mid;

    int temp1[n1];
    int temp2[n2];

    for(int j=0;j<n1;j++)
    temp1[j]=arr[l+j];

    for(int j=0;j<n2;j++)
    temp2[j]=arr[mid+1+j];

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(temp1[i] < temp2[j]){
            arr[k]=temp1[i];
            i++; k++;
        }
        else{
            arr[k]=temp2[j];
            j++; k++;
        }
    }

        while(i<n1){
            arr[k]=temp1[i];
            k++;  i++;}

        while(j<n2){
            arr[k]=temp2[j];
            k++; j++;}
}

void mergeSort(int arr[],int l,int r){
  if(l<r){
      int mid = (l+r)/2;
      mergeSort(arr,l,mid);
      mergeSort(arr,mid+1,r);
     
     merge(arr,l,mid,r);
  }
}
int main(){
   int arr[]={5,3,2,1};
//    mergeSort(arr,0,4);

//    for(int j=0;j<5;j++)
//    cout<<arr[j]<<" ";

cout<<missingNumber(arr,4);
    return 0;
}


