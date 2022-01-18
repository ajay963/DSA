#include<bits/stdc++.h>
using namespace std;

void generateNo(vector<int> arr,int k){
    deque<int> dqu;

    for(int i=0;i<k;i++){
        while(!dqu.empty() and arr[dqu.back()]<=arr[i])
        dqu.pop_back();
        dqu.push_back(i);
        
    }
   for(int i=k;i<arr.size();i++){
       cout<<arr[dqu.front()]<<" ";

       while( !dqu.empty() and dqu.front()<=i-k)
       dqu.pop_front();

       while( !dqu.empty()  and arr[dqu.back()]<=arr[i])
       dqu.pop_back();

       dqu.push_back(i);
   }
   cout<<arr[dqu.front()];
}

int main(){
    vector<int> arr = {10,8,5,12,15,7,6};
    generateNo(arr,3);
    return 0;
}  