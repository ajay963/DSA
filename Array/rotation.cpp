#include<bits/stdc++.h>
using namespace std;

bool isRotated(string s1,string s2){
     if(s1.size() != s2.size())
     return false;
     
     if(s1 == s2)
     return true;
     queue<char> q1,q2;
     for(int i = 0;i<s1.size(); i++){
     q1.push(s1[i]);
     q2.push(s2[i]);
     }

     char ch;
     for(int i = 0;i<s1.size(); i++){
         ch = q1.front();
         q1.pop();
         q1.push(ch);
         if(q1 == q2)
         return true;
     }
     return false;
}

int main(){
    string s1 = "hello";
    string s2 = "helloLOL";
    cout<<isRotated(s1,s2);
    return 0;
}