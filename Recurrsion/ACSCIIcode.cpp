#include<iostream>
#include<string>
using namespace std;

void asciiString(string ans,string wd){

    if(wd.length()==0){
        cout<<ans<<endl;
        return;
    }
char ch = wd[0];
int code= ch;
string ros= wd.substr(1);
asciiString(ans+to_string(code),ros);
asciiString(ans+ch,ros);
asciiString(ans,ros);
}

int main(){
    asciiString("","AB");
    return 0;
}