#include<iostream>
#include<string>
using namespace std;

string dupRem(string wd){
    if(wd.length()==0)
    return "";
    char ch=wd[0]; 
    string ans=dupRem(wd.substr(1));
    if(ch==ans[0])
    return ans;
    else
    return (ch+ans); 
}
int main(){
    cout<<dupRem("wwwaaabbddsss");
    return 0;
}