// program to remove duplicates in strings
#include<bits/stdc++.h>
using namespace std;

string removeDup(string str){
    vector<int> visit(256,0);
    string ans;
    for(int i=0 ; i<str.length();i++){
    if(visit[str[i]]==0){
    ans += str[i];
    visit[str[i]]++; }}

    
    return ans;
}
int main(){
  string str = "abcabcaass";
  cout<<removeDup(str);
}