// sockMerchant problem
#include<iostream>
#include<vector>
using namespace  std;

int sockMerchant(int n,vector<int> arr){
 int pair = 0 ,mx = 0;
 vector<int> socks(100);

 for(int i = 0; i<n; i++){
 ++socks[arr[i]];
 mx = max(mx,arr[i]);
 }

 for(int i =0 ;i<=mx; i++)
 pair += socks[i]/2;

 return pair;
}

int main(){
    vector<int> arr;
    int n = 0;
    cin>>n;
    for(int i=0; i<n ; i++)
    cin>>arr[i];

    cout<<sockMerchant(n,arr);
    return 0;
}