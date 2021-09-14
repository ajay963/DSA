#include<iostream>
#include<string>
using namespace std;

void revStr(string word){
    if(word.length()==0)
    return;

    revStr(word.substr(1));
    cout<<word[0];
}


int main(){
   string word;
   cin>>word;
    revStr(word);
    return 0;
}