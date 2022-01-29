#include<bits/stdc++.h>
using namespace std;

string encodeString(string str){
    string ans;

    for(char ch:str){
        
        if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
         if(ch=='a')
         ans.push_back('z');
         else
         ans.push_back(ch+1);
        }

        else if(ch=='E' or ch=='I' or ch=='O' or ch=='U'){
         if(ch=='A')
         ans.push_back('Z');
         else
         ans.push_back(ch+1);
        }
        
        else{
        //  if(ch=='z')
        //  ans.push_back('a');

        //  else if(ch=='Z')
        //  ans.push_back('A');
         
        //  else
         ans.push_back(ch-1);
        }

    }
    return ans;
}

int main(){
    string str = "";
    cin>>str;
    cout<<encodeString(str);
    return 0;
}