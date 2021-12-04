#include<bits/stdc++.h>
using namespace std;

void findPattern(string str1,string str2){
    queue<char> txt,pat;
    vector<int> count;
    for(int i =0; i<str2.length() ; i++){
       pat.push(str2[i]);
       txt.push(str1[i]);
    }
  for(int i=str2.length(); i<=str1.length() ; i++){
  if(pat == txt)
  cout<<i-str2.length()<<" ";
  txt.pop();
  txt.push(str1[i]);
    }
}
int main(){
    string s1 = "abcabcdeeeeeabc";
    string s2 = "abc";

    findPattern(s1,s2);
    return 0;
}