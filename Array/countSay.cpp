#include<bits/stdc++.h>
using namespace std;

string countSay(int n){
    map<int,int> num;
    while(n>0){                                                                    
        ++num[n%10];
        n/=10;
    }
    string str;
    for(auto it = num.rbegin(); it != num.rend() ; it++)
    str += to_string(it->second) + to_string(it->first);
    
    return str;
}

string countSayMM(int n){
    if( n == 1)
    return "1";

    string str = countSayMM(atoi(countSay(n-1)));
    return str;
}

int main(){
    int n = 66664222;
    cout<<countSay(n);
    // 
    // cout<<str;
    return 0;
}