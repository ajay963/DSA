#include<bits/stdc++.h>
using namespace std;

 int count(vector<int> arr,int key,int n){
        int st = 0;
        int end = n-1;int mid =0;
        while(st<=end){
            mid = st+(end-st)/2;
            if(arr[mid]==key)
            st = mid+1;
            
            if(key>arr[mid])
            st = mid+1;
            
            if(key<arr[mid])
            end = mid-1;
        }
        return st;
    }
    vector<int> countEleLessThanOrEqual(vector<int> arr1,vector<int> arr2, 
                                 int m, int n)
    {
      sort(arr2.begin(),arr2.end());
      vector<int> ans;
      
      for(int i=0;i<n;i++){
          int ct = count(arr2,arr1[i],n);
          ans.push_back(ct);
      }
      
    
        return ans;
    }

int main(){
    vector<int> arr;
    int n,m;
    cin>>n>>m;

    vector<int> arr1,arr2;

    for(int i=0;i<n;i++){
        int temp = 0;
        cin>>temp;
        arr1.push_back(temp);
    }

    for(int i=0;i<m;i++){
        int temp = 0;
        cin>>temp;
        arr2.push_back(temp);
    }


  vector<int> ans = countEleLessThanOrEqual(arr1,arr2,arr1.size(),arr2.size());
 
  for(auto it:ans)
  cout<<it<<" ";
  return 0;
}