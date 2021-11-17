#include<bits/stdc++.h>
using namespace std;
#include<map>
using namespace std;

void duplicates(string s){
    map<char,int> count;

    for(int i = 0; i<s.size(); i++)
    count[s[i]]++;

    for(auto it:count)
    cout<<it.first<<" "<<it.second<<endl;
}

int main(){
    string s = "ggdhhdghhddd";
    duplicates(s);
    return 0;
}