#include<bits/stdc++.h>
using namespace std;

void sortString(string str){
    vector<int> v1,v2;

    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' and str[i]<='z')
        v1.push_back(str[i]);
        if(str[i]>='A' and str[i]<='Z')
        v2.push_back(str[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    int i=0,j=0;
    for(int k=0;k<str.size(); k++){
        if(str[k]>='a' and str[k]<='z')
        str[k] = v1[i++];
        
        if(str[k]>='A' and str[k]<='Z')
        str[k] = v2[j++];

    }
    cout<<str;
}

int main(){
    string str = "abEEssG";
    sortString(str);
}