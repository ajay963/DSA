// Rain water trap problem

#include<bits/stdc++.h>
using namespace std;

int maxWaterTrap(vector<int> arr,int n){
  vector<int> prevGr;
  prevGr.push_back(arr[0]);
  for(int i=1;i<n;i++)
     prevGr.push_back(max(prevGr[i-1],arr[i]));
  
  vector<int> nextGr;
  nextGr.push_back(arr[n-1]);
  for(int i=n-2;i>=0;i--)
  nextGr.push_back(max(arr[i],nextGr[n-i-2]));

  reverse(nextGr.begin(),nextGr.end());
  int areaSum = 0;
  for(int i=0;i<n;i++){
  areaSum += min(nextGr[i],prevGr[i])-arr[i];
  }
   

//   for(int i=0;i<n;i++)
//   cout<<nextGr[i];
  return areaSum;
}

int main(){
    vector<int> arr={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout<<maxWaterTrap(arr,arr.size());
    return 0;
}