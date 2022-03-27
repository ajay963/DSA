#include<bits/stdc++.h>
using namespace std;

  long long minCost(vector<long long> arr, int n) {
        // Your code here
          priority_queue<int> pq;
          long long ans = 0;
          
          for(auto i=0;i<n;i++){
              pq.push(arr[i]*-1);
          }
          
          int temp =0;
          while(true){
              temp = 0;
              temp = pq.top();
              pq.pop();
              temp += pq.top();
              pq.pop();

              ans += temp;
              cout<<temp<<" ";
              if(pq.empty())
              return ans;
              pq.push(temp);
          } cout<<endl;
         
    }

int main(){
    vector<long long> arr = {4, 3, 2, 6};

    cout<<minCost(arr,arr.size());
}