#include<iostream>
#include<string>
using namespace std;

void subString(string ans,string wd){

    if(wd.length()==0){
        cout<<ans<<endl;
        return;
    }
char ch = wd[0];
string ros= wd.substr(1);
subString(ans+ch,ros);
subString(ans,ros);
}

int main(){
    subString("","ABC");
    return 0;
}