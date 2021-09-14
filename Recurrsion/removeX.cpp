#include<iostream>
#include<string>
using namespace std;

string removeAllX(string wd){
    if(wd.length()==0)
    return "";

    char ch=wd[0];
    string ans= removeAllX(wd.substr(1));

    if(ch=='x')
    return ans+ch;
    return ch+ans;
}
int main(){
    cout<<removeAllX("aasxxjbnvcjxxxkmlvc");
    return 0;
}