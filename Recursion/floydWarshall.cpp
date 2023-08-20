#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printMat(int mat[4][4],int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        int temp;
        cin>>temp;
        arr[i][j] = (temp==-1)? INT16_MAX : temp;
    }

    for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      arr[i][j] = min(arr[i][j],arr[i][k] + arr[k][j]);
    
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
     cout<<arr[i][j]<<" "; 
     cout<<endl;
    }
    return 0;
}
