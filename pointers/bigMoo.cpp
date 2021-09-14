#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str ="12345";
    sort(str.begin(),str.end(),greater<char>());
    cout<<str;
return 0;
}