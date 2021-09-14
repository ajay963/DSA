#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "odvjomsizaqmmmmmmwomijuvefwv";
    int frq[26];
    sort(str.begin(),str.end(),less<char>());
    // cout<<str<<endl;
  for(int j=0;j<26;j++)
  frq[j]=0;

int mx=0;
char ch;
    for(int j=0;j<str.size();j++){
        frq[str[j]-'a']++;
     if(frq[str[j]-'a']>mx){
     mx=frq[str[j]-'a'];
     ch=str[j];
     }
    }
    cout<<mx<<" "<<ch;
    return 0;
}