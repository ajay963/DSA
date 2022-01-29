#include<bits/stdc++.h>
using namespace std;

string ReverseSort(string str){
    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());
    return str;
}

int main(){
    pair<vector<int>, vector<int>> ans;
    string str = "";
    cin>>str;
    cout<<ReverseSort(str);
    return 0;
}