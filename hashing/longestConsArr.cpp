// longhest consecutive sub Array 
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a){
    int res = 0;
    unordered_set<int> s;

    for(int i=0; i<a.size();i++)
    s.insert(a[i]);
    
    int curr =0;
    for(int i=0; i<a.size();i++){
        if(s.find(a[i]-1)!=s.end())
        curr = 1;
        else{
            while(s.find(a[i]+curr)!=s.end())
            curr++;
        }
        res = max(res,curr);
    }
    return res;
}

int main(){
    vector<int> a = {1,9,3,4,2,20};
    cout<<solve(a);

    return 0;
}