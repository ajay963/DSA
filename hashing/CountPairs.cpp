#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int> arr1,vector<int> arr2,int sum){
    unordered_set<int> us;

    for(int i=0;i<arr2.size();i++)
    us.insert(arr2[i]);
    
    int ctr=0;
    for(int i=0;i<arr1.size();i++){
      if(us.find(sum-arr1[i])!=us.end())
      ctr++;
    }
  return ctr;
}

int main(){
    vector<int> arr1 = {7,5,1,3};
    vector<int> arr2 = {3,5,2,8};

    cout<<countPairs(arr1,arr2,10);
    return 0;
}