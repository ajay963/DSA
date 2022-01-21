// union of two array
#include<bits/stdc++.h>
using namespace std;

int unionAns(vector<int> a,vector<int> b){
   unordered_set<int> s;
   for(int i=0;i<a.size();i++)
   s.insert(a[i]);

   for(int i=0;i<b.size();i++)
   s.insert(b[i]);
   
   return s.size();
}

int main(){
    vector<int> a = {15,20,5,15};
    vector<int> b = {15,15,15,20,10};
    cout<<unionAns(a,b);
    return 0;
}