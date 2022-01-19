#include<bits/stdc++.h>
using namespace std;

void stockSpan(vector<int> stocks){
    stack<int> leftGreater;
    cout<<1<<" ";
    leftGreater.push(0);
    for(int i=1;i<stocks.size();i++){
     while(!leftGreater.empty() and stocks[i]>stocks[leftGreater.top()])
     leftGreater.pop();
     int ans = (leftGreater.empty())?i+1:i-leftGreater.top();
     cout<<ans<<" ";

     leftGreater.push(i);
    }
}

int main(){
    vector<int> arr={15,13,12,14,16,8,6,4,10,30};
    stockSpan(arr);
    return 0;
}