#include<bits/stdc++.h>
using namespace std;

   vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> ng;
        vector<long long> ans;
        ans.push_back(-1);
        ng.push(n-1);
        for(long long i=n-2;i>=0;i--){
            while( !ng.empty() and arr[i]>arr[ng.top()])
            ng.pop();
            
            long long res = (ng.empty())?-1:arr[ng.top()];
            // cout<<res<<" ";
            ans.push_back(res);
            ng.push(i);
        }
        reverse(ans.begin(),ans.end());
        // cout<<endl;
        return ans;
        
    }

    void sortStack(stack<int> &s){
        vector<int> arr;

        for(int i=0;!s.empty();i++){
            arr.push_back(s.top());
            s.pop();
        }
        
         sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());

        for(int i=0; i<arr.size();i++){
            s.push(arr[i]);
            cout<<arr[i]<<" ";
        }
    }

int main(){
    vector<int> arr = {1,3,2,4};
    // vector<long long> ans = nextLargerElement(arr,arr.size());
    stack<int> st;
    for(int i=0;i<arr.size();i++)
    st.push(arr[i]);

    sortStack(st);
}