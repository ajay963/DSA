// subArray with 0 sum
#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> a){
    unordered_set<int> s;
    int pre_sum = 0; // prefix sum
    for(int i=0;i<a.size();i++){
    pre_sum += a[i];
    if(s.find(pre_sum)!=s.end())
    return true;

    if(pre_sum == 0) //corner case
    return true;

    s.insert(pre_sum);
    }
    return false;
}

bool solve(vector<int> a,int sum){
    unordered_set<int> s;
    int pre_sum = 0; // prefix sum 
    for(int i=0; i<a.size();i++){
        pre_sum += a[i];

        if(s.find(pre_sum-sum)!=s.end())
        return true;

        if(pre_sum-sum == 0)
        return true;

        s.insert(pre_sum);
    }
    return false;
}

int main(){
    vector<int> a = {1,4,-3,1,2};
    vector<int> b = {5,8,6,13,3,-1};
    
    (solve(b,22))?cout<<"True":cout<<"False";

    return 0;
}
