#include<bits/stdc++.h>
using namespace std;

void preGreater(int n,vector<int> arr){
   stack<int> st;
   st.push(arr[0]);
   cout<<-1<<" ";

   for(int i=1;i<n;i++){
       while(st.empty()!=true and st.top()<=arr[i])
       st.pop();
       int ans = (st.empty())?-1:st.top();
       cout<<ans<<" ";
       st.push(arr[i]);
   }
}

vector<int> nextGreater(int n,vector<int> arr){
    stack<int> st;
    vector<int> res;
    res.push_back(-1);
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.empty()!=true and st.top()<arr[i])
        st.pop();

        int ans = (st.empty())?-1:st.top();
        res.push_back(ans);
        st.push(arr[i]);
    }
    return res;
}

int main(){
    vector<int> arr;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>x;
    arr.push_back(x);}
    // preGreater(n,arr);
    vector<int> ans = nextGreater(n,arr);
    
    for(int i=ans.size()-1;i>=0;i--)
    cout<<ans[i]<<" ";
    return 0;
}