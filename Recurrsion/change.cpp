#include<iostream>
#include<string>
using namespace std;

void changePi(string wd){
    if(wd.length()==0)
    return;
    if(wd[0]=='p' && wd[1]=='i'){
        cout<<"3.14";
        changePi(wd.substr(2));
    }else{
    cout<<wd[0];
    changePi(wd.substr(1));
}}

int main(){
    string wd="pippppiiiipi";
    changePi(wd);
    return 0;
}