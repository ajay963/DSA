// sort an array without sorting alogo

#include<iostream>
using namespace std;

void withoutSort(int arr[],int n){
   int st = 0;
   int mid = 0;
   int end = n-1;
   while(mid<=end){
    switch (arr[mid]){
    case 0:
        swap(arr[mid++],arr[st++]);
        break;
    case 1:
    mid++;
       break;
case 2:
  swap(arr[mid],arr[end--]);    
 default:
        break;
    }
   }
   for(int i = 0; i<n ; i++)
   cout<<arr[i]<<" ";
}


int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i< n ; i++)
    cin>>arr[i];

    withoutSort(arr,n);
    return 0;
}