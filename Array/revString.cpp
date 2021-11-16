#include<iostream>
using namespace std;

string revSt(string str){
    int st = 0;
    int end  = str.length()-1;

    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    return str;
}

int main(){
    string str = "CODEHELP";
    cout<<revSt(revSt(str));
    return 0;
}