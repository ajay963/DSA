// in  this problem we will use anagram btw two strings and
// sliding window concept
#include<bits/stdc++.h>
using namespace std;

bool areSame(vector<int> ct,vector<int> cp){
    for(int i=0; i<256;i++)
    if(ct[i]!=cp[i])
    return false;

    return true;
}
bool searchAnagram(string txt,string pat){
    vector<int> ct(256,0);
    vector<int> cp(256,0);
    for(int i=0 ; i<pat.length(); i++){
        ct[txt[i]]++;
        cp[pat[i]]++;
    }

    for(int i = pat.length(); i<txt.length(); i++){
        if(areSame(ct,cp))
        return true;
        ct[txt[i]]++;
        ct[txt[i-pat.length()]]--;
    }
    return false;
}
int main(){
    string str1 = "abcaeerbacreabce";
    string str2 = "abce";
    cout<<searchAnagram(str1,str2);
    return 0;
}