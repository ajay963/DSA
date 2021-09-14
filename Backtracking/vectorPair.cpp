#include<iostream>
#include<vector>
using namespace std;

bool myCompare(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){
    int arr[] = {10,16,7,14,5,3,12,9};
    vector <pair<int,int>> v;
    int n=sizeof(arr)/sizeof(arr[0]);
    pair <int,int> temp;
    for(int j=0;j<n;j++){
     temp.first=arr[j];
     temp.second=j;
     v.push_back(temp);
    }   

   for(int i=0;i<n;i++)  
   for(int j=0 ;j<n;j++){
       if(!myCompare(v[j],v[j+1]))
       swap(v[j],v[j+1]);
   }

    for(int j=0;j<n;j++){
    arr[v[j].second]=j;   
    // cout<<v[j].second<<" "<<j<<endl;   
    }

    for(int j=0;j<n;j++)
    cout<<arr[j]<<" ";  
     return 0;
}